# Manual Installation of Home Assistant on Raspberry Pi

Instruction assume this a new installtion of Raspbian Lite or
Raspbian with preparation.

Note: You must have Python 3.5.3 or later ...

Connect to the Raspberry Pi over ssh. Default password is ```raspberry```.

[How to activate ssh on raspbian](how to activate ssh on raspbian)

```bash
$ ssh -l pi 192.168.1.4
```

Change the default password

```bash
$ passwd
```


Update the system

```bash
$sudo apt-get update
$sudo apt-get upgarde -y
```

Install the dependencies

```bash
$ apt-get install python3 pyhton3-venv python3-pip
```

Add a user account for Home Assisant called homeassistant for running Home Assistant.

```bash
$ sudo useradd -rm homeassisant -G dialout,gpio 
```
-r create system account
-m create home directory if not exist
-G supplementary groups 


Create a directory for Home Assisant installation and change the owner to
homeassisant user.

```bash
$ cd /usr
$ sudo mkdir homeassisant
$ sudo chown homeassistant:homeassisant homeassistant
```


Create and change to virtual environement for Home Assissant,
using homeassistant account.

```bash
$ sudo -u homeassistant -H -s
$ cd /srv/homeassisant
$ python3 -m venv .
$ source bin/activate
```

notice the prompt change

Install required python package

```bash
(homeassistant) $ python3 -m pip install wheel
```

install home assistant

```bash
$ pip3 install homeassistant
```

Start HA for the first time, this will complete the installtion
create .homeassisatant configuration directory in the /home/homeassiant
and install any basic dependencies.

```bash
(homeassistant) $ hass
```

You can now reach your installation on your Raspberry Pi over web inerface on
http://ipaddr:8123



---

Useful links

[Prepare Your Raspberry for Homeassisant]()

