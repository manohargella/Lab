<?php 
    $x = $_GET['num'];
    $sum = array_sum(str_split($x));
    echo("Sum of digits = $sum </br>");
    $rev = strrev("$x");
    if($rev == $x){
        echo(" $x is palindrome");
    }else{
        echo("$x is not palindrome");
    }
?>