Itgoldcoins Core 
=====================================

https://www.itgolds.org/

What is Itgoldcoins?
----------------

Itgoldcoins is an experimental new digital currency that enables instant payments to
anyone, anywhere in the world. Itgoldcoins uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. Itgoldcoins Core is the name of open source
software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the Itgoldcoins Core software, see https://www.itgolds.org/, or read the
[original whitepaper](https://www.itgolds.org/itgc%E7%99%BD%E7%9A%AE%E4%B9%A6%E4%BA%9A%E5%A4%AA%E5%8C%BA%E7%A4%BE%E5%8C%BA%E4%BF%AE%E8%AE%A2%E7%89%88.pdf).

License
-------

Itgoldcoins Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

How to build?
-------------
Tested in Ubuntu 16.04

Build requirements:

    sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils 
    sudo add-apt-repository ppa:bitcoin/bitcoin
    sudo apt-get update
    sudo apt-get install libdb4.8-dev libdb4.8++-dev

Optional:

    sudo apt-get install libminiupnpc-dev (see --with-miniupnpc and --enable-upnp-default)

Dependencies for the GUI: Ubuntu & Debian
-----------------------------------------

If you want to build Itgoldcoins-Qt, make sure that the required packages for Qt development
are installed. Either Qt 5 or Qt 4 are necessary to build the GUI.
If both Qt 4 and Qt 5 are installed, Qt 5 will be used. Pass `--with-gui=qt4` to configure to choose Qt4.
To build without GUI pass `--without-gui`.

To build with Qt 5 (recommended) you need the following:

    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler

miniupnpc
---------

[miniupnpc](http://miniupnp.free.fr/) may be used for UPnP port mapping.  It can be downloaded from [here](
http://miniupnp.tuxfamily.org/files/).  UPnP support is compiled in and
turned off by default.  See the configure options for upnp behavior desired:

	--without-miniupnpc      No UPnP support miniupnp not required
	--disable-upnp-default   (the default) UPnP support turned off by default at runtime
	--enable-upnp-default    UPnP support turned on by default at runtime

To Build
---------------------

```bash
./autogen.sh
./configure --enable-upnp-default --disable-tests --disable-bench
make
make install # optional
```
