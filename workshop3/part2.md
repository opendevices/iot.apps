
# 3.Adding software to your Raspberry Pi system.

After connecting the DHT11 sensor to Raspberry Pi , we need additional software to use
DHT11 sensor. Connect to your raspberry pi using ssh and add the following programs.

 - git
 - WiringPi C library
 - thpi program to read data from sensor.

  * Installing git.

```bash
$ sudo apt-get install git
```

  * Installing  WiringPi C library.

```bash
$ git clone git://git.drogon.net/wiringPi
```

  * Building WiringPi C library

```bash
$ cd wiringPi/
$ ./build

```

Using dhpi program to read data from dht11 sensor.

  - download the thpi program on your Raspberry Pi system.

```bash
$ wget https://github.com/opendevices/iot.apps/blob/master/workshop2/src/temp.c

```

  - Compile the thpi program with wiringPi library.

```bash
$ gcc -o thpi thpi.c -lwiringPi -lwiringPiDev
```

# 4. Reading the data sent by DHT11 sensor.


Execute **thpi** program to read data from sensor  and see the result on your ssh terminal.

```bash
$ ./thpi
```

---
Links
[DHT11 Sensor Datasheet](https://components101.com/dht11-temperature-sensor)
