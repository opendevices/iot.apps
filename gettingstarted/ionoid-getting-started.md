# Ionoid IoT Platform Getting Started

This guide will help you connect and deploy Application on devices
using your Ionoid IoT Account.


## 1. Introduction

First Please prepare your Raspberry PI 3 or Raspberry PI Zero.

Flash the MicroSD Card using the following guides, no need to configure
the Wireless or anything else.

* [Installing Raspbian on Raspberry Pi - Windows
Users](https://github.com/opendevices/iot.apps/blob/master/doc/od-iot-raspbian-rpi-zero-windows.md)


* [Installing Raspbian on Raspberry Pi -
Linux Users](https://github.com/opendevices/iot.apps/blob/master/doc/od-iot-install-raspbian-linux-gui.md)


* [Raspberry Foundation Installation
Guide](https://www.raspberrypi.org/documentation/installation/installing-images/)


### 1.1 IoT Help and Support ?

If you need support on this or stuck, or if you need IoT Help and
Support in general. Then write us to: support@opendevices.io




## 2. Material

* Raspberry PI
* MicroSD Card with Raspbian
* Micro USB cable.
* An [Ionoid.io Account](https://dashboard.ionoid.io/)





## 3. Registering on Ionoid.io IoT Platform

* First Create your Account on [Ionoid.oi Dashboard link](https://dashboard.ionoid.io/)

![Ionoid IoT](https://raw.githubusercontent.com/opendevices/iot.apps/master/gettingstarted/images/ionoid.png)


* Download SealOS Manager for your Architecture here: [SealOS Manager Tools](https://github.com/opendevices/packages/tree/master/sealos-manager/download/beta)
Chose the last version.


After that, on Linux insert the MicroSD Card and mount or open the partitions of the
MicroSD Card `boot` and `rootfs`.


![MicroSD Card Partitions](https://raw.githubusercontent.com/opendevices/iot.apps/master/gettingstarted/images/sdcard-boot-and-rootfs.png)



* Then go to where you did download **sealos-manger**, extract it and inside its directory install it.

Replace the `usersession` with the username that mounted the MicroSD Card, and
install `sealos-manager` with this command:

```bash
$ unzip sealos-manager-v*-arm.zip
$ DESTDIR=/run/media/usersession/rootfs/ sudo -E ./install.sh
```

## 4. Create A Project

A Project is a Working Directory that regroups Devices and The attached
Applications to it. A Project is created based on Device Architecture
and all devices that are part of that group should have the same
Architecture.


Please complete the appropriate information and create your Project.


**Example Adding ARMv6 Project**

![Adding ARMv6 Project for Raspberry PI Zero Devices](https://raw.githubusercontent.com/opendevices/iot.apps/master/gettingstarted/images/project-armv6.png)


**Example Adding ARMv7 Project**

![Adding ARMv7 Project for Raspberry PI 3 Devices](https://raw.githubusercontent.com/opendevices/iot.apps/master/gettingstarted/images/project-armv7.png)


## 5. Adding Devices to a Project

To add your devices to a specific project, go to the `Add Device`
Button.

This will Prompt to configure your new device, generate a configuration
and download it.


![Project Page](https://raw.githubusercontent.com/opendevices/iot.apps/master/gettingstarted/images/project-page.png)

![Add Device Page](https://raw.githubusercontent.com/opendevices/iot.apps/master/gettingstarted/images/add-device.png)


### 5.1 Advanced Configuration

**Important: Change your Device Name to uniquely identify it**


To Configure your Device Name or To Configure the WIFI from the
dashboard, click on Advanced Configuration.

**Keep in mind that the generated Configuration is private, do not share
it**


After clicking on `Download OS Configuration`, save it to a local
storage.


## 6. Copy Your OS Configuration to the MicroSD Card

Then copy the download OS Configuration to the `boot` partition of the MicroSD
Card of the Raspbian OS.

**Safely unmount and eject your MicroSD Card**


## 7. Boot

![Raspberry Pi Zero](https://github.com/opendevices/iot.apps/blob/master/gettingstarted/images/RpiZero.jpg)

- Insert the Micro SD into Raspberry Pi,
- Power with Micro USB cable or any other appropriate Power Source.



## 8. Access Your Raspberry PI

- To access to your Raspberry Pi , via your Windows computer you need a ssh client
  like putty [putty](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)

- Setup putty
  * Host name : **raspberrypi.local** or the hostname that you entered
  in **5.1 Advanced Configuration** in **config.json**
  * Port: **22**
  * Default User Name: **pi**
  * Default Password: **raspberry**



- On Linux you need `ssh`

- Complete ssh command to connect:

```bash
$ ssh pi@raspberrypi.local
```

