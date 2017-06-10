#!/bin/bash

echo "Witamy w terminalu"

X=tekst
echo $X

echo $X

X="Tekst dłuższy"
echo $X

X="Tekst 1"
Y="tekst:$X"
echo "$Y"
Y='tekst:$X'
echo "$Y"
Y=tekst:$X
echo "$Y"





$PATH
$RANDOM
$PWD
$PS1
$USER
$HOSTNAME
$OSTYPE

X=$(ls -l)
echo $X




echo "$1 ma kota, a kot ma ${1/a/ę}"
A=${#2}
echo "$2 ma kota, a kot ma ${2:}"


