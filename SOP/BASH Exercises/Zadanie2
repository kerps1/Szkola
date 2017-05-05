echo "<html><body><table><thead><tr><th>login</th><th>home</th><th>shell</th>
</t$></thead><tbody>"
cat /etc/passwd|awk -F':' '{print "<tr><td>"  $1 "</td><td>" $6 "</td><td>" 
$7 "</td></tr>}' 
echo "</tbody></table></body></html>"
