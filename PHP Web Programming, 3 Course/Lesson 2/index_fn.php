<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Упражнения по Уеб Програмиране (Урок: 2)</title>
</head>

<body>
    <?php
        $var_reference = 3;
        
        function edit_ref(&$var) {
            $var = 2;
        }

        edit_ref($var_reference);

        echo $var_reference . '<br>';

        function saveData($name, $pos, $org = "No Organisation") {
            echo "User: " . $name . " Position: " . $pos . " Organisation: " . $org . "<hr>";
        }

        saveData("Marin", "Boss", "Software Co");
        
        function doubleNum($num) {
            return $num * 2;
        }

        echo "Double Number: " . doubleNum(3) ."<br>";

        function inchToCm($inch) {
            return $inch * 2.54;
        }

        echo "Inches to CM: " . inchToCm(2)
    ?>
</body>

</html>
