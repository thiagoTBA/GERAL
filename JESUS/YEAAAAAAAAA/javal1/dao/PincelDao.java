package dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.util.ArrayList;
import java.util.List;

import model.bean.Pincel;
import model.connection.ConnectionFactory;

/**
 * Created by Rilmar on 26/11/2015.
 */
public class PincelDao {
    private ConnectionFactory connectionFactory;

    public PincelDao(Context context){
        connectionFactory= new ConnectionFactory(context);
    }
    public void salvarPincel(Pincel pincel){
        ContentValues values= new ContentValues();
        values.put("pincdesc",pincel.getPincDesc());
        values.put("pinccor",pincel.getPincCor());
        values.put("pincmarca",pincel.getPincMarca());
        values.put("pincvalor",pincel.getPincValor());
        connectionFactory.getWritableDatabase().insert("pincel",null,values);
    }
    public List<Pincel> listaPincel(){
        List<Pincel> list= new ArrayList<>();
        String sql="select *from pincel;";
        Cursor cursor= connectionFactory.
                getWritableDatabase().rawQuery(sql,null);
        while(cursor.moveToNext()){
            Pincel p= new Pincel();
            p.setPincCod(cursor.getInt(0));
            p.setPincDesc(cursor.getString(1));
            p.setPincMarca(cursor.getString(2));
            p.setPincCor(cursor.getString(3));
            p.setPincValor(cursor.getDouble(4));
            list.add(p);
        }
        cursor.close();
        return list;
    }
    public void alterarPincel(Pincel p){
        ContentValues values= new ContentValues();
        values.put("pinccod",p.getPincCod());
        values.put("pincdesc",p.getPincDesc());
        values.put("pinccor",p.getPincCor());
        values.put("pincmarca",p.getPincMarca());
        values.put("pincvalor",p.getPincValor());

        String[] id={p.getPincCod().toString()};
        connectionFactory.getWritableDatabase().update("pincel", values, "pinccod=?", id);

    }

    public void excluirPincel(Integer idPincel){
        String[] id={idPincel.toString()};
        connectionFactory.getWritableDatabase().delete("Pincel=?",id);


    }


}

