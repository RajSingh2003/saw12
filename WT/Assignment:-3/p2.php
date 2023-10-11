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

