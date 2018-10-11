#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <wiringPi.h>

#define MAXTIMINGS  85
#define PIN 7

#define START_TIME 20
#define RESPONSE_TIME 40

int dht11_data[5] = {0};

void dht11_start(void)
{
        pinMode(PIN, OUTPUT);
        digitalWrite(PIN, LOW);
        delay(START_TIME);
}

void dht11_response(void)
{
        digitalWrite(PIN, HIGH);
        delayMicroseconds(RESPONSE_TIME);
        pinMode(PIN, INPUT);
}

uint8_t dht11_checksum(int data[])
{
        int i;
        uint8_t sum = 0;

        for (i = 0; i < 4; i++)
                sum +=  data[i];

        return (data[4] == (sum & 0xFF));
}

void dht11_print(int data[])
{
        printf("Temperature = %d.%d C\t", data[2], data[3]);
        printf("Humidity = %d.%d %\n", data[0], data[1]);
}

void dht11_read(void)
{
        uint8_t state = HIGH;
        uint8_t counter = 0;
        uint8_t i;
        uint8_t bits = 0;

        for (i = 0; i < 5; i++)
                dht11_data[i] = 0;

        
        dht11_start();
        
        dht11_response();

        /* read data */
        for (i = 0; i < MAXTIMINGS; i++) {
                counter = 0;
                /* read the PIN value : HIGH or LOW */
                while (digitalRead(PIN) == state) {
                        counter++;
                        delayMicroseconds(1);
                        if (counter == 255)
                                break;
                }


                state = digitalRead(PIN);

                if (counter == 255)
                        break;
                /* ignore first 3 transitions */        
                if ((i >= 4) && (i % 2 == 0)) {
                        dht11_data[bits/8] <<= 1;

                        if (counter > 16) 
                                dht11_data[bits/8] |= 1;

                        bits++;
                }
        }

        /* check data */
        if (bits >= 40 && dht11_checksum(dht11_data)) {
                dht11_print(dht11_data);
        } else {
                printf("Erroneous data ...\n");
        }
}

int main(void)
{
        printf("Temperature & Humidity Progam  DHT11 sensor\n");

        /* use wiringPi pin numbering scheme */
        if (wiringPiSetup() == -1)
                exit(1);

        while (1) {
                dht11_read();
                delay(1000);
        }

        return 0;
}
