<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Упражнения по Уеб Програмиране (Урок: 1 - Константи, Променливи)</title>
    </head>
    <body>
        <?php
        // INFO: define("CONST NAME", "value");
        // INFO: not case senstive
        // 
        // Define Constants:
        define("PI", 3.14);
        define("STR", "STRING CONST");
        echo 'PI: ' . PI . '<br>';
        echo 'STR: ' . STR . '<br>';

        $a = 9.50 * sin(2 * PI / 9) + 6;
        echo 'RESULT = ' . $a . '<br>';

        // INFO: 4 TYPES VARIABLES:
        // SUPER GLOBAL VARS, 
        // GLOBAL VARS (without functions),
        // LOCAL VARS (only in functions),
        // GLOBAL IN FUNCTION (with construction global) points at global vars with same names
        // TESTING
        $a_ = 2;
        $b_ = 3;
        $c_ = 3;

        function sum() {
            global $a_, $b_, $c_;

            $c_ = $a_ + $b_;
        }

        sum();
        echo '<br>Sum Function:<br>' . $a_ . '<br>' . $b_ . '<br>' . $c_;

        // SUPER GLOBAL VARIABLES:
        // $GLOBALS
        // $_SERVER -> server's var
        // $_GET -> array of variables given by script GET
        // $_POST -> array of variables given by script POST
        // $_COOKIE -> array of cookie
        // $_FILES -> array of given variables given as files
        // $_ENV -> array of env
        // $_SESSION -> array of session's variables
        // $_REQUEST -> array of given by the user variables (get, post, cookie)
        ?>
    </body>
</html>
