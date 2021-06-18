package com.example.thiago.quiz30;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;

import android.view.View;
import android.widget.TextView;import java.lang.Override;import hitesh.asimplegame.R;


public class ResultadoActivity extends Activity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_result);

		TextView textResult = (TextView) findViewById(R.id.textResult);

		Bundle b = getIntent().getExtras();

		int placar = b.getInt("PLACAR");

        textResult.setText("SEU PLACAR E " + " " + placar + ". Obrigado por jogar.");
        //mostrando o resultado

	}
         //intent que reinicia o jogo
	public void jogardenovo(View o) {

			Intent intent = new Intent(this, QuestoesActivity.class);

			startActivity(intent);


	}
}