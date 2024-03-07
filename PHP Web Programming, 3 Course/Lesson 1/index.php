<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Упражнения по Уеб Програмиране (Урок: 1)</title>
    </head>
    <body>
        <?php
        //Printing arrays:
        echo 'Print arrays: <br>';

        // Set array:
        $students = array("Web Programming", 10 => true);

        // Add a new element into $students:

        $students[0] = 'Ivan';

        // Change key 10's value (dict/array):
        $students[10] = 3;
        $students[10] = 'test';

        // Change next key's value:
        $students[] = 'nov item;';

        echo $students[0] . '<br>' . $students[10] . '<br' . $students[11];

        echo '
            <br>
            <br>
            <br>
            
            Iterate (foreach loop)
            <br>
            ';

        // Iterate for loop:
        foreach ($students as &$value) {
            echo $value . '<br>';
        }

        // Delete an item of array:
        unset($students[0]);

        echo '
            <br>
            <br>
            <br>
            
            Delete item of array (unset)
            <br>
            ';
        foreach ($students as &$value) {
            echo $value . '<br>';
        }

        // New Array (lectures):
        $lectures = array("Petrov", "Nikolov", "Georgiev");

        // Print_r - print the whole array:
        echo '<br><br>print_r: Testing:';
        print_r($lectures);

        unset($lectures);
        ?>
    </body>
</html>
