package model.connection;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by Wesley Godinho on 23/11/2015.
 */
public class ConnectionFactory extends SQLiteOpenHelper {

    private static final String DATABASE="escola";
    private static final int VERSION=1;

    public ConnectionFactory(Context context) {super(context,DATABASE,null,VERSION);}

    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql=new StringBuilder();
        sql.append("create table aluno(")
        .append("alucod integer primary key not null,")
        .append("alunome text not null,")
        .append("alucpf text not null,")
        .append("alurg text not null,")
        .append("alufone text not null,")
        .append("aluend text not null);");
    db.execSQL(sql.toString());
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
