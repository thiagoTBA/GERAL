<%-- 
    Document   : listaDep
    Created on : 09/11/2015, 09:23:21
    Author     : alunoadm
--%>

<%@page import="model.dao.ClienteDao"%>
<%@page import="model.beans.Cliente"%>
<%@page import="model.beans.Dependentes"%>
<%@page import="model.dao.DepDao"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        
            
            
            <table align="center" border="1">
                <tbody>
                <%
                    DepDao ddao= new DepDao();
                    for(Dependentes dep:ddao.listarDep()){
                %>
                <tr>
                    <td><%=dep.getDepnome() %></td>
                    <td><input type="button" value="Enderecos" onclick="location='listaEnde.jsp?codigo=<%=dep.getDepcod() %>'" class="sb bradius"></td>
                </tr>
                <%
                    }
                %>
            </tbody>
            </table>
                
        </form>
    </body>
</html>
