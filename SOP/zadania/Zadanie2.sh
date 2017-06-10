HTML="<table><thead><tr><th>login</th><th>home</th><th>shell</th>
</tr></thead><tbody>"

HTML+=`cat /etc/passwd | awk -F':' '{print "<tr><td>" $1 "</td><td>" $6 "</td><td>" 
$7 "</td></tr>"}'`

HTML+="</tbody></table>"

echo $HTML > index.html
