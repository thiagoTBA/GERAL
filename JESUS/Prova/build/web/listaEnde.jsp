<%-- 
    Document   : listaEnde
    Created on : 09/11/2015, 11:20:02
    Author     : alunoadm
--%>

<%@page import="model.beans.Endereco"%>
<%@page import="model.dao.EndeDao"%>
<%@page import="model.dao.BairroDao"%>
<%@page import="model.beans.Bairro"%>
<%@page import="model.dao.DepDao"%>
<%@page import="model.beans.Dependentes"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <%
            Dependentes dep = new Dependentes();
            DepDao depdao = new DepDao();
            dep=depdao.buscarDep(Integer.parseInt(request.getParameter("codigo")));
          
        %>
        <h1><p>Lista de Telefones do Aluno <%=dep.getDepnome() %></p></h1>
        <table border="1">
            <thead>
                <tr>
                    <td>Rua</td>
                    <td>Bairro</td>
                    <td>Opção</td>
                </tr>
            </thead>
            <tbody>
            <%
            Bairro bai = new Bairro();
            BairroDao baidao = new BairroDao();
            EndeDao edao = new EndeDao();
            for(Endereco end:edao.listarEnde(dep.getDepcod())){
            bai=baidao.buscarBairro(end.getBairro().getBaicod());
            %>
            
            <tr>
                <td><%=end.getEdrua()%></td>
                <td><%=bai.getBainome() %></td>
                <td><input type="button" value="Cadastrar" onclick="location='cadE.jsp?codigo=<%=end.getEdcod() %>'"></td>
            </tr>
            <%}%>
            </tbody>
        </table>

        </body>
</html>
