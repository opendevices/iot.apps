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
        network={
	        ssid="SSID"
	        psk="PASSWORD"
	        key_mgmt=WPA-PSK
        }
	```

 - Replace **SSID** with your Wifi ID and **PASSWORD** with your Wifi password.
 - Save the file as **wpa_suppliant.conf** under **boot** partition.

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
  * Host name : **pi@raspberrypi.local**
  * Port: **22**

- Default User Name: **pi**
- Default Password: **raspberry**


SSH Command
```
$ ssh pi@raspberrypi.local
```


## 6. Update raspbian
 To update the Raspbian system, tape the following command on your terminal.

 ```bash
 $ sudo apt-get update && apt-get upgrade -y
 ```
