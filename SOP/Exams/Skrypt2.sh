#!/bin/bash

wget -q http://szuflandia.pjwstk.edu.pl/~t0meck/sop/kolo/fun.sh 

chmod +rx ./fun.sh

	function getUsername(){
    local MYUSERNAME=`whoami`
    echo $MYUSERNAME
}

UNAME=`getUsername`

source ./fun.sh
PATH=`getPath`
tar -cvjSf $UNAME.tar.bz2 $PATH/*.sh
