#!/bin/bash

if [ -z $1 ] 
then
        echo "Podaj ścieżkę"
        exit 1
fi

inotifywait -m $1 -e modify,create,delete,move
