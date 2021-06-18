<?php



require 'Connection.php';
conexao();
$dias=$_REQUEST['txtdiaria'];
$qtde=$_REQUEST['txtqtde'];
$aluclicod=$_REQUEST['selcliente'];
$aluequicod=$_REQUEST['selemprestimo'];
$valor=$_REQUEST['empvalor'];

//$total=$aluequicod*$qtde;

$total=$valor*$qtde;

$query="insert into aluguel values(null,'$dias','$qtde','$aluclicod','$aluequicod','$total')";
mysql_query($query);
echo 'DADOS SALVOS';

header("location; FormEmprestimo.php")
?>




