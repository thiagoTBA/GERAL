 <!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<?php
require './Connection.php';
conexao();

?>

<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <form method="POST" action="InserteAluguel.php">
            <table>
                <td>CPF DO CLIENTE</td>
                </tr>
                <tr>
                        <select name="selcliente" >
                            <?php
                            $sql="select *from cliente;";
                            $result=  mysql_query($sql);
                            while ($dados=mysql_fetch_array($result)){
                                ?>
                            <option value="<?php echo $dados['clicod']; ?>"><?php echo $dados['clicpf']; ?> </option>
                            <?php
                            }
                                ?>                                                        
                        </select>
            </tr>
            </table>
            <table>
                <tr>
                    <td>PRODUTO</td>
                        <select name="selemprestimo">
                            <?php
                                $sql="select * from emprestimo;";
                                $result=  mysql_query($sql);
                                while ($dados=  mysql_fetch_array($result)){
                            ?>
                            <option value="<?php echo $dados['empid']; ?>"> <?php echo $dados['empnome'];  ?> VALOR R$<?php echo $dados['empvalor'];  ?></option>
                            
                                <?php
                                }
                            ?>
                        </select>
                </tr>
            </table>
            <table>
                <tr>
                    <td>QUANTIDADE DE DIAS </td> 
                    <td><input type="text" name="txtdiaria"></td>   
                </tr>
                <tr>
                    <td>VALOR DA DIARIA </td> 
                    <td><input type="text" name="txtqtde"></td>   
                </tr>
                
            </table>
        
        <input type="submit" value="SALVAR">
        </form>
    </body>
</html>
