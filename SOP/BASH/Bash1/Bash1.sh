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





echo $PATH
echo $RANDOM
echo $PWD
echo $PS1
echo $USER
echo $HOSTNAME
echo $OSTYPE

X=$(ls -l)
echo $X




echo "$1 ma kota, a kot ma ${1/a/ę}"
A=${#2}
echo "$2 ma kota, a kot ma ${2}a"


echo "$3^"



if [ ${#*} -lt 2 ]; then
	echo "Składnia:"
	echo " ./skrypt [Tytul] [Autor]"
else 
	cat index.inc | sed 's/[{][{]title[}][}]/'"$1"'/g' | \
	sed 's/[{][{]author[}][}]/'"$2"'/g' >  index.html
fi
