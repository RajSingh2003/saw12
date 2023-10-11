<!DOCTYPE html>
<html>
<head>
<title>hii</title>
</head>
<body>
    <?php
        if($_SERVER["REQUEST_METHOD"]=="POST")
        {
           $num1=$_POST["num1"];
           $num2=$_POST["num2"];
           
           function mod($a,$b)
           {
              $c=$a%$b;
              echo "MOD of $a and $b is = $c<br>";
           }
          function power($a,$b)
           {
              $c=pow($a,$b);
              echo "POWER = $c<br>";
           }
           
           function sum($a)
           {
              $s=0;
              for($i=1;$i<=$a;$i++)
              {
                 $s=$s+$i;
                 
              }    
              echo "SUM OF $a NUMBER is = $s<br>";
           }
           function fact($b)
           {
              $s=0;
              for($i=1;$i<=$b;$i++)
              {
                 $s=$s+$i;
                  
              }   
              echo "Factorial of $b is = $s<br>";
           }
           mod($num1,$num2);
           power($num1,$num2);
           sum($num1);
           fact($num2);
        }
    ?>
</body>
</html>
