#!/usr/bin/env bash

wget https://bellard.org/quickjs/quickjs-2021-03-27.tar.xz 
echo 'download success'

tar -zxvf quickjs-2021-03-27.tar.xz 
echo 'unzip success'

cd quickjs-2021-03-27

make

mkdir src

cp quickjs/*.c quickjs/*.h ./src


