package com.example.thiago.quiz30;

import android.app.Activity;

public class Questões extends Activity {
	//CONSTRUINDO A ESTRUTURA DO QUIZ
	private int ID;//numero da questão
	private String QUESTION;//a questão em si
	private String OPTA;//opcao a
	private String OPTB;//opcao b
	private String OPTC;//opcao c

	private String ANSWER;//resposta
	

	public Questões() {
		ID = 0;
		QUESTION = "";
		OPTA = "";
		OPTB = "";
		OPTC = "";

		ANSWER = "";

	}

	public Questões(String qUESTION, String oPTA, String oPTB, String oPTC,
					String aNSWER) {
		QUESTION = qUESTION;
		OPTA = oPTA;
		OPTB = oPTB;
		OPTC = oPTC;

		ANSWER = aNSWER;

	}
               //GERANDO GETS E SETS DAS PERGUNTAS,RESPOSTAS E OPÇÕES
	public int getID() {
		return ID;
	}

	public String getQUESTION() {
		return QUESTION;
	}

	public String getOPTA() {
		return OPTA;
	}

	public String getOPTB() {
		return OPTB;
	}

	public String getOPTC() {
		return OPTC;
	}

	public String getANSWER() {
		return ANSWER;
	}

	public void setID(int id) {
		ID = id;
	}

	public void setQUESTION(String qUESTION) {
		QUESTION = qUESTION;
	}

	public void setOPTA(String oPTA) {
		OPTA = oPTA;
	}

	public void setOPTB(String oPTB) {
		OPTB = oPTB;
	}

	public void setOPTC(String oPTC) {
		OPTC = oPTC;
	}

	public void setANSWER(String aNSWER) {
		ANSWER = aNSWER;
	}

}

// @Override
// public boolean onCreateOptionsMenu(Menu menu) {
// Inflate the menu; this adds items to the action bar if it is present.
// getMenuInflater().inflate(R.menu.main, menu);
// return true;
// }

