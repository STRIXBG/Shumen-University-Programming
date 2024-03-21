<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Упражнения по Уеб Програмиране (Урок: 3)</title>
</head>
<body>
    <?php
    /*
        Regimes:
        "r":    Read Only File
        "w":    Creates file and empties it
        "a":    Saves the file if not created and writes in it
        "x":    Creates file only for writing gives ERROR if file exists
        "r+":   Opens file for reading and writing
        "w+":   
        "a+":   Read and Saving. Information is saved. Writing starts in the end of the file.
        "x+":   Creates file for writing and reading. ERROR if file already exists.
    */

    $file = fopen("webdict.txt", "r") or die("Unable to open file!");
    echo fread($file, filesize("webdict.txt"));
    fclose($file);

    ?>
</body>
</html>
