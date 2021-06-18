<?php
    if(isset($_SESSION['msg'])){
        $msg = $_SESSION['msg'];
    if(isset($_SESSION['erro'])){
        if($_SESSION['erro'] == true){
            echo "<div class='alert alert-danger' role='alert'>";
            echo "<button type='button' class='close' data-dismiss='alert' aria-label='Close'><span aria-hidden='true'>&times;</span></button>";
            echo "<span class='glyphicon glyphicon-exclamation-sign' aria-hidden='true'></span>";
            echo "<span class='sr-only'>Erro:</span>";
            echo " "."$msg";
            echo "</div>";
        } else if($_SESSION['erro'] == false) {
            echo "<div class='alert alert-success' role='alert'>";
            echo "<button type='button' class='close' data-dismiss='alert' aria-label='Close'><span aria-hidden='true'>&times;</span></button>";
            echo "<span class='glyphicon glyphicon-ok-circle' aria-hidden='true'></span>";
            echo "<span class='sr-only'>Sucesso:</span>";
            echo " "."$msg";
            echo "</div>";
        }
    }
        session_destroy();
    }