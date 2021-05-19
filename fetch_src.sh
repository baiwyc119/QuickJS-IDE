#!/usr/bin/env bash

wget https://bellard.org/quickjs/quickjs-2021-03-27.tar.xz 
echo 'download success'

tar -zxvf quickjs-2021-03-27.tar.xz 
echo 'unzip success'

mv quickjs-2021-03-27 quickjs

mkdir src

cd quickjs

cp 	quickjs.c \
	quickjs.h \
	libregexp.c \
	libregexp.h \
	libunicode.c \
	libunicode.h \
	cutils.c \
	cutils.h \
	quickjs-libc.c \
	quickjs-libc.h \
	libbf.c \
	libbf.h \
	qjscalc.c \
	repl.c \
	qjs.c \
	libunicode-table.h \
	list.h \
	libregexp-opcode.h \
	quickjs-atom.h \
	VERSION	  ../src


