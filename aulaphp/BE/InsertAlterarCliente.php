<?php
include './Connection.php';
conexao();
$codigo=$_REQUEST['codigo'];
$rg=$_REQUEST['txtrg'];
$cpf=$_REQUEST['txtcpf'];
$fone=$_REQUEST['txtfone'];

$sql="update cliente set clirg='$rg',clicpf='$cpf',clifone='$fone' where clicod=$codigo;";
mysql_query($sql) or die(mysql_error());
echo 'DADOS ATUALIZADOS';
?>
