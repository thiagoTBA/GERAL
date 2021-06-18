<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->

        <?php
       include './Connection.php';
       conexao();
       $codigo=$_REQUEST['codigo'];
       
       $query="delete from cliente where clicod='$codigo'";
       
       mysql_query($query) or die(mysql_error());
       echo '<script>alert("dados excluidos com sucesso!")</script>';
       header("location: FormBuscarCliente.php")
        
        ?>
   