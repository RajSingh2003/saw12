
<!DOCTYPE html>
<html>
<head>
    <title>Student Result Calculator</title>
</head>
<body>
    <h2>Enter Marks for 5 Subjects</h2>
    <form method="post" action="setc1.php">
        <?php
        $subjects = ["Subject 1", "Subject 2", "Subject 3", "Subject 4", "Subject 5"];
        $marks = [];

        // Create input fields for each subject
        for ($i = 0; $i < count($subjects); $i++) 
        {
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
        for ($i = 0; $i < count($subjects); $i++) 
        {
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
