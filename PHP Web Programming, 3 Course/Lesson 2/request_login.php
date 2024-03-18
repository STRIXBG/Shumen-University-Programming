<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $username = $_POST["username"];
    $pass = $_POST["password"];

    define("USER","itsme");
    define("PASS", "secret");

    if ($username == USER && $pass == PASS) {
        echo 'ti uspq!';
    }
    else
    {
        echo 'probvai pak';
    }
    ?>
</body>

</html>
