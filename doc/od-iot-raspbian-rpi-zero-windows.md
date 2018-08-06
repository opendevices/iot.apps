# Install raspbian on Raspberry Pi ZERO W, for Windows user.
![Raspberry Pi Zero W](https://user-images.githubusercontent.com/10528443/43681530-1601fe7a-9824-11e8-8526-76ab16c0e574.jpg)

---

## 1.Put your Micro SD on SD-Reader.

![MicroSD Reader](https://user-images.githubusercontent.com/10528443/43681531-24f09cde-9824-11e8-9ec4-a9ae65fa3e1a.jpg)


## 2. Download the latest raspbian image.

[Raspbian image](https://www.raspberrypi.org/downloads/raspbian/)

![Download raspbian](https://user-images.githubusercontent.com/10528443/43681532-3199c06e-9824-11e8-9f9f-0029ec90edd8.png)

## 3. Extract the raspbian image 

![Unzip Raspbian](https://github.com/opendevices/iot.apps/doc/img/)


## 4. Download Etchter software for Windows system.

![Download Etcher](https://user-images.githubusercontent.com/10528443/43681533-358bc118-9824-11e8-9a44-a564ca566abd.png)

## 5. Install Etcher on your Windows system 

## 6. Execute Etcher software, to copy raspbian on your Micro-SD card
  - select rasp img 
  - select a driver 
  - click on flash 
  - wait

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

To enable ssh on Raspberry Pi Zero, create a file called **ssh** without any extention under **boot** partition.

 - Launch Notepad 
 - Click on **File** and then **Save As..**, a dialog box is displayed.
 - Type an opening quotation mark, ssh and then closing quotation mark. That way **"ssh"**.	
 - Click on the SD card **boot** partition to save file on it.
 - Click the **Save** button.

	 
## 9. First boot)




