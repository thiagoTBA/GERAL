package model.connection;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by DiegoArllen on 25/11/2015.
 */
public class ConnectionFactory extends SQLiteOpenHelper {

    private static final String DATABASE="AV1";
    private static final int VERSION=1;

    public ConnectionFactory(Context context){
        super(context,DATABASE,null,VERSION);
    }
    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql=new StringBuilder();
        sql.append("create table ControllerMusica (")
                .append("muscod integer primary key not null,")
                .append("musnome text not null,")
                .append("muscomp text not null,")
                .append("musserie integer not null,")
                .append("muscantor text not null,")
                .append("musgenero text not null,")
                .append("musdesc text not null);");
        db.execSQL(sql.toString());
    }
    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}