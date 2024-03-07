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
        
        // if
        // else
        // elseif
        // switch-case
        // while
        // do-while
        // foreach
        // for
        // continue
        
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
                echo '<br><br>$a is NOT 2 or 3<hr>';
                break;
            }
        }
        
        echo '<br><br>While:';
        $i = 13;
        while ($i > 10)
        {
            echo '<br>'.$i;
            $i -= 1;
        }
        
        echo '<br><br>Do-While:';
        $i2 = 13;
        do
        {
            echo '<br>'.$i2;
            $i2 -= 1;
        } while ($i2 > 10);
        
        echo '<br><br>Foreach:';
        $arr = array(1, 2, 3, 4, 'Ivan', 'Georgi');
        foreach ($arr as &$value) {
            echo '<br>' . $value;
        }
        
        echo '<br><br>For:';
        for ($i3 = 0; $i3 < 10; $i3++)
        {
            echo '<br>' . $i3;
        }
        
        echo '<br><br>Continue:';
        for ($i3 = 0; $i3 < 2; $i3++)
        {
            $continue_ = random_int(false, true);
            if ($continue_)
            {
                echo '<br>Continue!!';
                continue;
            }
            echo '<br>No Continue';
        }
        ?>
    </body>
</html>
