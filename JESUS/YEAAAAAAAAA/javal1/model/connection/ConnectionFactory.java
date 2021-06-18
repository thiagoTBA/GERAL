package model.connection;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by Rilmar on 26/11/2015.
 */
public class ConnectionFactory extends SQLiteOpenHelper {

    static final String DATABASE="banco";
    static final int VERSION=1;

    public ConnectionFactory(Context context){
        super(context,DATABASE,null,VERSION);
    }
    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql= new StringBuilder();
        sql.append("create table pincel(")
                .append("pinccod integer not null primary key,")
                .append("pincdesc text not null,")
                .append("pinccor text not null,")
                .append("pincmarca text not null,")
                .append("pincvalor real not null);");
        db.execSQL(sql.toString());

    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
