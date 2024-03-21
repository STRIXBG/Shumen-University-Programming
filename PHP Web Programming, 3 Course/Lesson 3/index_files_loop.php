<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Упражнения по Уеб Програмиране (Урок: 3)</title>
</head>
<body>
    <?php
    $file = fopen("webdict.txt", "r") or die("Unable to open file!");
    while (!feof($file)) {
        echo fgets($file) . '<br>';
    }

    fclose($file);
    ?>
</body>
</html>
