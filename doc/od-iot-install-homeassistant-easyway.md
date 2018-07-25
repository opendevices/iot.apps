# Installation of Home Assistant on Raspberry Pi, easy way.

This is a easy way to install Home Assistant for users who are not familiar with Linux environment.

For  advanced method  see [Manual installation of Home Assistant on Raspberry Pi](https://github.com/opendevices/iot.apps/blob/master/doc/od-iot-install-homeassistant.md) 

## For our installation we need

 - Raspberry Pi + Power Supply (at least 2.5A)
 - SD card
 - SD card reader 
 - Ethernet cable
 - [Hass.io image](https://github.com/home-assistant/hassos/releases/) 
 - [Etcher](https://etcher.io/) software to write Hass.io image to an SD card.

## Installing Hass.io

 1. Download the appropriate Hass.io image for your Raspberry Pi on your computer.
    - [Raspberry Pi 3 32 bit](https://github.com/home-assistant/hassos/releases/download/1.7/hassos_rpi3-1.7.img.gz)
    - [Raspberry Pi 3 64 bit](https://github.com/home-assistant/hassos/releases/download/1.7/hassos_rpi3-64-1.7.img.gz)
    - [Raspberry Pi 2](https://github.com/home-assistant/hassos/releases/download/1.7/hassos_rpi2-1.7.img.gz)
    - [Raspberry Pi Zero W](https://github.com/home-assistant/hassos/releases/download/1.7/hassos_rpi0-w-1.7.img.gz)
    - [Raspberry Pi Zero](https://github.com/home-assistant/hassos/releases/download/1.7/hassos_rpi-1.7.img.gz)
  ![snapshot1](https://github.com/opendevices/img/)
  
 2. Insert your SD card into your SD card reader.
 ![snapshot2](https://github.com/opendevices/img)

 3. Open Etcher select the Hass.io image and flash it to the SD card.
  ![snapshot3](https://github.com/opendevices)

 4. Umount the SD Card and remove it from your SD Card reader.
  ![snapshot4](https://github.com/opendevices/img)

 5. Insert the SD card into your Raspberry Pi.
  ![snapshot5](https://github.com/opendevices/img)

 6. Connect Ethernet cable and the power supply.
  ![snapshot6](https://github.com/opendevices/img)

 7. The Raspberry Pi will now boot up, and you can access Home Assistant at http://hassio.local:8123
  ![snapshot7](https://github.com/opendevices/img)