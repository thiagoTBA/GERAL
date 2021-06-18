<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <form form="aluguel.php" method="GET" >
            valor1<input type="text" name="valor1">
            valor2<input type="text" name="valor2">
            <input type="submit" value="Calcular">
        </form>
        <?php
$n1=$_GET["valor1"];
$n2=$_GET["valor2"];
$total=($n1*$n2);
echo "<br><br>Nota 1: $n1 - Nota 2: $n2 - total: $total<br><br>";
        ?>
    </body>
</html>
