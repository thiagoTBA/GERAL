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
        <form action="" method="">
            <?php
                include './Connection.php';
                conexao();
            ?>
            
            <table align="center">
                <tr>
                    <td>RG</td>
                </tr>
                <tr>
                    <td>
                        <select name="selcliente" >
                            <?php
                            $sql="select *from cliente;";
                            $result=  mysql_query($sql);
                            while ($dados=mysql_fetch_array($result)){
                                ?>
                            <option><?php echo $dados['clirg']; ?> </option>
                            <?php
                            }
                                ?>                                                        
                        </select>
                        <tr>
                    <td>CPF</td>
                </tr>
                <tr>
                        <select name="selcliente" >
                            <?php
                            $sql="select clicod from cliente;";
                            $result=  mysql_query($sql);
                            while ($dados=mysql_fetch_array($result)){
                                ?>
                            <option><?php echo $dados['clicpf']; ?> </option>
                            <?php
                            }
                                ?>                                                        
                        </select>
                        <tr>
                    <td>RG</td>
                </tr>
                <tr>
                    <td>
                        <select name="selcliente" >
                            <?php
                            $sql="select *from cliente;";
                            $result=  mysql_query($sql);
                            while ($dados=mysql_fetch_array($result)){
                                ?>
                            <option><?php echo $dados['clifone']; ?> </option>
                            <?php
                            }
                                ?>                                                        
                        </select>
                    </td>
                </tr>
            </table>
        </form>
    </body>
</html>
