/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import bean.Cliente;
import connection.Connectionfactory;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;
import org.hibernate.Query;
import org.hibernate.Session;
import org.hibernate.Transaction;

/**
 *
 * @author alunoadm
 */
public class clientedao {
    
    private Session s;
    private Transaction ts;
    
    
    List<Cliente> lista = new ArrayList<>();
    
    public List<Cliente> listarClientes (){
    s=new Connectionfactory().getSessionFactory();
    lista=s.createCriteria(Cliente.class).list();
        
    
    return lista;
    }
            public Cliente recuperarClientecod(int cod){

s=new Connectionfactory().getSessionFactory();
    Query query=s.createSQLQuery("SELECT *from cliente where clicod="+cod).addEntity(Cliente.class);
     lista=query.list();
     return lista.get(0);


}
            
          
public boolean salvarcli(Cliente cliente){

    try {
   s=new Connectionfactory().getSessionFactory();
   ts=s.beginTransaction();
   s.save(cliente);
   ts.commit();
   s.close();
        JOptionPane.showConfirmDialog(null, "DADOS SALVOS");
        return true;
    } catch (Exception e) {
        ts.rollback();
        s.close();
        JOptionPane.showConfirmDialog(null, "ERRO NA TRANSIÇÃO"+Error.class);
        return false;
    }
  
    
    
    
        
        
        
    }
   





}




