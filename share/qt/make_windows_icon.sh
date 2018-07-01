#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/votcoin.png
ICON_DST=../../src/qt/res/icons/votcoin.ico
convert ${ICON_SRC} -resize 16x16 votcoin-16.png
convert ${ICON_SRC} -resize 32x32 votcoin-32.png
convert ${ICON_SRC} -resize 48x48 votcoin-48.png
convert votcoin-16.png votcoin-32.png votcoin-48.png ${ICON_DST}

