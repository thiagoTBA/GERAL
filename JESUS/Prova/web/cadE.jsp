<%-- 
    Document   : cadE
    Created on : 09/11/2015, 11:13:15
    Author     : alunoadm
--%>

<%@page import="model.beans.Bairro"%>
<%@page import="model.dao.BairroDao"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <form method="post" action="ControllerE">
            <table>
                <tr>
                    <td>
                        Rua:<input type="text" name="rua">
                    </td>
                </tr>
                <tr>
                    <td>
                        Numero:<input type="text" name="numero">
                    </td>
                </tr>
                <tr>
                    <td>
                        Bairro:<select name="bairro">
                    <%
                    BairroDao bdao = new BairroDao();
                    for(Bairro  b:bdao.listarBairro()){
                        
                    %>
                    <option value="<%=b.getBaicod() %>">
                        <%=b.getBainome() %></option>
                    <% }%>
                </select>
                    </td>
                </tr>
                <tr>
                    <td>
                        <input type="submit" value="Salvar" name="salvar">
                    </td>
                </tr>
                    
            </table>
        </form>
    </body>
</html>
