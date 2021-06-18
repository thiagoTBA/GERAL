package com.example.rilmar.appprodutomenulistar;

import android.content.Intent;
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

import dao.ComputadorDao;
import model.bean.Computador;

public class ControllerFiltrarDados extends AppCompatActivity {
    private EditText txtnome;
    private Button btnpesquisa;
    private ListView listView;

    ArrayAdapter<Computador> adapter;
    private int layout= android.R.layout.simple_list_item_1;

    public void pesquisar(){
        ComputadorDao cDao = new ComputadorDao(this);
        List<Computador> listagem = cDao.filtrarComputador(txtnome.getText().toString());
        adapter=new ArrayAdapter<Computador>(this,layout,listagem);
        listView.setAdapter(adapter);


    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_filtrar_dados);
        txtnome=(EditText)findViewById(R.id.idtxtNomeFiltrar);
        btnpesquisa=(Button)findViewById(R.id.idbtnFiltrarTelaFiltrar);
        listView=(ListView)findViewById(R.id.idviewFiltarProd);
        btnpesquisa.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                pesquisar();
            }
        });
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_filtrar_dados, menu);
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
            Intent intent= new Intent(ControllerFiltrarDados.this,ControllerListarProdutos.class);
            startActivity(intent);

            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
