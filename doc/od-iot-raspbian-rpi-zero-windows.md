# Install raspbian on Raspberry Pi ZERO W, for Windows user.
![Raspberry Pi Zero W](https://github.com/opendevices/iot.apps/doc/img/raspberry-pi-zero-w.jpg)

---

## 1.Put your Micro SD on SD-Reader.

![MicroSD Reader](https://github.com/opendevices/iot.apps/doc/img/sd-card-reader.jpg)


## 2. Downloading Raspbian.
 - Download the Rasbpian image, you can find the latest version here  [Raspbian image](https://www.raspberrypi.org/downloads/raspbian/).


 ![Download raspbian windows](https://github.com/opendevices/iot.apps/blob/master/doc/img/RaspbianDownloadWindows.png)

## 3. Copy Raspbian to the MicroSD card 
 The simplest and easiest way to copy the Raspbian OS to your MicroSD card is, Etcher software.It's work well on Windows.


 - Download a Windows version of  Etcher software, from  
 ![Download Etcher](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherDownloadWindows.png)

 - Unzip it.
 
 - Install Etcher on your Windows system.
 ![Etcher Install Windows](https://github.com/opendevices/iot.apps/blob/master/doc/img/EtcherInstallWindows.png)

 - Insert the MicroSD card into the card reader.
 
 - Execute Etcher.
 - Once Etcher open, browse and select the Raspbian image.
 - Select the MicroSD card that you which to install Raspbian on.
 - Click on the flash button.
 

## 6. Configure Wifi
  To configure WiFi network on Rapsberry Pi Zero W do
  //
 - Reinsert the Micro SD card into your  computer.
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

## 7. Enable ssh

 - Launch Notepad
 - Click on **File** and then **Save As..**, a dialog box is displayed.
 - Type an opening quotation mark, ssh and then closing quotation mark. That way **"ssh"**.    
 - Click on the SD card **boot** partition to save file on it.
 - Click the **Save** button.

## 8. First boot

- Insert the Micro SD into Raspberry Pi Zero,
- Power with Micro USB cable (at least 2.5 A).

- To access to your Raspberry Pi , via your Windows computer you need a ssh client
  like putty [putty](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)
- Setup putty
  * Host name : **pi@raspberrypi.local**
  * Port: **22**


## 9. Update raspbian
 To update the Raspbian system, tape the following command on your terminal.

 ```bash
 $ sudo apt-get update && apt-get upgrade -y
 ```
