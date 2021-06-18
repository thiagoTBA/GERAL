<?php

require 'Connection.php';
conexao();
$desc=$_REQUEST['txtnome'];
$valor=$_REQUEST['txtvalor'];

$query="insert into emprestimo values(null,'$desc','$valor')";
mysql_query($query);
echo 'DADOS SALVOS';


/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

