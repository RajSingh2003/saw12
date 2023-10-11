<?php
$fp=fopen("myFile.dat","r");
$s=stat("myFile.dat");
echo "The Size of myFile.dat is <b>$s[7]</b> bytes";
$r=fread($fp,$s[7]);
echo "<br>File content : ";
echo "<br><b>$r</b>";
fclose($fp);
?>

