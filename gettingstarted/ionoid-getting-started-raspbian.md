# Ionoid IoT Platform Getting Started

This guide will help you connect and deploy Application on devices
using your Ionoid IoT Account.


## 1. Introduction

First Please prepare your Raspberry PI 3 or Raspberry PI Zero.

Flash the MicroSD Card using the following guides, no need to configure
the Wireless or anything else.

* [Installing Raspbian on Raspberry Pi - Windows
Users](https://github.com/ionoid/iot.apps/blob/master/doc/od-iot-raspbian-rpi-zero-windows.md)


* [Installing Raspbian on Raspberry Pi -
Linux Users](https://github.com/ionoid/iot.apps/blob/master/doc/od-iot-install-raspbian-linux-gui.md)


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

* First Create your Account on [Ionoid.oi](https://dashboard.ionoid.io/)

![Ionoid IoT](https://github.com/opendevices/iot.apps/gettingstarted/images/ionoid.png)


* Download [SealOS Manager
Tools](https://github.com/opendevices/packages....)





## 4. Help

## 



# Installing  Raspbian on Raspberry Pi ZERO W, for Windows user.
![Raspberry Pi Zero W](https://github.com/opendevices/iot.apps/doc/img/raspberry-pi-zero-w.jpg)

---
This guide will show you step by step, how to install a Raspbian OS  on
**Raspberry Pi Zero W**, enable **ssh** service and configure **WiFi** connection
without using a keyboard, screen and mouse .

For this installation we need some equipment and software.
  - MicroSD card.
  - MicroSD card reader , if your computer don’t have a MicroSD card slot.
  - Power supply with micro USB cable.

Software:
  - Rasbpian image .
  - Etcher Software .

  The process is very simple, download a Raspbian image and Etcher software,
  use Etcher to write the Raspbian image into the MicroSD card , configure WiFi connection
  enable SSH service and boot.


## 1. Downloading Raspbian.
 - Download the Rasbpian image, you can find the latest version here  [Raspbian image](https://www.raspberrypi.org/downloads/raspbian/).

 ![Download raspbian windows](https://github.com/opendevices/iot.apps/blob/master/doc/img/RaspbianDownloadWindows2.png)

## 2. Copy Raspbian to the MicroSD card
 The simplest and easiest way to copy the Raspbian OS to your MicroSD card is, Etcher software.It's work well on Windows.

 - Download a Windows version of  Etcher software, from  [Etcher](https://etcher.io/)

 ![Download Etcher](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherDownloadWindows2.png)

 - Unzip it.
 - Install Etcher on your Windows system.

 ![Etcher Install Windows](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherInstallWindows.png)

 - Insert the MicroSD card into the card reader.

 ![MicroSD Reader](https://github.com/opendevices/iot.apps/blob/master/doc/img/SDcardReader.jpg)

  - Execute Etcher.
  - Once Etcher open, browse and select the Raspbian image.

  ![Open Etcher](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherSelectWindows.png)

  - Select the MicroSD card that you which to install Raspbian on.
  - Click on the flash button.

  ![etcher flash](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherFlashWindows.png)

Once it's finished  Etcher **unmount** automatically the MicroSD card.

## 3. Configure Wifi
  To configure WiFi connection on Rapsberry Pi Zero W do

  - Remove the MicroSD card from the SD card reader.
  - Reinsert the Micro SD card into computer SD card reader.
  - Observe that a *boot* partition will mount automatically.

  ![Boot auto](https://github.com/opendevices/iot.apps/blob/master/doc/img/BootPartWindows.png)

  - open **notepad** and copy/paste the following lines

```bash
	country=AU
	ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev
	update_config=1
        network={
	        ssid="SSID"
	        psk="PASSWORD"
	        key_mgmt=WPA-PSK
        }
```

 - Replace **SSID** with your Wifi ID and **PASSWORD** with your Wifi password.
 - Save the file as **wpa_supplicant.conf** under **boot** partition.


or if you can put the MicroSD Card on Linux, you will have the
**rootfs** partition then save it as **wpa_supplicant.conf** under **rootfs** partition under **/etc/wpa_supplicant/**


 ![WiFi Config Windows](https://github.com/opendevices/iot.apps/blob/master/doc/img/ConfigWifiWindows.png)


## 4. Enable ssh

 - Launch Notepad
 - Click on **File** and then **Save As..**, a dialog box is displayed.
 - Type an opening quotation mark, ssh and then closing quotation mark. That way **"ssh"**.    

![SSH Config Windows](https://github.com/opendevices/iot.apps/blob/master/doc/img/ConfigSshWindows.png)

 - Click on the SD card **boot** partition to save file on it.
 - Click the **Save** button.


## 5. First boot

![Raspberry Pi Zero](https://github.com/opendevices/iot.apps/blob/master/doc/img/RpiZero.jpg)

- Insert the Micro SD into Raspberry Pi Zero,
- Power with Micro USB cable (at least 2.5 A).


- To access to your Raspberry Pi , via your Windows computer you need a ssh client
  like putty [putty](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)

- Setup putty
  * Host name : **raspberrypi.local**
  * Port: **22**
  * Default User Name: **pi**
  * Default Password: **raspberry**


- Complete ssh command to connect:

```bash
$ ssh pi@raspberrypi.local
```

