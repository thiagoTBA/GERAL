<?php

include("funcoes.php");
if($acao=='logar')
{
$sql = pg_query("select * from tabusuarios where login = '$login' and senha = '$senha'");
$vetor = pg_fetch_array($sql);
$encontrou = pg_num_rows($sql);
if ($encontrou >=1){
echo "<script>location='menu.php';</script>";
}
else{
echo "<script>alert('Login ou Senha Inválida');
location='index.php';</script>";}
}
?>

<HTML>
<HEAD>
 <TITLE>Tela de Login</TITLE>
</HEAD>
<BODY>
<form name="form1" method="post" action="?acao=logar">
<table width="60%" align="center" border="1">
<tr>
<td colspan="2" align="center"> Acesso ao Sistema </td>
</tr>

<tr>
<td align="center"> LOGIN </td>
<td> <input type="text" name="login" id="login" size="15"/></td>
</tr>

<tr>
<td align="center"> SENHA </td>
<td> <input type="text" name="senha" id="senha" size="15"/></td>
</tr>

<tr>
<td colspan="2" align="center"> <input type="submit" name="btentrar" value="Entrar"/>
</td>
</tr>

</BODY>
</HTML>
