<%-- 
    Document   : salvarcliente
    Created on : 09/05/2016, 14:53:50
    Author     : alunoadm
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>FOMULARIO CADASTRO CLIENTE</title>
    </head>
    <body>
        <h1 align="center">cadastro de cliente </h1>
        <form action="controllercliente" method="post">
            <table align="center">
            <tr>
                <td>NOME;</td>
                <td><input type="text" name="txtnome"</td> 
            </tr>
            <tr>
                <td>DATA DE NACIMENTO;</td>
                <td><input type="DATE" name="txtdata"</td> 
            </tr>
            <tr>
                <td>RG;</td>
                <td><input type="text" name="txtrg"</td> 
            </tr>
            <tr>
                <td>CPF;</td>
                <td><input type="text" name="txtcpf"</td> 
            </tr>
           
            
            <tr>
                <td><input type="submit" name="btnsalvar" value="salvar"></td>
            </tr>
            </table>>
        </form>  
    </body>
</html>
