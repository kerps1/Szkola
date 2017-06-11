#!/bin/bash

plik=$(ls -1 ./ | wc -l)

if [[ $plik -gt 5 ]];then
echo "W katalogu jest $plik plikow"
else
echo "W katalogu jest mniej niż 5 plików"
fi
