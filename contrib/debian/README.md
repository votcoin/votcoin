
Debian
====================
This directory contains files used to package votcoind/votcoin-qt
for Debian-based Linux systems. If you compile votcoind/votcoin-qt yourself, there are some useful files here.

## votcoin: URI support ##


votcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install votcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your votcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/votcoin128.png` to `/usr/share/pixmaps`

votcoin-qt.protocol (KDE)

