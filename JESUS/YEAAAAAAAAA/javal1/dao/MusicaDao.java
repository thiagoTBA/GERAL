package dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.util.ArrayList;
import java.util.List;

import model.bean.Musica;
import model.connection.ConnectionFactory;

/**
 * Created by DiegoArllen on 25/11/2015.
 */
public class MusicaDao {
    private ConnectionFactory connection;

    public MusicaDao(Context context){
        connection= new ConnectionFactory(context);
    }

    public void salvarMus(Musica mus){
        ContentValues values= new ContentValues();
        values.put("musnome", mus.getMusnome());
        values.put("muscomp",mus.getMuscomp());
        values.put("musserie",mus.getMusserie());
        values.put("muscantor",mus.getMuscantor());
        values.put("musgenero",mus.getMusgenero());
        values.put("musdesc",mus.getMusdesc());
        connection.getWritableDatabase().insert("ControllerMusica", null, values);
        connection.close();
    }
    public List<Musica> listarMusicas(){
        List<Musica> lista= new ArrayList<>();
        String sql="select *from ControllerMusica";
        Cursor cursor=connection.getWritableDatabase().rawQuery(sql,null);
        while (cursor.moveToNext()){
            Musica mus= new Musica();
            mus.setMuscod(cursor.getInt(0));
            mus.setMusnome(cursor.getString(1));
            mus.setMuscomp(cursor.getString(2));
            mus.setMusserie(cursor.getInt(3));
            mus.setMuscantor(cursor.getString(4));
            mus.setMusgenero(cursor.getString(5));
            mus.setMusdesc(cursor.getString(6));
            lista.add(mus);
        }

        connection.close();
        return lista;
    }
}
