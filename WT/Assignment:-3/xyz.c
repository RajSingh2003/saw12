//ASSignment 3
//SET A
// Q 1

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="p1.php" method="post">
           num1<input type="text" name="num1"><br><br>
           num2<input type="text" name="num2"><br><br>
           <input type="submit" name="submit">
    </form>
</body>
</html>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        if($_SERVER["REUQEST_METHOD"]=="post")
        {
            $num1=$_POST["num1"];
            $num2=$_POST["num2"];
          function mod($a,$b)
          {
            $c=$a%$b;
            echo "mod is : $c<br>";
          }
          function power($a,$b)
          {
            $p=pow($a,$b);
            echo "Power =$p<br>";
          }
          function sum($n)
          {
            $s=0;
             for($i=1;$i<=$n;$i++)
             {
                $s=$s+$i;
                
             }
             echo "Sum of first $n Natural no : $s<br>";
          }
          function factorial($n)
          {
            $s=0;
            for($i=1;$i<=$n;$i++)
            {
               $s=$s+$i;
               
            }
            echo "factorial of $n is: $s<br>";
          }
          mod($num1,$num2);
          power($num1,$num2);
          sum($num1);
          factorial($num2);
          
        }
    ?>
</body>
</html>




//Q 2:::::
<!DOCTYPE html>
<html>
<head>
    <title>String Manipulation</title>
</head>
<body>
    <h2>String Manipulation</h2>
    <form action="p2.php" method="post" >
        Enter a string: <input type="text" size="30" name="input_string" required><br><br>
        <input type="radio" name="operation" value="length"><b>Find Length</b> <br>
        <input type="radio" name="operation" value="vowels"> Count Vowels<br>
        <input type="radio" name="operation" value="title_case"> Convert to Title Case<br>
        <input type="radio" name="operation" value="pad"> Pad with "*"<br>
        <input type="radio" name="operation" value="remove_whitespace"> Remove Whitespace<br>
        <input type="radio" name="operation" value="reverse"> Reverse String<br><br>
        <input type="submit" value="Submit">
    </form>

   
</body>
</html>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $input_string = $_POST["input_string"];
        $operation = $_POST["operation"];

        function findLength($str) 
        {
            $length = 0;
            while (isset($str[$length])) 
            {
                $length++;
            }
            return $length;
        }

        function countVowels($str) 
        {
            $vowels = ['a', 'e', 'i', 'o', 'u'];
            $count = 0;
            for ($i = 0; $i < strlen($str); $i++) 
            {
                if (in_array(strtolower($str[$i]), $vowels)) 
                {
                    $count++;
                }
            }
            return $count;
        }

        function convertToTitleCase($str) {
            return ucwords(strtolower($str));
        }

        function padWithAsterisk($str) {
            return "*" . $str . "*";
        }

        function removeLeadingWhitespace($str) {
            return ltrim($str);
        }

        function reverseString($str) {
            return strrev($str);
        }

        switch ($operation) {
            case "length":
                echo "Length of the string: " . findLength($input_string);
                break;
            case "vowels":
                echo "Total number of vowels: " . countVowels($input_string);
                break;
            case "title_case":
                echo "Title case: " . convertToTitleCase($input_string);
                break;
            case "pad":
                echo "Padded string: " . padWithAsterisk($input_string);
                break;
            case "remove_whitespace":
                echo "String without leading whitespaces: " . removeLeadingWhitespace($input_string);
                break;
            case "reverse":
                echo "Reversed string: " . reverseString($input_string);
                break;
        }
    }
   
    ?>
</body>
</html>



// SET B 
//Q 1;;
<!DOCTYPE html>
<html>
<head>
    <title>String Operations</title>
</head>
<body>
    <h2>String Operations</h2>
    <form method="post" action="p3.php">
        <label for="largeString">Enter Large String:</label>
        <input type="text" name="largeString"><br><br>
        
        <label for="smallString">Enter Small String:</label>
        <input type="text" name="smallString"><br><br>
        
        <input type="submit" name="submit" value="Submit">
    </form>

    <?php
    if(isset($_POST['submit'])){
        $largeString = $_POST['largeString'];
        $smallString = $_POST['smallString'];

        // a. Check if small string appears at the start of the large string
        $startsWith = stripos($largeString, $smallString) === 0 ? "Yes" : "No";

        // b. Find the position of the small string in the big string
        $position = stripos($largeString, $smallString);

        // c. Compare the first n characters (let's say n = 5)
        $n = 5;
        $comparison = strncasecmp(substr($largeString, 0, $n), substr($smallString, 0, $n), $n);

        echo "<br>a. Does the small string appear at the start of the large string? $startsWith";
        echo "<br>b. Position of the small string in the large string: $position";
        echo "<br>c. Comparison of first $n characters (case-insensitive): ";
        
        if ($comparison == 0) {
            echo "Both strings are the same.";
        } elseif ($comparison < 0) {
            echo "The large string comes before the small string.";
        } else {
            echo "The small string comes before the large string.";
        }
    }
    ?>
</body>
</html>






//Q 3

<!DOCTYPE html>
<html>
<head>
    <title>Greeting Generator</title>
</head>
<body>
    <h1>Greeting Generator</h1>
    <form method="post" action="p5.php">
        <label for="studentName">Student's Name:</label>
        <input type="text" id="studentName" name="studentName"><br><br>

        <label for="collegeName">College Name:</label>
        <input type="text" id="collegeName" name="collegeName"><br><br>

        <label for="greetingMessage">Greeting Message:</label>
        <input type="text" id="greetingMessage" name="greetingMessage"><br><br>

        <input type="submit" name="generateGreeting" value="Generate Greeting">
    </form>

    <?php
    function generateGreeting($studentName = "", $collegeName = "", $greetingMessage = "") {
        if (empty($studentName) && empty($collegeName) && empty($greetingMessage)) {
            return "Hello there!";
        } elseif (empty($studentName)) {
            return "Hello from $collegeName!";
        } elseif (empty($collegeName)) {
            return "Hello, $studentName!";
        } else {
            return "$greetingMessage, $studentName, from $collegeName!";
        }
    }

    if(isset($_POST['generateGreeting'])) {
        $studentName = $_POST['studentName'];
        $collegeName = $_POST['collegeName'];
        $greetingMessage = $_POST['greetingMessage'];

        $greeting = generateGreeting($studentName, $collegeName, $greetingMessage);
        echo "<p>$greeting</p>";
    }
    ?>
</body>
</html>


//SET C 
//Q 1


<!DOCTYPE html>
<html>
<head>
    <title>Student Result Calculator</title>
</head>
<body>
    <h2>Enter Marks for 5 Subjects</h2>
    <form method="post" action="">
        <?php
        $subjects = ["Subject 1", "Subject 2", "Subject 3", "Subject 4", "Subject 5"];
        $marks = [];

        // Create input fields for each subject
        for ($i = 0; $i < count($subjects); $i++) {
            echo '<label>' . $subjects[$i] . ':</label>';
            echo '<input type="number" name="marks[]" min="0" max="100" required><br>';
        }
        ?>
        <br>
        <input type="submit" name="calculate" value="Calculate">
    </form>

    <?php
    if (isset($_POST['calculate'])) {
        $marks = $_POST['marks'];

        // Calculate total marks
        $totalMarks = array_sum($marks);

        // Calculate percentage
        $percentage = ($totalMarks / (count($subjects) * 100)) * 100;

        // Determine the grade based on the percentage
        if ($percentage >= 90) {
            $grade = 'A+';
        } elseif ($percentage >= 80) {
            $grade = 'A';
        } elseif ($percentage >= 70) {
            $grade = 'B';
        } elseif ($percentage >= 60) {
            $grade = 'C';
        } elseif ($percentage >= 50) {
            $grade = 'D';
        } else {
            $grade = 'F';
        }

        // Display the result in a table
        echo '<h2>Result</h2>';
        echo '<table border="1">';
        echo '<tr><th>Subject</th><th>Marks</th></tr>';
        for ($i = 0; $i < count($subjects); $i++) {
            echo '<tr><td>' . $subjects[$i] . '</td><td>' . $marks[$i] . '</td></tr>';
        }
        echo '<tr><td>Total</td><td>' . $totalMarks . '</td></tr>';
        echo '<tr><td>Percentage</td><td>' . number_format($percentage, 2) . '%</td></tr>';
        echo '<tr><td>Grade</td><td>' . $grade . '</td></tr>';
        echo '</table>';
    }
    ?>
</body>
</html>
