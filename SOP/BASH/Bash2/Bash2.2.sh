
#!/bin/bash

read -p "Podaj kod pocztowy w formacie \"xx-xxx\": " kod
arg="^[0-9]{2}-[0-9]{3}$"

if [[ $kod =~ $arg ]]
        then
                echo "Dobry kod!"
        else
                echo "Zly kod"
        exit
        fi


