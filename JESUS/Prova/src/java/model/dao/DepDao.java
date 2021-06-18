/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model.dao;

import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;
import model.beans.Bairro;
import model.beans.Cliente;
import model.beans.Dependentes;
import model.connection.ConnectionFactory;
import org.hibernate.Query;
import org.hibernate.Session;
import org.hibernate.Transaction;

/**
 *
 * @author alunoadm
 */
public class DepDao {
    
    private Session s;
    private Transaction tx;
    String sql;
    
    public void salvarDep(Dependentes dep){
        try{
        s=ConnectionFactory.getSessionFactory();
        tx=s.beginTransaction();
        s.save(dep);
        tx.commit();
        s.close();
            JOptionPane.showMessageDialog(null,"Dados salvos");
        }catch(Exception erro){
            JOptionPane.showMessageDialog(null,"Erro ao salvar "+erro.getMessage());
            
        }
        
    }
    List<Dependentes> lista = new ArrayList<Dependentes>();
    
    public List<Dependentes> listarDep(){
        s= new ConnectionFactory().getSessionFactory();
        sql="select *from dependentes ";
        Query query=s.createSQLQuery(sql).addEntity(Dependentes.class);
        lista=query.list();
        s.close();
        return lista;
    }
    
    public Dependentes buscarDep(int cod){
        s=ConnectionFactory.getSessionFactory();
        sql="select *from dependentes where depcod="+cod+"";
        Query query = s.createSQLQuery(sql).addEntity(Dependentes.class);
        lista=query.list();
        s.close();
        return lista.get(0);
    }        
            
    
}
