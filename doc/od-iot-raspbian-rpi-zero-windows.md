# Install raspbian on Raspberry Pi ZERO W, for Windows user.
![Raspberry Pi Zero W](https://github.com/opendevices/iot.apps/doc/img/raspberry-pi-zero-w.jpg)

---

## 1.Put your Micro SD on SD-Reader.

![MicroSD Reader](https://github.com/opendevices/iot.apps/doc/img/sd-card-reader.jpg)


## 2. Download the latest raspbian image.

[Raspbian image](https://www.raspberrypi.org/downloads/raspbian/)

![Download raspbian](https://github.com/opendevices/iot.apps/doc/img/Download-Raspbian.png)

## 3. Extract the raspbian image

![Unzip Raspbian](https://github.com/opendevices/iot.apps/doc/img/)


## 4. Download Etchter software for Windows system.

![Download Etcher](https://github.com/opendevices/iot.apps/doc/img/Download-Etcher.png)

## 5. Install Etcher on your Windows system

## 6. Execute Etcher software, to copy raspbian on your Micro-SD card
  - Open **Etcher**
  - Select the Rasbpian  image.
  - Select your MicroSD card.
  - Click on flash.


## 7. Configure Wifi
  To configure WiFi network on Rapsberry Pi Zero W do
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

## 8. Enable ssh

 - Launch Notepad
 - Click on **File** and then **Save As..**, a dialog box is displayed.
 - Type an opening quotation mark, ssh and then closing quotation mark. That way **"ssh"**.    
 - Click on the SD card **boot** partition to save file on it.
 - Click the **Save** button.

## 9. First boot

- Insert the Micro SD into Raspberry Pi Zero,
- Power with Micro USB cable (at least 2.5 A).

- To access to your Raspberry Pi , via your Windows computer you need a ssh client
  like putty [putty](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)
- Setup putty
  * Host name : **pi@raspberrypi.local**
  * Port: **22**


## 10. Update raspbian
 To update the Raspbian system, tape the following command on your terminal.

 ```bash
 $ sudo apt-get update && apt-get upgrade -y
 ```
