# Installing Raspbian on the Raspberry Pi : A Simple guide. (Linux GUI users)

[see Windows users version]()

[see MacOS users version]()

This guide will show you step by step, a straightforward process how to install a Raspbian OS  on
Raspberry Pi 2. This method also work for all the different models of Raspberry Pi (A, B, B+, 2)


To succeed this installation , we need some equipment and software.

Equipment :

 - SD card (at least 8 Gb).
 - Ethernet Cord or WiFi dongle.
 - SD card reader , if your computer don’t have a SD card slot.
 - Power supply with micro USB cable.

Optional equipment :
 - USB keyboard.
 - USB mouse.

Software:
 - Raspbian image .
 - Etcher software.

The process is very simple, download a Raspbian image and Etcher software,
use Etcher to write the Raspbian image into the SD card  and boot.


## 1. Downloading Raspbian.

  - Download the Raspbian image ,  you can find the latest version here [Raspbian Image](https://www.raspberrypi.org/downloads/raspbian/) .


![downloaded raspbian image](https://github.com/opendevices/iot.apps/blob/master/doc/img/RaspbianDownload.png)

## 2. Copy Raspbian  to SD card.

The easiest way to flash (copy) Raspbian image to the SD card is using  Etcher software. It works on
all platforms (GNU/Linux, Mac and Windows).

  - Download Etcher , here [Etcher](https://etcher.io/) , choose the appropriate  version , in our case Linux-x64 version.

![download etcher linux](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherDownload.png)

  - Unzip it
  - Insert the SD card into the SD Card reader.
  - Run Etcher

  - Once Etcher open , browse and select the Raspbian image.
  - Select the SD card that you which install Raspbian on.

![etcher select](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherSelect.png)

  - Click on the flash button.

![etcher flash](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherFlash.png)

Once it's finished  Etcher unmount automatically the SD card   , you can  remove it safely  from the computer
SD card reader.


## 3. Boot your Raspberry Pi

Now our Raspberry is able to boot

![image plug ]()

- Insert the SD card into Raspberry Pi SD card slot.
- Power with Micro USB cable (a least 2.5 A).
- Plug the USB keyboard and mouse.
- Plug your screen  HDMI cord .

 enjoy  ;)
---

To access to your Raspberry Pi without using keyboard and screen, see this [link]().
