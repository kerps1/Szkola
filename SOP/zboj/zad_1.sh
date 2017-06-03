#!/bin/bash

if [ -z $1 ] 
then
        echo "Podaj sciezke do katalogu ktory chcesz obserwowac"
        exit 1
fi

inotifywait -m -e modify,create,delete,move $1
