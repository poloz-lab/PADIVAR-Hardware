# PADIVAR

**PADIVAR** is an open-source OBD2 vehicle diagnostic software compatible with ELM327. 
It is hosted on a server connected to a car via an OBD2 device, and can be accessed remotely thanks to a simple TCP client.

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

PADIVAR was tested on Debian and Mageia. Other Linux distributions are untested.

* Download `g++` (Debian) or `gcc-c++` (Mageia) and `make`
* Download `libbluetooth-dev` (Debian) or `lib64bluez-devel` (Mageia)
* Clone project `git clone https://github.com/poloz-lab/PADIVAR-Hardware`
* Compile with `make`

# Usage

## Setup

In order to work, PADIVAR is separated in two parts:

* a server (referred here as '*PADIVAR server*') , running either Debian or Mageia (other distributions untested)
* a TCP client (any simple TCP client like telnet for example)

```
PADIVAR Architecture:
                                
┌────────────┐                 ┌─────────┐          ┌────────────┐      ┌─────┐
│ TCP Client |______[...]______| PADIVAR |__________| OBD Device |______| Car |      
└────────────┘                 | Server  |          |  (ELM327)  |      └─────┘
                               └─────────┘          └────────────┘
└─────────────┘   └───────┘   └───────────────────────────────────────────────────┘ 
 Remote client    Internet     PADIVAR server connected to a car via an OBD2 device

```
#### Compatible OBD2 devices

PADIVAR can be used with an ELM327, and supports different protocols.
At this time, the following connections are available:

* `elm327`
	 * `bluetooth`
	 * `wifi`
	 * `usb` (still in development)
* `no device` (for device independent commands)

#### Available commands

At this time, the following commands are available:

* `quit` - stops the connection
* `listPID` - list all supported PIDs
* `description` - displays description of PID
	* `<PID>` (hex value)
* `units` - displays the unit of PID value
	* `<PID>` (hex value)
* `sendPID` - returns the value of a PID requested to the car translated in human-readable value
    * `<PID>` (hex value)
* `repeatPID` - same as `sendPID` but repeats the requests until the time speicifed is over
    * `<PID>` (hex value)
    * `<time>` (seconds)
* `diagnosticRT` - diagnoses the car, returns the values of PIDs supported by the car
* `diagnosticRTHR` - same as `diagnosticRT` but displays the result in a human-readable format

## Connection

1. Connect a compatible OBD2 adapter to the car (see [Compatible OBD2 adapters](#compatible-obd2-adapters))
2. Get IP address of PADIVAR server.
3. Run `padivarServer.bin` on the PADIVAR server.
4. Use any TCP client to connect to the interface: `telnet <IP_PADIVAR>`.
5. Input the OBD2 adapter name
6. Input the type of connection
    1. Bluetooth connection requires the MAC address of the OBD2 device and the device must be already paired.
    2. Wi-Fi connection requires the IP address and port of the OBD2 device.
    3. USB connection requires the path to the serial interface of the OBD2 device.
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
