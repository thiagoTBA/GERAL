<?php
//funcoes.php
include ("conecta.php");

function getUltimoIDPessoa()
{
   $sql = pg_query ("select id from tabcadastro order by id desc limit 1");
   //desc = descendente.

   $vetor = pg_fetch_array($sql);
   return $vetor[0];
}
?>

