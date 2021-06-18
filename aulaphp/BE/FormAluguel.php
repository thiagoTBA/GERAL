<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
Programa com IF em PHP <br>
Calculo media com if 
<form action="nota.php" method="GET">
   Nome:<input type="text" name="nome"><br>
   nota1:<input type="text" name="n1"><br>
   nota2:<input type="text" name="n2"><br>
   nota3:<input type="text" name="n3"><br>
   <input type="submit" value="Calcular">
 </form>
<?php
$nome=$_GET["nome"];
$n1=$_GET["n1"];
$n2=$_GET["n2"];
$n3=$_GET["n3"];
$media=($n1+$n2+$n3)/3;
echo "Bem vindo $nome, suas notas são:";
echo "<br><br>Nota 1: $n1 - Nota 2: $n2 - Nota 3: $n3 - Media: $media<br><br> Voce esta ";

 ?>