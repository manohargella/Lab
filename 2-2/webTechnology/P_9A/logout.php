<?php
    session_start();
    echo("<h1>ThankYou</h1>");
    $logintime = new DateTime($_SESSION["logintime"]);
    $logouttime = new DateTime(date('H:i:s'));
    $intervel = $logintime->diff($logouttime);
    $ts = $intervel->format('%s');
    echo("Time spent: $ts seconds");
    session_unset();
    session_destroy();
?>