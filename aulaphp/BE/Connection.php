<?php
function conexao(){
    
    $servidor="localhost";
    $usu="root";
    $senha="123";
    $banco="salvarphp";        
    mysql_connect($servidor,$usu,$senha) or die (mysql_error());
    
    mysql_select_db($banco)or die (mysql_error());        

}

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

