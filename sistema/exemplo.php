<?php
//exemplo.php

/* Dicas: Em PHP nao precisa especificar o tipo de variavel.
TIpagem DInamica!!!*/

$nome = "Michelle";
$idade = 18;
$salario = 500;
$peso = 53;
$datanascimento = "10/06/2015";
$datadia = date('d/m/Y');
$n1 = 5;
$n2 = 5;
$total = $n1 + $n2;
/* o sinal do ponto significa concatenação.
para isso o "echo" so é usado apenas uma vez*/

echo "Nome: ".$nome."<br/>Idade: ".$idade."<br/>Total = ".$total;

if ($total <10 )
{
   echo "<br/>Total é menor que 10";
}
   else if ($total == 10)
    {
     echo "<br/>Igual a 10";
    }
       else
       {
           echo "<br/>Total maior que 10";
       }
echo "<br/> Exemplo do while <br/>";
$i = 1;
while ($i <= 10)
{
      echo $i;
      $i++;
}

echo "<br/> Exemplo do for <br/>";
//exemplo do laço por
for ($i=1;$i<=15;$i++)
{
    echo $i."<br/>";
}

echo "<br/> Exemplo do do while <br/>";
$i=1;
do{
echo $i."<br/>";
$i++;
} while ($i<=20);
?>

