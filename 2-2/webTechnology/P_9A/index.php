<?php
session_start();
?>

<html>
    <head>
        <title>PHP Session</title>
        <style>
            .info, form{
                text-align: right;
            }
        </style>
    </head>
    <body>
        <p class="info">
            <?php
                $time = date('H:i:s');
                echo("You logged in on: $time");
                $_SESSION["logintime"] = $time;
            ?>
            <form action="logout.php">
                <input type="submit" name="" id="" value="Logout">
            </form>
        </p>
        <?php
            $name = $_GET['name'];
            print("<h1>Hello $name !</h1>");
        ?>
    </body>
</html>