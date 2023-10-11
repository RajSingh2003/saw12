<?php
   $a=$_GET["num1"];
   $ht=$b=explode(",",$a);
   echo "Array of high Temperature : ";
   foreach($b as $c)
          echo $c.",\t";
   $sum=0;
   $cn=count($b);
   foreach($b as $c)
          $sum+=$c;
   $avg=$sum/$cn;
   rsort($b);
   $k=array_slice($b,0,5);
   sort($ht);
   $m=array_slice($ht,0,5);
   echo "<br>Average High Temerature : $av &deg C";
   echo "<br>Five Warmiest high tempare :";
   foreach($k as $k1)
        echo $k1."\t";
    
   echo "<br>Five Collest high tempare :";
   foreach($m as $m1)
        echo $m1."\t";      
?>

