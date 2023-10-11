<!DOCTYPE html>
<html>
<head>
    <title>Greeting Generator</title>
</head>
<body>
    <h1>Greeting Generator</h1>
    <form method="post" action="setb3.php">
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
