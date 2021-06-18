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
        <form method="post" action="InsertCliente.php" name="cadastrarCliente">
            <table align="center">
                <tr>
                    <td>digite seu rg</td>
                    <td><input type="text" name="txtrg" required="" placeholder="DIGITE SEU RG"></td>
                </tr>
                <tr>
                    <td>digite seu cpf</td>
                    <td><input type="text" name="txtcpf" required="" placeholder="DIGITE SEU CPF"></td>
                </tr>
                <tr>
                    <td>digite seu fone</td>
                    <td><input type="text" name="txtfone" required="" placeholder="DIGITE SEU CELL"></td>
                </tr>
                
                <tr>
                    <td><input type="submit" name="SALVAR"></td>
                    <td><input type="reset" ></td>
                </tr>
                
            </table>            
        </form>
    </body>
</html>
