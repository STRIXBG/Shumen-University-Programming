<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Упражнения по Уеб Програмиране (Урок: 1 - Оператори)</title>
    </head>
    <body>
        <?php

        // INFO:
        // List of operators: -, +, /, *, %
        function multiply($a_, $b_) {
            return $a_ * $b_;
        }

        function divide($a_, $b_) {
            return $a_ / $b_;
        }

        function sum($a_, $b_) {
            return $a_ + $b_;
        }

        function minus($a_, $b_) {
            return $a_ - $b_;
        }

        // Increment:
        $a = 3;
        $a++;
        ++$a;

        // Decrement:
        $b = 4;
        $b--;
        --$b;

        // Pointers:
        $var1 = 2;
        $pointer = &$var1; // $pointer becomes 2
       
        // Remove pointer (unset):
        unset($pointer);

        // Comparison operators:
        // [==: equal] $a == $b
        // [===: identical] $a === $b
        // [!=: not equal] $a != b
        // [<>: not equal] $a <> $b
        // [<= , >=] $a >= $b, $a <= $b
        
        //Logical operators:
        // [!]
        // [&&] and
        // [||] or
        
        //Bit Operators:
        // [,]
        // [=>]
        
        // if ()
        // else
        // elseif
        //switch-case
        
        if ($a > $b) {
            echo '$a is greater than $b';
        }
        else
        {
            echo '$b is greather than $a';
        }
        
        switch ($a)
        {
            case 2:
            {
                echo '<br><br>$a == 2';
                break;
            }
            case 3:
            {
                echo '<br><br>$a == 3';
                break;
            }
            default:
            {
                echo '<br><br>not 2 or 3';
                break;
            }
        }
        ?>
    </body>
</html>
