<?php
include ("funcoes.php");

if ($destino=='salvar')
{
 $proxID = getUltimoIDPessoa() + 1;
 $sqltxt = "INSERT INTO tabcadastro (id,nome,idade,salario) values ($proxID,'$nome',$idade,'$salario')";
 $sql = pg_query($sqltxt);
 if ($sql)
 {
     echo "<script>alert('Registro salvo com sucesso!');</script>";
     echo "<script>location='cadastro.php';</script>";
 }
 else
  {
      echo "Ocorreu algum erro no insert.<br/>Repasse o SQL abaixo para o administrador do sistema;<br/>".$sqltxt;
      exit;
  }
}
?>
<html>
<head>
 <title>New Document</title>
</head>
<body onload="document.form1.nome.focus();">
<form name="form1" method="post" action="?destino=salvar">
<table align="center" border="1" width="30%">
 <tr>
 <td colspan="2" align="center"> CADASTRO </td>
 </tr>
<tr>
<td>NOME</td>
<td>  <input type="text" name="nome" id="nome" required size="20"></td>
<tr>
<td>IDADE </td>
<td> <input type="text" name="idade" id="idade" required size="4" maxlength="3"></td>
</tr>
<tr>
<td>SAL&Aacute;RIO </td>
<td> <input type="text" name="salario" id="salario" required size="10"></td>
 </tr>
<tr><td align="center" colspan="2">
<input type="submit" name="btsalvar" id="btsalvar" value="Salvar">
<input type="button" name="btvoltar" id="btvoltar" value="Voltar" onclick="location='menu.php'"/></td>

</table>
</body>
</html>
