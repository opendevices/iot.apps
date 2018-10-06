# Opendevices  IoT workshop 2

In this workshop we are going to setup **DHT11**, a temperature and humidity sensor on Raspberry Pi.
You will learn how to connect the sensor to the Raspberry Pi , how to program DHT11 to read humidity and temperature and send the output to ssh terminal.


## 1. Equipment and software.

For this workshop we need some equipment and software.

 - Raspberry PI with Raspbian system installed.
 - Temperature and humidity sensor **DHT11**
 - 3 Jumper Wires.
 - WiringPi C library (link)[https://projects.drogon.net/raspberry-pi/wiringpi/]
 - Git software on your Raspberry PI
 - Computer or laptop with your favorite operating system.
 - Ssh Client on your computer.
 - Wifi connection.

## 2. Connecting DHT11 sensor to Raspberry Pi.

 We are using DHT11 sensor with three pin.

  - Connect the 3 jumper wires to the DHT11 sensor.
  - Connect the end of jumper wires  to raspberry pi, as below.

    * Pinout 1  (Signal)    => Raspberry Pi pinout 7 BCM4 (GPCLOK0).
    * Pinout 2  (Vcc +)     => Raspberry Pi pinout 1 3v3 Power.
    * Pinout 3  (Ground -)  => Raspberry Pi pinout 6 Ground.


    (See the comprehensive GPIO Pinout guide for the Raspberry Pi.)[https://pinout.xyz/#]

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
