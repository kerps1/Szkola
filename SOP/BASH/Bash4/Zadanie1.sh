#!/bin/bash

cut -d : -f 1,6 /etc/passwd



file=/etc/passwd

IFS=':'

while read -r user f2 f3 f4 f5 dir f7
do
	echo "$user"
	echo "$dir"
	echo ""
done < "$file"
