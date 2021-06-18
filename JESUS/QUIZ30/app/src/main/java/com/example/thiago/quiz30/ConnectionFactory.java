package com.example.thiago.quiz30;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by THIAGO on 06/12/2015.
 */
public class ConnectionFactory  extends SQLiteOpenHelper {
    private static final String DATEBASE="mathsone";
    private static final int VERSION=1;

    public ConnectionFactory (Context context) {super(context,DATEBASE,null,VERSION);}

    @Override
    public void onCreate(SQLiteDatabase db) {
        StringBuilder sql=new StringBuilder();
        sql.append("create table produto(")
                .append("procod Integer not null primary key,")
                .append("pronome text not null );");

        db.execSQL(sql.toString());
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }
}