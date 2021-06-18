package model.connection;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by Rilmar on 25/11/2015.
 */
public class ConnectionFactory extends SQLiteOpenHelper{
   private static final String DATABASE="banco";
     private static final int VERSION=1;

    public ConnectionFactory(Context context){
        super(context,DATABASE,null,VERSION);

    }
    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql= new StringBuilder();
        sql.append("create table computador(")
                .append("compcod integer not null primary key,")
                .append("compdesc text not null,")
                .append("comphd integer not null,")
                .append("compmemoria integer not null,")
                .append("compmarca text not null,")
                .append("compmodelo text not null);");
        db.execSQL(sql.toString());

    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
