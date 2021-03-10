# PADIVAR

**PADIVAR** is an open-source OBD2 vehicle diagnostic software compatible with multiple adapters. 
It is hosted on a server connected to one (or multiple) cars, via one (or multiple) OBD2 devices, and can be accessed simultaneously by multiple clients remotely thanks to a simple TCP client.

Developed by [ESIEA](https://www.esiea.fr/) students for [Le Mans Métropole](https://www.lemansmetropole.fr/).


## Summary

<!--ts-->
   * [PADIVAR](#padivar)
   * [Summary](#summary)
   * [Installation](#installation)
      * [Build](#build)
   * [Usage](#utilisation)
	   * [Setup](#setup) 
		   * [Compatible OBD2 devices](#compatible-obd2-devices)
		   * [Available commands](#available-commands)
	   * [Connection](#connection)
   * [License](#license)
<!--te-->


# Installation

## Build

* Download `g++` and `make`
* Download `libbluetooth-dev` (Debian) or `libbluez3` (Mageia)
* Clone project `git clone https://github.com/poloz-lab/PADIVAR-Hardware`
* Compile with `make`

# Usage

## Setup

In order to work, PADIVAR is separated in two parts:
* a server (referred here as '*PADIVAR server*') , running either Debian or Mageia (other distributions untested)
* a TCP client (any simple TCP client supporting CRLF works)

```
PADIVAR Architecture example:

┌──────────────┐                                       ┌──────────────┐      ┌───────┐
│ TCP Client 1 |___                                 ___| OBD Device 1 |______| Car 1 |            
└──────────────┘   \                               /   | (Bluetooth)  |      └───────┘
                    \                             /    └──────────────┘                 
┌──────────────┐     \           ┌─────────┐     /     ┌──────────────┐      ┌───────┐
│ TCP Client 2 |______[...]______| PADIVAR |____/______| OBD Device 2 |______| Car 2 |      
└──────────────┘                 | Server  |           |   (Wi-Fi)    |      └───────┘
                                 └─────────┘           └──────────────┘
└───────────────┘   └───────┘   └───────────────────────────────────────────────────────┘
Remote client(s)    Internet      PADIVAR server connected to car(s) via OBD2 device(s)

```
#### Compatible OBD2 devices

PADIVAR can be used with multiple OBD2 adapters, each using different protocols.
At this time, the following adapters are available:
* `elm327`
	 * `bluetooth`
	 * `wifi`
	 * `usb`
* `no device` (for device independent commands)

#### Available commands

At this time, the following commands are available:
* `quit` - stops the connection
* `listPID` - list all supported PIDs
* `description` - displays description of PID
	* `<PID>` (hex value)
* `units` - displays the unit of PID value
	* `<PID>` (hex value)

## Connection

1. Connect a compatible OBD2 adapter to the car (see [Compatible OBD2 adapters](#compatible-obd2-adapters))
2. Get IP address of PADIVAR server.
3. Run `padivarServer.bin` on the PADIVAR server.
4. Use any TCP client to connect to the interface: `telnet <IP_PADIVAR>`.
5. Input the OBD2 adapter name 
6. Input the type of connection
	a. Bluetooth connection requires the MAC address of the OBD2 device.
	b. Wi-Fi connection requires the IP address and port of the OBD2 device.
	c. USB connection requires the path to the serial interface of the OBD2 device.
7. Input the command you want to send to the adapter (see [Available commands](#available-commands)).
8. If necessary, input the PID associated with the previous command.

Connection example (from the client):
```
$ telnet <IP_PADIVAR>
> elm327
> bluetooth
> <MAC_ADDR_ADAPTER>
Initialization OK!
> description
> 0105
Engine coolant temperature
> units 
> 0105
Celsius degree
```

# License

```
CeCILL FREE SOFTWARE LICENSE AGREEMENT
	
Version 2.1 dated 2013-06-21

Notice

This Agreement is a Free Software license agreement that is the result of discussions between 
its authors in order to ensure compliance with the two main principles guiding its drafting:

* firstly, compliance with the principles governing the distribution 
of Free Software: access to source code, broad rights granted to users,

* secondly, the election of a governing law, French law, with which it
is conformant, both as regards the law of torts and intellectual
property law, and the protection that it offers to both authors and
holders of the economic rights over software.
```
Full license can be found [here](https://github.com/poloz-lab/PADIVAR-Hardware/blob/master/LICENSE)
