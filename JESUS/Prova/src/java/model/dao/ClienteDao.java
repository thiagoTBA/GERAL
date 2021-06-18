/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model.dao;

import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;
import model.beans.Cliente;
import model.connection.ConnectionFactory;
import org.hibernate.Query;
import org.hibernate.Session;
import org.hibernate.Transaction;

/**
 *
 * @author alunoadm
 */
public class ClienteDao {
    
    private Session s;
    private Transaction tx;
    String sql;
    
    public void salvarCliente(Cliente cliente){
        try{
        s=ConnectionFactory.getSessionFactory();
        tx=s.beginTransaction();
        s.save(cliente);
        tx.commit();
        s.close();
            JOptionPane.showMessageDialog(null,"Dados salvos");
        }catch(Exception erro){
            JOptionPane.showMessageDialog(null,"Erro ao salvar o cliente "+erro.getMessage());
            
        }
        
    }
    
    List<Cliente> lista = new ArrayList<Cliente>();
    
    public List<Cliente> listarCliente(){
        s=new ConnectionFactory().getSessionFactory();
        lista=s.createCriteria(Cliente.class).list();
        
        return lista;
}
    
    public Cliente buscarCliente(int cod){
        s=ConnectionFactory.getSessionFactory();
        sql="select * from cliente where clicod="+cod+" ";
        Query query=s.createSQLQuery(sql).addEntity(Cliente.class);
        lista=query.list();
        s.close();
        return lista.get(0);
    }
    
}
