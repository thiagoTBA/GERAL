/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model.dao;

import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;
import model.beans.Endereco;
import model.connection.ConnectionFactory;
import org.hibernate.Query;
import org.hibernate.Session;
import org.hibernate.Transaction;

/**
 *
 * @author alunoadm
 */
public class EndeDao {
    
    private Session s;
    private Transaction tx;
    String sql;
    
    List<Endereco> lista = new ArrayList<Endereco>();
    
    public List<Endereco> listarEnde(int dcod){
        
        s= new ConnectionFactory().getSessionFactory();
        sql="select *from endereco where eddepcod="+dcod+" ";
        Query query=s.createSQLQuery(sql).addEntity(Endereco.class);
        lista=query.list();
        s.close();
        return lista;
        
    }
    
    public void salvarE(Endereco end){
        try{
            s=ConnectionFactory.getSessionFactory();
            tx=s.beginTransaction();
            s.save(end);
            tx.commit();
            s.close();
            JOptionPane.showMessageDialog(null,"Salvo");
        }catch(Exception erro){
            JOptionPane.showMessageDialog(null,erro.getMessage());
        }
        
    }
}
