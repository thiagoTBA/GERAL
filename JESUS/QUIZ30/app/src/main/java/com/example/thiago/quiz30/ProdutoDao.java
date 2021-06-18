package com.example.thiago.quiz30;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by THIAGO on 06/12/2015.
 */
public class ProdutoDao {
    private ConnectionFactory connectionFactory;

    public ProdutoDao(Context context) {//construtor conectado no bd
        connectionFactory = new ConnectionFactory(context);
    }

    public void salvarProduto(Produto produto) {
        ContentValues values = new ContentValues();
        values.put("procod", produto.getProcod());
        values.put("pronome", produto.getPronome());
        connectionFactory.getWritableDatabase().insert("produto", null, values);
        connectionFactory.close();
    }

    public List<Produto> listapincel() {
        List<Produto> lista = new ArrayList<>();
        String sql = "select *from produto;";
        Cursor cursor = connectionFactory.getWritableDatabase().rawQuery(sql, null);
        while(cursor.moveToNext()){
            Produto produto= new Produto();
            produto.setProcod(cursor.getInt(0));
            produto.setPronome(cursor.getString(1));
            lista.add(produto);
        }
        cursor.close();
        return lista;
    }
}
