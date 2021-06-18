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
        <form>
            <?php
            require './Connection.php';
            conexao();       
            ?>
            
            <table>
                <tr>
                    <td>
                        <select name="selemprestimo">
                            <?php
                                $sql="select *from emprestimo;";
                                $result=  mysql_query($sql);
                                while ($dados=  mysql_fetch_array($result)){
                            ?>
                            <option><?php echo $dados['empnome'];  ?></option>
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
