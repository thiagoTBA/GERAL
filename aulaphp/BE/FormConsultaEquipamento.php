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
                    DIGITE O CODIGO DO PRODUTO
                    <TD><input type="text" name="txtnome"></TD>
                    <td><input type="submit"></td>
                </tr>
                
            </table>
            <table border="1">
                <tr>
                    <td colspan="5">DADOS DA PESQUISA</td>
                </tr>
                <tr>
                    <th>CODIGO</th>
                    <th>NOME</th>
                    <th>VALOR</th>
                </tr>  
                <?php
                include './Connection.php';
                conexao();
                if(!isset($_REQUEST['txtnome'])){
                $nome="";                    
                }else {
                    $nome=$_POST['txtnome'];
                }
                $sql="SELECT *FROM EMPRESTIMO WHERE EMPID LIKE '%".$nome."%' ";
                $result=  mysql_query($sql) or die(mysql_errno());
                while ($dados=  mysql_fetch_array($result)){                                   
                ?>
                <tr>
                    <td><?php echo $dados['empid']; ?></td>
                    <td><?php echo $dados['empnome']; ?></td>
                    <td><?php echo $dados['empvalor']; ?></td>                    
                </tr>
                <?php
                }
                ?>
            </table>     
            
            
        </form>
    </body>
</html>
