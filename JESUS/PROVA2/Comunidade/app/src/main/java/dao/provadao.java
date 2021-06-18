package dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.util.ArrayList;
import java.util.List;

import model.bean.provabean;
import model.connection.ConnectionFactory;


public class provadao {
    ConnectionFactory connectionFactory;

    public provadao(Context context) {
        connectionFactory = new ConnectionFactory(context);
    }


    public void salvarfunc(provabean p) {

        ContentValues values = new ContentValues();
        values.put("pnome", p.getPnome());
        values.put("pcpf", p.getPcpf());
        values.put("pfone", p.getPbonus());
        values.put("psalario", p.getPsalari());
        values.put("pbonus", p.getPfone());
        values.put("psalariofinal", p.getPsalariofinal());
        connectionFactory.getWritableDatabase().insert("funcionario", null, values);

    }


    public List<provabean> lista() {
        List<provabean> lit = new ArrayList<>();
        String sql = "select *from funcionario";
        Cursor cursor = connectionFactory.getWritableDatabase().rawQuery(sql, null);
        while (cursor.moveToNext()) {
            provabean p = new provabean();
            p.setPcod(cursor.getInt(0));
            p.setPnome(cursor.getString(1));
            p.setPcpf(cursor.getInt(2));
            p.setPfone(cursor.getInt(3));
            p.setPsalari(cursor.getInt(4));
            p.setPbonus(cursor.getInt(5));
            p.setPsalariofinal(cursor.getInt(6));
            lista().add(p);

        }
        return lista();
    }

}

