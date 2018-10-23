# Berlin IoT Makers - Workshop 23 October 2018 - Factory Berlin


[Integrate and Deploy IoT - Workshop - Factory Berlin](https://factoryberlin.com/event/integrate-deploy-iot-workshop/)

[Berlin IoT Makers Event page](https://www.meetup.com/Berlin-IoT-Makers-Workshop/events/255548235/)

Address:
Factory Berlin Görlitzer Park
Lohmühlenstraße 65
1st Floor, Else
12435 Berlin 


Thanks to [Open Devices IoT](https://opendevices.io) and [FactoryBerlin](https://factoryberlin.com)
for sponsoring the event


## 1. Introduction

The workshop starts with an introduction and presentations.

Discussion about hard problems that make implementing IoT Difficult.


### 1. MQTT IoT

For the following Workshop we offer the current MQTT Server, please use
it. **Do not send private data on it later**.

If you need to send MQTT encrypted private data, please contact us at:
support@opendevices.io

IONOID MQTT Server:
```
Hostname:   mqtt.ionoid.io
Port:  1883    mqtt   (via tcp)
Port:  8883    secure-mqtt  (via ssl)
``` 


For an MQTT Client, please install: [mosquitto](https://mosquitto.org/)

How to use it to send, as an example the captured temperature:
```bash
$ mosquitto_pub -h mqtt.ionoid.io -u workshop -P workshop -t /workshop/myproject/temperature -m 23.5 
```

For alternatives MQTT Clients, please see this list:
* MQTT Web client or plugins 
* Ether Chrome plugin MQTT-Lens 
* MQTT.fx  (fat java client)
* [Linear MQTT Dashboard Android](https://play.google.com/store/apps/details?id=com.ravendmaster.linearmqttdashboard)



## 2. Setting UP Raspberry PI and an Ionoid IoT Account

This workshop will use part of [Ionoid IoT Platform](https://ionoid.io)


![Ionoid IoT](https://raw.githubusercontent.com/opendevices/iot.apps/master/gettingstarted/images/ionoid.png)


To continue the workshop setup an account here: [Ionoid Account](https://dashboard.ionoid.io) First.


Then follow the Starting Guide there to get your Raspberry PI up and
running [Getting
Started](https://github.com/opendevices/iot.apps/blob/master/gettingstarted/README.md)


## 3. Install Mosquitto on Raspberry PI

SSH into your Raspberry PI and install mosquitto client on it.

```bash
$ sudo apt install -y mosquitto-clients
```


## 4. Wireless Power Sockets Workshop

In this Part we will use the power sockets that are preconfigured with the **ionoid wifi**.

They automatically connect to `mqtt.ionoid.io` (without ssl as they don’t support it out of the box). 

They are named “obi1” to “obi4”.
The sockets subscribe to the following MQTT Topics:
```
cmnd/<NAME>/power
```
(NAME is one of obi1 .. obi4).



### 4.1 Turning Sockets ON and OFF

To turn the sockets on send `on` as message to the topic, eg:
```bash
$ mosquitto_pub -h mqtt.ionoid.io -u workshop -P workshop -t cmnd/obi1/power  -m on
```

Same with off:  
```bash
$ mosquitto_pub -h mqtt.ionoid.io -u workshop -P workshop -t cmnd/obi1/power  -m off
```

To use ssl with mosquitto_sub you need to give the path of the cacerts you want to use. That enables ssl. The port is 8883.

```bash
$ mosquitto_pub --capath /etc/ssl/certs -p 8883  -u workshop ...
```


## 5. Temperature and Humidity

First you can check the following Temperature and Humidity workshop:



For the temperature / humidity example send the measured values to something like:
 /house/office/temperature or /house/office/humidity

For the workshop everyone should use its name:
eg : 
Mosquitto_pub -h mqtt.ionoid.io -u workshop -P workshop -t /workshop/myproject/temperature -m 23.5 
Mosquitto_pub -h mqtt.ionoid.io -u workshop -P workshop -t /workshop/myproject/temperature -m 23.5 


On the Big screen open a terminal and let all messages scroll
Mosquitto_sub -h mqtt.ionoid.io --capath /etc/ssl/certs -p 8883  -v -t “#” -u workshop -P workshop


--------------------------------------
Howto connect the network

Connect the raspberry Pi Desktop to TV and Keyboard / Mouse
In the Networkmanager connect to Factory Wifi
Open a terminal and run “sudo ./forward.sh”
Connect the Netgear router (internet port)  with the network cable to the raspberry pi
 and power the router on
After a while (give 2 minutes) The wifi symbol and the internet symbol on th erouter should be light up green

Leave the Raspberry connected!

If Router is ready, plug in the power sockets
-----------------------
For the PocketChip
Boot
Conect to wifi
Open terminal
Run firefox






