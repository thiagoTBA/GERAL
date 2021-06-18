package com.example.diegoarllen.av1;

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

import dao.MusicaDao;
import model.bean.Musica;
import model.connection.ConnectionFactory;

public class ControllerMusica extends AppCompatActivity {

    private EditText txtnomemus;
    private EditText txtcompmus;
    private EditText txtseriemus;
    private EditText txtcantormus;
    private EditText txtgeneromus;
    private EditText txtdescmus;
    private Button btnsalvar;
    private ListView listViewmus;

    private ArrayAdapter<Musica> adapter;
    private int layout=android.R.layout.simple_list_item_1;


    private void listar(){
        MusicaDao musicaDao= new MusicaDao(this);
        List<Musica> lista=musicaDao.listarMusicas();
        adapter= new ArrayAdapter<Musica>(this,layout,lista);
        listViewmus.setAdapter(adapter);
    }

    public void onResume() {
        super.onResume();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_musica);

        txtnomemus=(EditText)findViewById(R.id.txtnomemus);
        txtcompmus=(EditText)findViewById(R.id.txtcompmus);
        txtseriemus=(EditText)findViewById(R.id.txtseriemus);
        txtcantormus=(EditText)findViewById(R.id.txtcantormus);
        txtgeneromus=(EditText)findViewById(R.id.txtgeneromus);
        txtdescmus=(EditText)findViewById(R.id.txtdescmus);
        btnsalvar=(Button)findViewById(R.id.btnsalvar);
        final ConnectionFactory connection= new ConnectionFactory(this);
        final MusicaDao musicaDao= new MusicaDao(this);
        btnsalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Musica mus = new Musica();
                mus.setMusnome(txtnomemus.getText().toString());
                mus.setMuscomp(txtcompmus.getText().toString());
                mus.setMusserie(txtseriemus.getId());
                mus.setMuscantor(txtcantormus.getText().toString());
                mus.setMusgenero(txtgeneromus.getText().toString());
                mus.setMusdesc(txtdescmus.getText().toString());
                musicaDao.salvarMus(mus);


                connection.close();
                listViewmus = (ListView) findViewById(R.id.ListViewMus);
                listar();
            }
        });
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_musica, menu);
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
