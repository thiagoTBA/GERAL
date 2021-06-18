<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <form action="InsertAlterarCliente.php" method="POST">
            <table align="center">
                <TR>
                <input type="hidden" name="codigo" value="<?php echo $_REQUEST['codigo']; ?>">
                
                </TR> 
                <tr>
                    <td>RG:</td>
                </tr>
                <tr>
                    <td><input type="text" name="txtrg" value="<?php echo $_REQUEST['rg']; ?>"></td>
                </tr>
                <tr>
                    <td>CPF:</td>
                </tr>
                <tr>
                    <td><input type="text" name="txtcpf" value="<?php echo $_REQUEST['cpf']; ?>"></td>
                </tr>
                <tr>
                    <td>FONE:</td>
                </tr>
                <tr>
                    <td><input type="text" name="txtfone" value="<?php echo $_REQUEST['fone']; ?>"></td>
                </tr>
                <tr>
                    <td><input type="submit" name="UPDATE" value="UPDATE"></td>
                </tr>
                
            </table>
        </form> 
    </body>
</html>
