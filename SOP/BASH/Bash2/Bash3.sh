#!/bin/bash


war="(\.sh$"
plik="/bash3.sh"
if [[ $file =~ $war ]];then
echo "Plik ma rozszerzenie.sh"
else 
echo "Plik nie ma rozszerzenia $FILE"
mv $f ${f%}.sh
fi
