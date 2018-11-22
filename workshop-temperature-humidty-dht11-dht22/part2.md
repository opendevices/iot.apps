![Ionoid IoT](https://github.com/opendevices/iot.apps/blob/master/doc/img/IonoidIoTsmall.png)
# 3. Adding software to your Raspberry Pi system.


## 3.1 Static Binary

You can download the static binary from here [DHT11-DH22 Static Binary](https://github.com/opendevices/iot.apps/tree/master/workshop-temperature-humidty-dht11-dht22/bin)

Download the one for your architecture.

Or you can do a manual build see below.


## 3.2 Manual Building 

After connecting the DHT11 sensor to Raspberry Pi , we need additional software to use
DHT11 sensor. Connect to your raspberry pi using ssh and add the following programs.

 - git
 - WiringPi C library
 - thpi program to read data from sensor.

  1. Installing git.

```bash
$ sudo apt-get install git
```

  2. Installing  WiringPi C library.

```bash
$ git clone git://git.drogon.net/wiringPi
```

  3. Building WiringPi C library

```bash
$ cd wiringPi/
$ ./build

```

  4. download the thpi program on your Raspberry Pi system.

```bash
$ wget https://raw.githubusercontent.com/opendevices/iot.apps/master/workshop-temperature-humidty-dht11-dht22/src/thpi.c

```

  5. Compile the thpi program with wiringPi library.

```bash
$ gcc -o thpi thpi.c -lwiringPi -lwiringPiDev
```

# 4. Reading the data sent by DHT11 sensor.

To read data detected by the dht11 sensor we use **thpi** program if you
compiled it.

  1. Execute **thpi** program to read data from sensor  and see the result on your ssh terminal.

```bash
$ ./thpi
```


Or if you did download the Static Binary run:


```bash
$ ./thpi-armv6-static
```

or

```bash
$ ./thpi-armv7-static
```


# 5. Deploying DHT11-DHT22 IoT App

In this section we are going to see how to deploy a DHT11-DHT22 IoT App,
using [Ionoid IoT Platform](https://dashboard.ionoid.io)

First see the [Getting Started Guide
Here](https://github.com/opendevices/iot.apps/blob/master/gettingstarted/README.md)


Continue


---
Links
[DHT11 Sensor Datasheet](https://components101.com/dht11-temperature-sensor)
