package com.example.wesleygodinho.escola;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

import java.util.List;

import model.bean.Aluno;
import model.connection.ConnectionFactory;
import model.dao.AlunoDao;

public class ControllerAluno extends AppCompatActivity {
    private EditText txtalunome;
    private EditText txtalucpf;
    private EditText txtalurg;
    private EditText txtalufone;
    private EditText txtaluend;
    private Button btnsalvar;
    private ListView ListViewalu;

    private ArrayAdapter<Aluno> adapter;
    private int layout=android.R.layout.simple_list_item_1;

    private void listar(){
        AlunoDao alunoDao = new AlunoDao(this);
        List<Aluno> lista=alunoDao.listaralu();
        adapter= new ArrayAdapter<Aluno>(this,layout,lista);
        ListViewalu.setAdapter(adapter);
    }

    public void onResume(){
        super.onResume();
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        txtalunome=(EditText)findViewById(R.id.textnome);
        txtalucpf=(EditText)findViewById(R.id.textcpf);
        txtalurg=(EditText)findViewById(R.id.alurg);
        txtalufone=(EditText)findViewById(R.id.alufone);
        txtaluend=(EditText)findViewById(R.id.aluend);
        btnsalvar=(Button)findViewById(R.id.btnsalvar);
        final ConnectionFactory connectionFactory= new ConnectionFactory(this);
        final AlunoDao alunoDao = new AlunoDao(this);
        btnsalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Aluno alu = new Aluno();
                alu.setAlunome(txtalunome.getText().toString());
                alu.setAlucpf(txtalucpf.getText().toString());
                alu.setAlurg(txtalurg.getText().toString());
                alu.setAlufone(txtalufone.getText().toString());
                alu.setAluend(txtaluend.getText().toString());
                alunoDao.Salvaraluno(alu);
                ListViewalu=(ListView)findViewById(R.id.ListViewalu);
                listar();

            }
        });
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
