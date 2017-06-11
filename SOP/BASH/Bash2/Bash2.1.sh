#!/bin/bash

read -p "Podaj imie zaczynajace sie z wielkiej litery." imie
warunek="^[A-Z][a-z]+$"


if [[ $imie =~ $warunek ]]
       then
              echo "Jeżeli to imie, to jest dobrze napisane :)"
    else
             echo "Jeżeli to imie, to jest źle napisane"
   fi
