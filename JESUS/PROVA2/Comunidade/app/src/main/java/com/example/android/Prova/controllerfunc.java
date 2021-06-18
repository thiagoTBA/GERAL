package com.example.android.Prova;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

import com.example.android.comunidade.R;

import java.util.List;

import dao.provadao;
import model.bean.provabean;
import model.connection.ConnectionFactory;

public class controllerfunc extends AppCompatActivity {
    private EditText txtnome;
    private EditText txtcpf;
    private EditText txtfone;
    private EditText txtbonus;
    private EditText txtsalari;
    private EditText txtsalariofinal;
    private Button btSalvar;
    private ListView listView;

    private ArrayAdapter<provabean> adapter;
    private int layout = android.R.layout.simple_list_item_1;


    private void lista() {
        provadao pDao = new provadao(this);
        List<provabean> listagem = pDao.lista();
        adapter = new ArrayAdapter<provabean>(this, layout, listagem);
        listView.setAdapter(adapter);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_prova);
        txtnome = (EditText) findViewById(R.id.txtnome);
        txtcpf = (EditText) findViewById(R.id.txtcpf);
        txtfone = (EditText) findViewById(R.id.txtfone);
        txtsalari = (EditText) findViewById(R.id.txtbonus);
        txtbonus = (EditText) findViewById(R.id.txtsalari);
        txtsalariofinal = (EditText) findViewById(R.id.txtsalariofinal);
        btSalvar = (Button) findViewById(R.id.btsalvar);
        final ConnectionFactory connectionFactory = new ConnectionFactory(this);
        final provadao pDao = new provadao(this);

        btSalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                provabean p = new provabean();
                p.setPnome(txtnome.getText().toString());
                p.setPcpf(Integer.parseInt(txtcpf.getText().toString()));
                p.setPbonus(Integer.parseInt(txtfone.getText().toString()));
                p.setPsalari(Integer.parseInt(txtsalari.getText().toString()));
                p.setPfone(Integer.parseInt(txtbonus.getText().toString()));
                p.setPsalariofinal(Integer.parseInt(txtsalariofinal.getText().toString()));
                pDao.salvarfunc(p);
                listView = (ListView) findViewById(R.id.listView);
            }
        });


    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_prova, menu);
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




