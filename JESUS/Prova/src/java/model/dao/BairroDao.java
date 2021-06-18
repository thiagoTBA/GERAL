/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model.dao;

import java.util.ArrayList;
import java.util.List;
import model.beans.Bairro;
import model.connection.ConnectionFactory;
import org.hibernate.Query;
import org.hibernate.Session;

/**
 *
 * @author alunoadm
 */
public class BairroDao {
    
    private Session s;
    String sql;
    
    List<Bairro> lista = new ArrayList<Bairro>();
    
    public List<Bairro> listarBairro(){
        s=ConnectionFactory.getSessionFactory();
        lista=s.createCriteria(Bairro.class).list();
        return lista;
    }
    
    public Bairro buscarBairro(int cod){
        s=ConnectionFactory.getSessionFactory();
        sql="select * from bairro where baicod="+cod+"";
        Query query = s.createSQLQuery(sql).addEntity(Bairro.class);
        lista=query.list();
        s.close();
        return lista.get(0);
    }
    
}
