<?php
    $name = $_GET['name'];
    $age = $_GET['age'];
    if($age<18){
        echo("Hello, you are not authorized to this site");
    }else{
        echo("Welcome to this site");
    }
?>