package model.dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.util.ArrayList;
import java.util.List;

import model.bean.Funcionario;
import model.connection.ConnectionFactory;

/**
 * Created by alunoadm on 19/11/2015.
 */
public class FuncionarioDao {
    private ConnectionFactory connection;

    public FuncionarioDao(Context context){
        connection=new ConnectionFactory(context);
    }

    public void salvarFunc(Funcionario func){
        ContentValues values= new ContentValues();
        values.put("funnome",func.getFunnome());
        values.put("funfone", func.getFunfone());
        connection.getWritableDatabase().insert("funcionario", null, values);
        connection.close();
    }

    public List<Funcionario> listarFuncionario(){
        List<Funcionario> lista=new ArrayList<>();
        String sql="select * from funcionario";
        Cursor cursor=connection.getWritableDatabase().rawQuery(sql,null);
        while (cursor.moveToNext()){
            Funcionario func = new Funcionario();
            func.setFuncod(cursor.getInt(0));
            func.setFunnome(cursor.getString(1));
            func.setFunfone(cursor.getString(2));
            lista.add(func);
        }
        connection.close();
        return lista;
    }
}
