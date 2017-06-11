#!/bin/bash

plik="./config.cfg"
if [ -e $plik ];then
./config.cfg
elif [ $# -ge 1 ]; then
./$1
else 
echo "Blad programu"
fi
