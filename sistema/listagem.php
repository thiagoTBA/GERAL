<?php
include ("conecta.php");

if ($acao == 'excluir')
{
   //echo "Irei excluir o ID = ".$id;
   $sql = pg_query("delete from tabcadastro where id = $id");
   if ($sql){
   echo "<script>alert('Excluido com Sucesso.');</script>";
   echo "<script>location='listagem.php';</script>";
}
else
{
       echo "<script>alert('Falha na exclusao.');</script>";
       echo "<script>locarion='listagem.php';</script>";
}}
?>

<HTML>
<HEAD>
 <TITLE>LISTANDO PESSOAS</TITLE>
</HEAD>
<BODY>
<table width="80%" align="center" border="1">
<tr>
<td colspan="6" align="center">
<h2> Listagem de pessoas </h2>
</td>
</tr>

<tr>
<td align="center">ID</td>
<td align="center">NOME</td>
<td align="center">IDADE</td>
<td align="center">SAL&Aacute;RIO</td>
<td> &nbsp; </td>
<td> &nbsp; </td>
</tr>

<?php
$sql = pg_query("select * from tabcadastro order by id");
/*pg_query = Envia uma consulta para o postgres.
pg_fetch_array = Cria um vetor com o resultado da consulta enviada.
*/


while ($vetor = pg_fetch_array($sql))
{
?>

<tr>
<td align="center"><?php echo $vetor['id'];?></td>
<td align="center"><?php echo strtoupper($vetor['nome']);?></td>
<!--strtoupper = colocar as letras em maiusculo-->
<td align="center"><?php echo $vetor['idade'];?></td>
<td align="center"><?php echo $vetor['salario'];?></td>
<td align="center"><a href="editarcadastro.php?id=<?php echo $vetor['id'];?>"><img src="Penguins.jpg" border="0"></a></td>
<!-- depois do .php o ? significa passagem de parametro via link-->
<td align="center"><a href="?acao=excluir&id=<?php echo $vetor['id'];?>"> <img src="Jellyfish.jpg" border="0"></a></td>


</tr>
<?php
}
?>


<tr>
<td colspan="6" align="center">
<input type="button" name="btvoltar" id="btvoltar" onclick="location='menu.php'" value="Voltar">
</td>
</tr>
</BODY>
</HTML>
