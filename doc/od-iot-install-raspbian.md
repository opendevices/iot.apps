# Manual Installtion of raspbian on Raspberry Pi 2, 3


1. Download the raspbian image
2. Find the mountpoint  of the SD card
3. Copy the rasbian image to the SD card


---

## Download a raspbian image and unzip it

Open a terminal and use the **curl** command to download a zipped raspbian image.

```bash
$ curl -JLO https://downloads.raspberrypi.org/raspbian_latest
```

Or click on this link [Raspbian Image](https://downloads.raspberrypi.org/raspbian_latest)

Unzip it.

```bash
$ ls
2018-04-18-raspbian.zip
$ unzip  2018-04-18-raspbian.zip
Archive:  2018-04-18-raspbian.zip
  inflating: 2018-04-18-raspbian-stretch.img
```


```bash
$ ls
2018-04-18-raspbian-stretch.img  2018-04-18-raspbian.zip
```


## Dicovering the SD CARD mountpoint


To see wich block devices are currently connected to your computer, use **lsblk** command. 

```bash
$ lsblk
NAME            MAJ:MIN RM   SIZE RO TYPE MOUNTPOINT
sda               8:0    0 465.8G  0 disk 
├─sda1            8:1    0     1G  0 part /boot
└─sda2            8:2    0 464.8G  0 part 
  ├─fedora-root 253:0    0    50G  0 lvm  /
  ├─fedora-swap 253:1    0   3.4G  0 lvm  [SWAP]
  └─fedora-home 253:2    0   200G  0 lvm  /home
sr0              11:0    1  1024M  0 rom  
```

Insert SD card into your computer SD card slot or reader and run **lsblk** again,
note the new device that has appeared .

```bash
$ lsblk
NAME            MAJ:MIN RM   SIZE RO TYPE MOUNTPOINT
sda               8:0    0 465.8G  0 disk 
├─sda1            8:1    0     1G  0 part /boot
└─sda2            8:2    0 464.8G  0 part 
  ├─fedora-root 253:0    0    50G  0 lvm  /
  ├─fedora-swap 253:1    0   3.4G  0 lvm  [SWAP]
  └─fedora-home 253:2    0   200G  0 lvm  /home
sr0              11:0    1  1024M  0 rom  
mmcblk0         179:0    0   7.4G  0 disk 
└─mmcblk0p1     179:1    0   7.4G  0 part /run/media/nwd/data
```
In our exemple the name **mmcblk0** appear in the left coumn NAME, it's our SD card.
SD card may have one or several partition on it, they appear as **mmcblk0p1** , **mmcblk0p2** and so on.


If any SD card partition have been mounted, **umount** them that way.

```bash
$ umount /dev/mmcblk0p1 
```


## Copying the raspbian image to the SD card.

Note : if you specify the wrong device, when using the dd tool,
       you can overwrite any partition of your machine , so be careful.


To copy raspbian image to the SD card, login as root or prefix sudo the folwing command.

```bash
$ sudo dd if=~/2018-04-18-raspbian-stretch.img of=/dev/mmcblk0 bs=1M conf=fsync status=progress 

```

- if= is argument with path to your raspbian img file.
- of= argument with correct device name  (warning: you will lose data or system if you provide the wrong device name)
- make sure that device name not the name of the partition eg **mmcblk0** not **mmcblk0p1**
   

Run sync to synchronize cached writes to SD card. 

```bash
$ sync
```


Remove the SD card from slot.

---

###Links
[Installing Raspbian image on Linux](https://www.raspberrypi.org/documentation/installation/installing-images/linux.md)


