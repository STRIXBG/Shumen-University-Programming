<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Упражнения по Уеб Програмиране (Урок: 3)</title>
</head>

<body>
    <?php
    $start_timestamp = strtotime("Saturday");
    $end_timestamp = strtotime("+6 week", $start_timestamp);
    
    while ( $start_timestamp < $end_timestamp ) {
        echo date("M d", $start_timestamp) . '<br>';

        $start_timestamp = strtotime('+1 week', $start_timestamp);
    }
    
    ?>
</body>

</html>
