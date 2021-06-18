package dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.util.ArrayList;
import java.util.List;

import model.bean.Computador;
import model.connection.ConnectionFactory;

/**
 * Created by Rilmar on 25/11/2015.
 */
public class ComputadorDao {
    private ConnectionFactory connectionFactory;

    public ComputadorDao(Context context){
        connectionFactory= new ConnectionFactory(context);
    }
    public void salvarComputaador(Computador c){
        ContentValues values= new ContentValues();
        values.put("compdesc",c.getCompDesc());
        values.put("comphd",c.getCompHd());
        values.put("compmemoria",c.getCompMemoria());
        values.put("compmarca",c.getCompMarca());
        values.put("compmodelo",c.getCompModelo());
        connectionFactory.getWritableDatabase().insert("computador",null,values);

    }
    public List<Computador> listaComp(){
        List<Computador> list= new ArrayList<>();
        String sql="select *from computador ";
        Cursor cursor=connectionFactory.getWritableDatabase().rawQuery(sql,null);
        while(cursor.moveToNext()){
            Computador c= new Computador();
            c.setCompCod(cursor.getInt(0));
            c.setCompDesc(cursor.getString(1));
            c.setCompHd(cursor.getInt(2));
            c.setCompMemoria(cursor.getInt(3));
            c.setCompMarca(cursor.getString(4));
            c.setCompModelo(cursor.getString(5));
            list.add(c);
        }
        cursor.close();
        return list;
    }
    public List<Computador> filtrarComputador(String nome){
        List<Computador> list= new ArrayList<>();
        String sql="select *from computador where compdesc like '"+nome+"%' ";
        Cursor cursor=connectionFactory.getWritableDatabase().rawQuery(sql,null);
        while(cursor.moveToNext()){
            Computador c= new Computador();
            c.setCompCod(cursor.getInt(0));
            c.setCompDesc(cursor.getString(1));
            c.setCompHd(cursor.getInt(2));
            c.setCompMemoria(cursor.getInt(3));
            c.setCompMarca(cursor.getString(4));
            c.setCompModelo(cursor.getString(5));
            list.add(c);
        }
        cursor.close();
        return list;
    }
}
