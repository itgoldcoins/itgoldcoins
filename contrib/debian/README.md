
Debian
====================
This directory contains files used to package itgoldcoinsd/itgoldcoins-qt
for Debian-based Linux systems. If you compile itgoldcoinsd/itgoldcoins-qt yourself, there are some useful files here.

## itgoldcoins: URI support ##


itgoldcoins-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install itgoldcoins-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your itgoldcoins-qt binary to `/usr/bin`
and the `../../share/pixmaps/itgoldcoins128.png` to `/usr/share/pixmaps`

itgoldcoins-qt.protocol (KDE)

