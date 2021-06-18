package com.example.thiago.quiz30;

import java.util.ArrayList;
import java.util.List;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class QuizHelper extends SQLiteOpenHelper {
	private static final int DATABASE_VERSION = 1;
	// CRAIANDO BANCO
	private static final String DATABASE_NAME = "mathsone";
	// setando a tabela
	private static final String TABLE_QUEST = "quest";
	// setando as colunas
	private static final String KEY_ID = "qid";//id
	private static final String KEY_QUES = "QUESTÃO";//QUESTÃO
	private static final String KEY_ANSWER = "RESPOSTA"; // OPCÃO RESPOSTA
	private static final String KEY_OPTA = "opta"; // OPCÃO a
	private static final String KEY_OPTB = "optb"; // OPCÃO b
	private static final String KEY_OPTC = "optc"; // OPCÃO c

	private SQLiteDatabase dbase;

	public QuizHelper(Context context) {
		super(context, DATABASE_NAME, null, DATABASE_VERSION);
	}

	@Override
	public void onCreate(SQLiteDatabase db) {
		dbase = db;
		String sql = "CREATE TABLE IF NOT EXISTS  " + TABLE_QUEST + " ( "
				+ KEY_ID + " INTEGER PRIMARY KEY AUTOINCREMENT, " + KEY_QUES
				+ " TEXT, " + KEY_ANSWER + " TEXT, " + KEY_OPTA + " TEXT, "
				+ KEY_OPTB + " TEXT, " + KEY_OPTC + " TEXT)";
		db.execSQL(sql);
		addQuestion();
		// db.close();
	}

	private void addQuestion() {
		Questões q1 = new Questões("5+2 = ?", "7", "8", "6", "7");
		this.addQuestion(q1);
		Questões q2 = new Questões("2+18 = ?", "18", "19", "20", "20");
		this.addQuestion(q2);
		Questões q3 = new Questões("10-3 = ?", "6", "7", "8", "7");
		this.addQuestion(q3);
		Questões q4 = new Questões("5+7 = ?", "12", "13", "14", "12");
		this.addQuestion(q4);
		Questões q5 = new Questões("3-1 = ?", "1", "3", "2", "2");
		this.addQuestion(q5);
		Questões q6 = new Questões("0+1 = ?", "1", "0", "10", "1");
		this.addQuestion(q6);
		Questões q7 = new Questões("9-9 = ?", "0", "9", "1", "0");
		this.addQuestion(q7);
		Questões q8 = new Questões("3+6 = ?", "8", "7", "9", "9");
		this.addQuestion(q8);
		Questões q9 = new Questões("1+5 = ?", "6", "7", "5", "6");
		this.addQuestion(q9);
		Questões q10 = new Questões("7-5 = ?", "3", "2", "6", "2");
		this.addQuestion(q10);
		Questões q11 = new Questões("7-2 = ?", "7", "6", "5", "5");
		this.addQuestion(q11);
		Questões q12 = new Questões("3+5 = ?", "8", "7", "5", "8");
		this.addQuestion(q12);
		Questões q13 = new Questões("0+6 = ?", "7", "6", "5", "6");
		this.addQuestion(q13);
		Questões q14 = new Questões("12-10 = ?", "1", "2", "3", "2");
		this.addQuestion(q14);
		Questões q15 = new Questões("12+2 = ?", "14", "15", "16", "14");
		this.addQuestion(q15);
		Questões q16 = new Questões("2-1 = ?", "2", "1", "0", "1");
		this.addQuestion(q16);
		Questões q17 = new Questões("6-6 = ?", "6", "12", "0", "0");
		this.addQuestion(q17);
		Questões q18 = new Questões("5-1 = ?", "4", "3", "2", "4");
		this.addQuestion(q18);
		Questões q19 = new Questões("4+2 = ?", "6", "7", "5", "6");
		this.addQuestion(q19);
		Questões q20 = new Questões("5+1 = ?", "6", "7", "5", "6");
		this.addQuestion(q20);
		Questões q21 = new Questões("5-4 = ?", "5", "4", "1", "1");
		this.addQuestion(q21);
		// FIM
	}

	@Override
	public void onUpgrade(SQLiteDatabase db, int oldV, int newV) {
		// atualizando a tabela velha se existe alguma e sobrepondo com uma nova
		db.execSQL("CREATE TABLE IF NOT EXISTS " + TABLE_QUEST);
		// cria uma nova tabela
		onCreate(db);
	}

	// adiciona uma nova questão
	public void addQuestion(Questões quest) {
		// SQLiteDatabase db = this.getWritableDatabase();
		ContentValues values = new ContentValues();
		values.put(KEY_QUES, quest.getQUESTION());//AKI ADICIONA QUESTAO
		values.put(KEY_ANSWER, quest.getANSWER());//aki adiciona a resposta
		values.put(KEY_OPTA, quest.getOPTA());//aopca a
		values.put(KEY_OPTB, quest.getOPTB());//opca b
		values.put(KEY_OPTC, quest.getOPTC());//opcao c

		// INSERINDO NA FILA
		dbase.insert(TABLE_QUEST, null, values);
	}

	public List<Questões> getAllQuestions() {
		List<Questões> quesList = new ArrayList<Questões>();
		// selecionando todas as consutas(dentro da listaÇ)
		String selectQuery = "SELECT  * FROM " + TABLE_QUEST;
		dbase = this.getReadableDatabase();
		Cursor cursor = dbase.rawQuery(selectQuery, null);
		// loop através de todas as linhas e adicionando à lista
		if (cursor.moveToFirst()) {
			do {
				Questões quest = new Questões();
				quest.setID(cursor.getInt(0));
				quest.setQUESTION(cursor.getString(1));
				quest.setANSWER(cursor.getString(2));
				quest.setOPTA(cursor.getString(3));
				quest.setOPTB(cursor.getString(4));
				quest.setOPTC(cursor.getString(5));

				quesList.add(quest);
			} while (cursor.moveToNext());
		}
		// retornando
		return quesList;
	}


}
