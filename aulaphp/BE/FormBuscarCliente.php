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
                    DIGITE UM CPF
                    <TD><input type="text" name="txtcpf"></TD>
                    <td><input type="submit"></td>
                </tr>
                
            </table>
            <table border="1">
                <tr>
                    <td colspan="5">DADOS DA PESQUISA</td>
                </tr>
                <tr>
                    <th>CODIGO</th>
                    <th>RG</th>
                    <th>CPF</th>
                    <th>FONE</th>
                    <th>OPCOES</th>
                </tr>  
                <?php
                include './Connection.php';
                conexao();
                if(!isset($_REQUEST['txtcpf'])){
                $nome="";                    
                }else {
                    $nome=$_POST['txtcpf'];
                }
                $sql="SELECT *FROM CLIENTE WHERE CLICOD LIKE '%".$nome."%' ";
                $result=  mysql_query($sql) or die(mysql_errno());
                while ($dados=  mysql_fetch_array($result)){                                   
                ?>
                <tr>
                    <td><?php echo $dados['clicod']; ?></td>
                    <td><?php echo $dados['clirg']; ?></td>
                    <td><?php echo $dados['clicpf']; ?></td>
                    <td><?php echo $dados['clifone']; ?></td>
                    <td>
                        <a href="FormAlterarCliente.php?codigo=<?php echo $dados['clicod'];?>&rg=<?php echo $dados['clirg']; ?>&&cpf=<?php echo $dados['clicpf']; ?>&&fone=<?php echo $dados['clifone']; ?>">ALTERAR</a>
                        <a href="FormExcluirCliente.php?codigo=<?php echo $dados['clicod'];?>&rg=<?php echo $dados['clirg']; ?>&&cpf=<?php echo $dados['clicpf']; ?>&&fone=<?php echo $dados['clifone']; ?>">EXCLUIR</a>
                    
                    </td>
                </tr>
                <?php
                }
                ?>
            </table>     
            
            
        </form>
    </body>
</html>
