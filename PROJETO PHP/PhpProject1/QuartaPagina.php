<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title>CADASTRO PAGE</title>
    </head>
    
    <body background="IBAGENS/2013.jpg" bgproperties="fixed">
        <table align="center"><tr><td><h1>FORM PAGE</h1></td></tr></table>
        <form>
            <table align="center">
                
                <tr>
                    <td>Nome</td>
                    <td><input type="text" name='txtnome' required=""></td>
                </tr>
                <tr>
                    <td>Sobrenome</td>
                    <td><input type="text" name='txtsobre' required=""></td>
                </tr>
                <tr>
                    <td>Idade</td>
                    <td><input type="date" name='date' required=""></td>
                </tr>
                <tr>
                    <td>BAIRRO</td>
                    <td><select name="txtBairro" required="">
                            <option></option>
                            <option>LONGE</option>
                            <option>MUITO LONGE</option>
                            <option>MAIS LONGE AINDA</option>
                            <option>FAR FAR AWAY</option>
                            <option>REDENÇÃO</option>
                            <option>LAGOA AZUL</option>
                        </select></td>
                    
                </tr>
                <tr>
                <td>Genero</td>
                <td>
                <input type="radio" name="txtgen" value="M" checked="M" required="">Masculino
                <input type="radio" name="txtgen" value="F" checked="F" required="">Feminino 
                <input type="radio" name="txtgen" value="I" checked="I" required=""> Indefinido 
                </td>
                </tr>
                <tr>
                    <td>Email</td>
                    <td><input type="email" name='txtemail'required=""></td>
                </tr>
                <tr>
                    <td>Telefone</td>
                    <td><input type="tel" name='txttel'required=""></td>
                </tr>
                <tr>
                    <td>SUA FOTO</td>
                    <td><input type="file" name='txtemail'></td>
                </tr>
                <tr>
                    <td>Login</td>
                    <td><input type="text" name='txtlogin'required=""></td>
                </tr>
                <tr>
                    <td>Senha</td>
                    <td><input type="password" name='txtpass'required=""></td>
                </tr>
                 <tr>
                    <td>limpar Campos</td>
                    <td><input type="reset" name='LIMPAR'></td>
                </tr>
                <tr>
                    <td>VC CONCORDA COM OS</td>
                    <td><a href="Termos.php" target="_self"> <input type="button" name="boton" value="TERMOS"/>?</a></td>
                <td>Marque se aceitar<input type="checkbox" name='txttermos' required=""></td>
                </tr>
      
                <td><input type="button" name="btnsalvar" value="SALVAR"/></td>
     
            </table>
            <table>
                <td><a href="index.php" target="_self"> <input type="button" name="INDEX" value="MENU" /> </a></td>
            </table>
            
        </form>
    </body>
</html>
