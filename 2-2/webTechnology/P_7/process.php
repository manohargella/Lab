<!-- other way to do it -->
<?php
    $x = $_GET['num'];
    $y = $x;
    $sum = 0;
    $rev = 0;
    while($x>0){
        $sum += $x%10;
        $rev+=10+($x%10);
        $x = floor($x/10);
    }
    echo("The sum of $y = $sum </br>");
    if($rev == $y){
        echo("$y is palindrome");
    }else{
        echo("$y is not palindrome");
    }
?>