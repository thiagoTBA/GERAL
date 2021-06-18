<?php

require 'Connection.php';
conexao();
$rg=$_REQUEST['txtrg'];
$cpf=$_REQUEST['txtcpf'];
$fone=$_REQUEST['txtfone'];
$query="insert into cliente values(null,'$rg','$cpf','$fone')";
mysql_query($query);
echo 'DADOS SALVOS';


/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

