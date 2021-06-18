package model.connection;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;


public class ConnectionFactory extends SQLiteOpenHelper {

    private static final String DATABASE = "banco";
    private static final int VERSION = 1;


    public ConnectionFactory(Context context) {
        super(context, DATABASE, null, VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql = new StringBuilder();
        sql.append("create table funcionario(")
                .append("pcodigo integer not null primary key,")
                .append("pnome text not null,")
                .append("pcpf int not null,")
                .append("pfone int not null,")
                .append("psalari int not null,")
                .append("pbonus text not null,")
                .append("psalariofinal text not null)");
        db.execSQL(sql.toString());

    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
