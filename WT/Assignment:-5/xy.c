<?php
$fp=fopen("myFile.dat","r");
$s=stat("myFile.dat");
echo "The Size of myFile.dat is $s[7] bytes";
$r=fread($fp,$s[7]);
echo "<br>File content : ";
echo "<br>$r";

fclose($fp);

?>


<?php
$fp=fopen("file.dat","r");
$s=stat("file.dat");
echo "The size of file.txt data is :($s[7]) bytes");
$r=fread($fp,$s[7]);
echo "<br>File Containt :";
echo "<br>$r"; 
fclose($fp);
?>

























<!DOCTYPE html>
<html>
<head>
    <title>Item Bill</title>
</head>
<body>
    <h1>Item Bill</h1>
    <table border="1">
        <tr>
            <th>Item Code</th>
            <th>Item Name</th>
            <th>Units Sold</th>
            <th>Rate</th>
            <th>Total</th>
        </tr>

        <?php
        // Read the "item.dat" file
        $lines = file("item.dat");

        // Initialize the total bill
        $totalBill = 0;

        // Loop through each line in the file
        foreach ($lines as $line) {
            // Split the line into an array based on comma (assuming CSV format)
            $itemDetails = explode(",", $line);

            // Extract item details
            $itemCode = trim($itemDetails[0]);
            $itemName = trim($itemDetails[1]);
            $unitsSold = trim($itemDetails[2]);
            $rate = trim($itemDetails[3]);

            // Calculate the total for this item
            $totalItem = $unitsSold * $rate;

            // Add this item to the table
            echo "<tr>";
            echo "<td>$itemCode</td>";
            echo "<td>$itemName</td>";
            echo "<td>$unitsSold</td>";
            echo "<td>$rate</td>";
            echo "<td>$totalItem</td>";
            echo "</tr>";

            // Add to the total bill
            $totalBill += $totalItem;
        }
        ?>

        <tr>
            <td colspan="4">Total Bill</td>
            <td><?php echo $totalBill; ?></td>
        </tr>
    </table>
</body>
</html>


[11/10, 6:25 am] Raj Singh: Seta1
[11/10, 6:25 am] Raj Singh: <!DOCTYPE html>
<html>
<head>
    <title>Item Bill</title>
</head>
<body>
    <h1>Item Bill</h1>
    <table border="1">
        <tr>
            <th>Item Code</th>
            <th>Item Name</th>
            <th>Units Sold</th>
            <th>Rate</th>
            <th>Total</th>
        </tr>

        <?php
        // Read the "item.dat" file
        $lines = file("item.dat");

        // Initialize the total bill
        $totalBill = 0;

        // Loop through each line in the file
        foreach ($lines as $line) {
            // Split the line into an array based on comma (assuming CSV format)
            $itemDetails = explode(",", $line);

            // Extract item details
            $itemCode = trim($itemDetails[0]);
            $itemName = trim($itemDetails[1]);
            $unitsSold = trim($itemDetails[2]);
            $rate = trim($itemDetails[3]);

            // Calculate the total for this item
            $totalItem = $unitsSold * $rate;

            // Add this item to the table
            echo "<tr>";
            echo "<td>$itemCode</td>";
            echo "<td>$itemName</td>";
            echo "<td>$unitsSold</td>";
            echo "<td>$rate</td>";
            echo "<td>$totalItem</td>";
            echo "</tr>";

            // Add to the total bill
            $totalBill += $totalItem;
        }
        ?>

        <tr>
            <td colspan="4">Total Bill</td>
            <td><?php echo $totalBill; ?></td>
        </tr>
    </table>
</body>
</html>
[11/10, 12:37 pm] Purnendu Pandey Ryk: <html>
<body>
    <form action="5c1.php" method="GET">
        Enter File name : <input type="text" name="f1" />
        <br /><br />
       
        <input type="radio" name="op" value="1" />
        1.Disp1ay type of file.....
        <br />
        <input type="radio" name="op" value="2" />
        2.Display last access time of file.....
        <br />
        <input type="radio" name="op" value="3" />
        3.Display size of file.....
        <br />
        <input type="radio" name="op" value="4" />
        4.Delete the fiel.....
      
        <br><br>
        <input type="submit" />
    </form>
</body>

</html>

<?php
$file=$_GET["f1"];
$fp=fopen($file,"r");
$ch=$_GET["op"];
switch($ch)
{
    case 1 :
    $ft=filetype($file);
    echo " The type of file is : ". $ft;
    break;
    case 2:
    $lt=fileatime($file);
    echo " The last accessed time of file  is : ". date("F D Y H:i:s",$lt);
    break;
    case 3:
    $fs=filesize($file);
    echo " The size of file is : ".$fs;
    break;
    case 4:
    $b=unlink($file);
    if($b==1)
       echo " File is deleted.....";
    else
        echo " File is not deleted....";
    
    //default:"invalid choice";
}
?>






<html>
<body>

    <form action="5a2.php" method="GET">

        Enter Event title   name: <input type="text" name="e1">
        <br><br>
        <input type="submit">

    </form>
</body>
</html>

<?php
$eventTitle=$_GET['e1'];
$con = pg_connect("host=192.168.1.254 dbname=ty19 user=ty19 password=123456");
if ($con)
{
    echo "Able to open database\n";
}
else
{
    echo "Unable to open database \n";
}

$sql = <<<EOF
CREATE TABLE EVENT(ENO INT PRIMARY KEY,TITLE TEXT,DATE VARCHAR(10));
CREATE TABLE COMMITTEE(CNO INT PRIMARY KEY,NAME TEXT,HEAD TEXT,FROM_TIME VARCHAR(10),TO_TIME VARCHAR(10),STATUS TEXT);
CREATE TABLE EC(ENO INT REFERENCES EVENT(ENO),CNO INT REFERENCES COMMITTEE(CNO));
INSERT INTO EVENT(ENO,TITLE,DATE)
VALUES(1,'Genesis','2/12/2022');
INSERT INTO EVENT(ENO,TITLE,DATE)
VALUES(2,'AnnualDay','4/12/2022');
INSERT INTO EVENT(ENO,TITLE,DATE)
VALUES(3,'SportsDay','6/12/2022');
INSERT INTO COMMITTEE(CNO,NAME,HEAD,FROM_TIME,TO_TIME,STATUS)
VALUES(11,'TCS','SHUKLA',9,8,'NON-WORKING');
INSERT INTO COMMITTEE(CNO,NAME,HEAD,FROM_TIME,TO_TIME,STATUS)
VALUES(12,'INFOSYS','MEHTA',10,7,'WORKING');
INSERT INTO COMMITTEE(CNO,NAME,HEAD,FROM_TIME,TO_TIME,STATUS)
VALUES(13,'CAPGEMINI','PATIL',7,5,'WORKING');
INSERT INTO EC (ENO,CNO)
VALUES(1,11);
INSERT INTO EC(ENO,CNO)
VALUES(2,12);
INSERT INTO EC(ENO,CNO)
VALUES(3,13);
EOF;
$ret = pg_query($con, $sql);
if (!$ret)
{
    echo pg_last_error($con);
}
else
{
    echo "<br>Record Created Successfully !!";
}
//$updateSql = "UPDATE COMMITTEE SET STATUS='Working';";
$updateSql = "UPDATE COMMITTEE SET STATUS='Working' WHERE CNO IN (SELECT CNO FROM EC WHERE ENO IN (SELECT ENO FROM EVENT WHERE TITLE = '$eventTitle'));";

$ret = pg_query($con, $updateSql);
if (!$ret)
{
    echo pg_last_error($con);
    exit;
}
else
{
    echo "Status updated successfully \n";
}
pg_close($con);
?>
