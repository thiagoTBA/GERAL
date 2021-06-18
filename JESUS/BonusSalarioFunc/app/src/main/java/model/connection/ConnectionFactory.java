package model.connection;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by Rilmar on 03/12/2015.
 */
public class ConnectionFactory extends SQLiteOpenHelper {

    private final  static String DATABASE="SalarioFunc";
    private final static  int VERSION=1;

    public ConnectionFactory(Context context){
        super(context,DATABASE,null, VERSION);
    }
    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql= new StringBuilder();
        sql.append("create table funcionario(")
                .append("funccod integer not null primary key,")
                .append("funnome text not null,")
                .append("funcpf integer not null,")
                .append("funfone text not null,")
                .append("funsalario real not null,")
                .append("funbonus real not null,")
                .append("funsaltotal real not null);");
        db.execSQL(sql.toString());

    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
