# Opendevices IoT workshop 2

![](https://github.com/opendevices/iot.apps/blob/master/workshop2/iot.png)

In this workshop we are going to setup **DHT11** a temperature and humidity sensor
on Raspberry Pi. You will learn how to connect the sensor to the raspberry Pi, how to
read data from the DHT11 sensor and display it on ssh terminal.

## 1.Equipment

For this workshop we need some equipment.

![Equipement](https://github.com/opendevices/iot.apps/blob/master/workshop3/all.jpg)

- Raspberry Pi.
- **DHT11**, temperature and humidity sensor.
- 3 jumber wires.

## 2. Connecting DHTT11 sensor to Raspberry Pi.

We are using DHT11 sensor, 3 pins model.

 - 0-50°C temperature readings ±2°C accuracy
 - 20-80% humidity readings with 5% accuracy
 - Size 15.5mm x 12mm x 5.5mm
 - 1 Hz sampling rate.
 - 3 to 5V power and I/O.

![DHT11 Temerature & Humidity sensor](https://github.com/opendevices/iot.apps/blob/master/workshop3/dht11.jpg)


 * Connect the 3 jumber wires to the DHT11 sensor  

 ![DHT11 & Raspberry](https://github.com/opendevices/iot.apps/blob/master/workshop3/dht11rpi.jpg)

 * Connect the end of jumper wires to raspberry pi, as below.
   - Pinout 1 (Signal)   =>   Raspberry Pi pinout BCM4 (GPCLOk0).
   - Pinout 2 (Vcc ++)   =>   Raspberry Pi pinout 3v3 Power.
   - Pinout 3 (Ground -) =>    Raspbery Pi pinout 6 Ground.

   ![Raspberry wires](https://github.com/opendevices/iot.apps/blob/master/workshop3/rpiwires.jpg)

 * Power the Raspberry
 * Connect to it using ssh
