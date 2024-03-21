<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Упражнения по Уеб Програмиране (Урок: 3)</title>
</head>

<body>
    <?php
    /*
    function setcookie(
        string $name,
        string $value = "",
        int $expires_or_options = 0,
        string $path = "",
        string $domain = "",
        bool $secure = false,
        bool $httponly = false
    ): bool
    */
    $cookie_name = "user";
    $cookie_value = "John Doe";
    echo setcookie($cookie_name, $cookie_value, time() + (86400 * 30), "/");
    ?>

    <?php
    if (isset($_COOKIE[$cookie_name])) {
        echo 'yess';
    }
    else
    {
        echo 'no';
    }
    ?>
</body>

</html>
