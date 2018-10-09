# Opendevices  IoT workshop 2

![](https://github.com/opendevices/iot.apps/blob/master/workshop2/iot.png)

In this workshop we are going to setup **DHT11** 3 pins model, a temperature and humidity sensor on Raspberry Pi.
You will learn how to connect the sensor to the Raspberry Pi , how to program DHT11 to read humidity and temperature and send the output to ssh terminal.

The characteristics of DHT11 sensor 3 pins model are :
 - 0-50°C temperature readings ±2°C accuracy
 - 20-80% humidity readings with 5% accuracy
 - Size 15.5mm x 12mm x 5.5mm
 - 1 Hz sampling rate.
 - 3 to 5V power and I/O.
 
 
## 1. Equipment and software.

For this workshop we need some equipment and software.

![Equipement](https://github.com/opendevices/iot.apps/blob/master/workshop2/all.jpg)


 - Raspberry PI with Raspbian system installed.
 - Temperature and humidity sensor **DHT11**
 - 3 Jumper Wires.
 - WiringPi C library [link](https://projects.drogon.net/raspberry-pi/wiringpi/)
 - Git software on your Raspberry PI
 - Computer or laptop with your favorite operating system.
 - Ssh Client on your computer.
 - Wifi connection.

## 2. Connecting DHT11 sensor to Raspberry Pi.

 We are using DHT11 sensor with three pin.

![DHT11 Temerature & Humidity sensor](https://github.com/opendevices/iot.apps/blob/master/workshop2/dht11.jpg)

  - Connect the 3 jumper wires to the DHT11 sensor.

  - Connect the end of jumper wires  to raspberry pi, as below.

    * Pinout 1  (Signal)    => Raspberry Pi pinout 7 BCM4 (GPCLOK0).
    * Pinout 2  (Vcc +)     => Raspberry Pi pinout 1 3v3 Power.
    * Pinout 3  (Ground -)  => Raspberry Pi pinout 6 Ground.
    
![Connect DHT11 with Raspberry Pi](https://github.com/opendevices/iot.apps/blob/master/workshop2/dht11rpi.jpg)

    [See the comprehensive GPIO Pinout guide for the Raspberry Pi.](https://pinout.xyz/#)

  - Power your Raspbbery Pi


## 3. Software Setup.

Connect to your Raspberry Pi using ssh.

- Install git software on your Raspberry Pi system.

```bash
pi@raspberrypi$ sudo apt-get install git
```
- Download or clone  **wiringPi** from git repository.

```bash
pi@raspberrypi$ git clone git://git.drogon.net/wiringPi
```

- Install wiringPi C library on your system.

```bash
pi@raspberrypi$ cd wiringPi/
pi@raspberrypi$ ./build
```
## 4. Programming the DHT11 sensor.

- Download the exemple program

```bash
pi@raspberrypi$ wget temp.c
```
- Compile it

```bash
pi@raspberrypi$ gcc -o temp temp.c -lwiringPi -lwiringPiDev  
pi@raspberrypi$ ./temp
```
You will receive information from sensor, and it appears on your ssh terminal.
