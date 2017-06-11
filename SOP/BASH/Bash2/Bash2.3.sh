#!/bin/bash


sed -e 's/[a-zA-Z0-9.\-_]+@[a-zA-Z0-9\-.]+\.[a-zA-Z]+//g' plik.txt
