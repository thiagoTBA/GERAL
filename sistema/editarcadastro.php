<?php
include ("funcoes.php");



if ($destino=='salvar')
{

 $sqltxt = "UPDATE tabcadastro set nome = '$nome', idade =  '$idade', salario = '$salario' where id = $idalterar";
 $sql = pg_query($sqltxt);
 if ($sql)
 {
     echo "<script>alert('Registros atualizados com sucesso!');</script>";
     echo "<script>location='listagem.php';</script>";
 }
 else
  {
      echo "Ocorreu algum erro no update.<br/>Repasse o SQL abaixo para o administrador do sistema;<br/>".$sqltxt;
      exit;
  }
}

$sql = pg_query ("select * from tabcadastro where id = $id");
$vetor = pg_fetch_array($sql);
 
?>
<html>
<head>
 <title>Edi&ccedil;&atilde;o de Cadastro</title>
</head>
<body onload="document.form1.nome.focus();">
<form name="form1" method="post" action="?destino=salvar">
<table align="center" border="1" width="30%">
 <tr>
 <td colspan="2" align="center"> Edi&ccedil;&atilde;o de Cadastro </td>
 </tr>
 
<tr>
<td>ID</td>
<td>  <input type="text" name="idalterar" id="idalterar" required size="4" value="<?php echo $vetor['id'];?>"></td>
</tr>
<tr>
<td>NOME</td>
<td>  <input type="text" name="nome" id="nome" required size="20" value="<?php echo $vetor['nome'];?>"></td>
</tr>

<tr>
<td>IDADE </td>
<td> <input type="text" name="idade" id="idade" required size="4" maxlength="3" value="<?php echo $vetor['idade'];?>"></td>
</tr>
<tr>
<td>SAL&Aacute;RIO </td>
<td> <input type="text" name="salario" id="salario" required size="10" value="<?php echo $vetor['salario'];?>"></td>
 </tr>
<tr><td align="center" colspan="2">
<input type="submit" name="btsalvar" id="btsalvar" value="Salvar">
<input type="button" name="btvoltar" id="btvoltar" value="Voltar" onclick="location='menu.php'"/></td>

</table>
</body>
</html>
