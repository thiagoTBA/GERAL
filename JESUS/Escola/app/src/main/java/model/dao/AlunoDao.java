package model.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.sql.Connection;
import java.util.ArrayList;
import java.util.List;

import model.bean.Aluno;
import model.connection.ConnectionFactory;

/**
 * Created by Wesley Godinho on 23/11/2015.
 */
public class AlunoDao {
    private ConnectionFactory connection;

    public AlunoDao (Context context) {connection=new ConnectionFactory(context);}

    public void Salvaraluno(Aluno alu){
        ContentValues values=new ContentValues();
        values.put("alunome",alu.getAlunome());
        values.put("alucpf",alu.getAlucpf());
        values.put("alurg",alu.getAlurg());
        values.put("alufone",alu.getAlufone());
        values.put("aluend",alu.getAluend());
        connection.getWritableDatabase().insert("aluno",null,values);
        connection.close();
    }
    public List<Aluno> listaralu(){
        List<Aluno> lista=new ArrayList<>();
        String sql="select * from aluno";
        Cursor cursor=connection.getWritableDatabase().rawQuery(sql,null);
        while (cursor.moveToNext()){
            Aluno alu = new Aluno();
            alu.setAlucod(cursor.getInt(0));
            alu.setAlunome(cursor.getString(1));
            alu.setAlucpf(cursor.getString(2));
            alu.setAlurg(cursor.getString(3));
            alu.setAlufone(cursor.getString(4));
            alu.setAluend(cursor.getString(5));
            lista.add(alu);
        }
        connection.close();
        return lista;
    }
}
