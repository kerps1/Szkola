#!/bin/bash

read -sp "Podaj haslo" haslo

if [ "$haslo" == "haslo" ]; then
echo "Haslo jest prawidlowe"
else 
echo "Haslo jest bledne"
fi

