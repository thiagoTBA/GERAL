package model.connection;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by alunoadm on 19/11/2015.
 */
public class ConnectionFactory extends SQLiteOpenHelper{
    
    private static final String DATABASE="empresa";
    private static final int VERSION=1;
    
    public ConnectionFactory(Context context){
        super(context,DATABASE,null,VERSION);
    }
    
    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql=new StringBuilder();
        sql.append("create table funcionario (")
                .append("funcod integer primary key not null,")
                .append("funnome text not null,")
                .append("funfone text not null);");
        db.execSQL(sql.toString());
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}
