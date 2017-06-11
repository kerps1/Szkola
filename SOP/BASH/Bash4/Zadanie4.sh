#!/bin/bash

choinka(){

spacja=$1

for ((i=0; i<=$1; i++)); do

for ((i=0; i<=spacja; i++));do
echo " "
done

let spacja-=1
echo $spacja
for ((i=10; i>=spacja; i--));do
echo "*"
done

done
}

if [ $# -eq 1 ]; then
	choinka $1

else
	echo "Nie podano argumentu wysokosci"
fi
