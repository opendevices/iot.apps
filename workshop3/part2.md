
# 3.Adding software to your Raspberry Pi system.

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

# 4. Reading the data sent by DHT11 sensor.

To read data detected by the dht11 sensor we use **thpi** program.

  1. download the thpi program on your Raspberry Pi system.

```bash
$ wget https://raw.githubusercontent.com/opendevices/iot.apps/master/workshop3/src/thpi.c

```

  2. Compile the thpi program with wiringPi library.

```bash
$ gcc -o thpi thpi.c -lwiringPi -lwiringPiDev
```


  3. Execute **thpi** program to read data from sensor  and see the result on your ssh terminal.

```bash
$ ./thpi
```

---
Links
[DHT11 Sensor Datasheet](https://components101.com/dht11-temperature-sensor)
