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
        <form method="post">
            <table>
                <tr>
                    DIGITE UM CODIGO
                    <TD><input type="text" name="txtcod"></TD>
                    <td><input type="submit"></td>
                </tr>
                
            </table>
            <table border="1">
                <tr>
                    <td colspan="5">DADOS DA PESQUISA</td>
                </tr>
                <tr>
                    <th>CODIGO</th>
                    <th>DIAS ALUGADO</th>
                    <th>QUANTIDADE DE DIAS</th>
                    <th>CODIGO DO CLIENTE</th>
                    <th>CODIGO DO PRODUTO</th>
                    <th>TOTAL</th>
                </tr>  
                <?php
                include './Connection.php';
                conexao();
                if(!isset($_REQUEST['txtcod'])){
                $nome="";                    
                }else {
                    $nome=$_POST['txtcod'];
                }
                $sql="SELECT *FROM ALUGUEL WHERE ALUCOD LIKE '%".$nome."%' ";
                $result=  mysql_query($sql) or die(mysql_errno());
                while ($dados=  mysql_fetch_array($result)){                                   
                ?>
                <tr>
                    <td><?php echo $dados['alucod']; ?></td>
                     <td><?php echo $dados['aludias']; ?></td>
                    <td><?php echo $dados['aluqtde']; ?></td>
                    <td><?php echo $dados['aluclicod']; ?></td>
                    <td><?php echo $dados['aluempid']; ?></td>
                    <td><?php echo $dados['alutotal']; ?></td>
                    <td>
                        <a href="FormAlterarCliente.php?codigo=<?php echo $dados['alucod'];?>&dias=<?php echo $dados['aludias']; ?>&&qtde=<?php echo $dados['aluqtde']; ?>&&clicod=<?php echo $dados['aluclicod']; ?>&&empid=<?php echo $dados['aluempid']; ?>">ALTERAR</a>
                        <a href="FormAlterarCliente.php?codigo=<?php echo $dados['alucod'];?>&dias=<?php echo $dados['aludias']; ?>&&qtde=<?php echo $dados['aluqtde']; ?>&&clicod=<?php echo $dados['aluclicod']; ?>&&empid=<?php echo $dados['aluempid']; ?>">EXCLUIR</a>                   
                    </td>
                </tr>
                <?php
                }
                ?>
                
            </table>     
            
            
        </form>
    </body>
</html>
