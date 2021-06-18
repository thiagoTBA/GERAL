package com.example.thiago.quiz30;

/**
 * Created by THIAGO on 6/12/2015.
 */


import java.util.List;
import java.util.concurrent.TimeUnit;

import android.annotation.SuppressLint;
import android.annotation.TargetApi;
import android.app.Activity;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;import hitesh.asimplegame.R;


public class QuestoesActivity extends Activity {
    List<Questões> quesList;
    int placar = 0;
    int qid = 0;


    Questões currentQ;
    TextView txtQuestion, times, placa;
    Button button1, button2, button3;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        QuizHelper db = new QuizHelper(this);  // MEU BANCO DE QUESTÕES
        quesList = db.getAllQuestions();  // TRAZENDO TODAS AS QUESTÕES
        currentQ = quesList.get(qid); // MOSTRA A QUESTÃO ATUAL

        txtQuestion = (TextView) findViewById(R.id.txtQuestion);
        // textview que mostra qual questão esta sendo mostrada

        // os 3 botões,
        //a ideia e setar o texto nos 3 botões de acordo com o que esta no banco
        button1 = (Button) findViewById(R.id.button1);
        button2 = (Button) findViewById(R.id.button2);
        button3 = (Button) findViewById(R.id.button3);

        // o textview que mostra o plcar
        placa = (TextView) findViewById(R.id.PLACAR);

        // o cronometro
        times = (TextView) findViewById(R.id.timers);


        //metodo que vai definir a parte de visibiliade do jogo
        setQuestionView();
        times.setText("00:02:00");


        //metodo que conta o tempo que e de 60 segundos
        CounterClass timer = new CounterClass(60000, 1000);//quantidade de tempo-tempo que sera decorrido
        timer.start();


        button1.setOnClickListener(new View.OnClickListener() {//criando ação nos botões
            @Override
            public void onClick(View v) {


                //o botão passa o texto pra outro metodo
                //ele checka se a resposta esta corrreta ou nao
                // E a mesma coisa nois outros botões
                getAnswer(button1.getText().toString());
            }
        });

        button2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                getAnswer(button2.getText().toString());
            }
        });

        button3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                getAnswer(button3.getText().toString());
            }
        });
    }

    public void getAnswer(String AnswerString) {//aki ea parte da variavel contadadora do placar
        if (currentQ.getANSWER().equals(AnswerString)) {//caso o usuario acerte a resposta...


            // ele automaticamente somar +1 e levar o resultado para a proxima tela(1-2-3-4...)
            placar++;
            placa.setText("PLACAR : " + placar);
        } else {//caso ele erre

            //ele pulara direto para a classe resultadoactivity levando o resultado obtido ate entao

            Intent intent = new Intent(QuestoesActivity.this,
                    ResultadoActivity.class);


            //atribuindo o valor int ao placar
            Bundle b = new Bundle();
            b.putInt("PLACAR", placar);//setando o placar como um valor chave em int('putint' fazendo isso)
            intent.putExtras(b); // putextras guarda o valor chave setado pelo 'putint' adicionado a intent
            startActivity(intent);//iniciando a intent para passsar para a proxima questão
            finish();//finalizando
        }
        if (qid < 20) {

            // Se as questão nao acabaram
            currentQ = quesList.get(qid);//ele verifica a questão atual e passa para a proxima questão da lista
            setQuestionView();//mostrando a questão(no caso a seguinte)
        } else {

            // caso tenham acabado...
            Intent intent = new Intent(QuestoesActivity.this,
                    ResultadoActivity.class);
            Bundle b = new Bundle();
            b.putInt("PLACAR", placar);
            intent.putExtras(b);
            startActivity(intent);
            finish();
        }


    }


    @TargetApi(Build.VERSION_CODES.GINGERBREAD)
    @SuppressLint("NewApi")
    public class CounterClass extends CountDownTimer {

        public CounterClass(long millisInFuture, long countDownInterval) {
            super(millisInFuture, countDownInterval);
            // TODO Auto-generated constructor stub
        }


        @Override
        public void onFinish() {
            times.setText("TEMPO ESCOTADO");
        }//quando o tempo termina e morstra a msg a cima

        @Override//metodo do tempo
        public void onTick(long millisUntilFinished) {
            // TODO Auto-generated method stub

            long millis = millisUntilFinished;
            String hms = String.format(
                    "%02d:%02d:%02d",//FORMATO SETADO HORA-MINUTO-SEGUNDO
                    TimeUnit.MILLISECONDS.toHours(millis),//convertando os valores(milisegundo para horas)
                    TimeUnit.MILLISECONDS.toMinutes(millis)//convertendo de milisegundo para minutos
                            - TimeUnit.HOURS.toMinutes(TimeUnit.MILLISECONDS
                            .toHours(millis)),//setando de horas para minutos
                    TimeUnit.MILLISECONDS.toSeconds(millis)//passando de milisegundos para segundos
                            - TimeUnit.MINUTES.toSeconds(TimeUnit.MILLISECONDS
                            .toMinutes(millis)));//e finalizando passando de minutos para segundos
            System.out.println(hms);//exibiando o cronometro na tela
            times.setText(hms);
        }


    }

    private void setQuestionView() {//METODO DE VISUALIÇÃO DA QUESTÃO

        // esse eo metodo que coloca toda as repostas nos botões
        txtQuestion.setText(currentQ.getQUESTION());
        button1.setText(currentQ.getOPTA());
        button2.setText(currentQ.getOPTB());
        button3.setText(currentQ.getOPTC());

        qid++;//AKI ESTA CONTANDO A QUESTÃO MICHELLE
    }


}
