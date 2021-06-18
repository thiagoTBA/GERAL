package com.example.rilmar.appprodutomenulistar;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;

import java.util.List;

import dao.ComputadorDao;
import model.bean.Computador;
import model.connection.ConnectionFactory;

public class ControllerListarProdutos extends AppCompatActivity {
    private ListView listViewCom;
    private Button btnfiltrar;

    private ArrayAdapter<Computador> adapter;
    private int layout=android.R.layout.simple_list_item_1;

    private void lista(){
        ComputadorDao cDao= new ComputadorDao(this);
        List<Computador> listagemComp=cDao.listaComp();
        adapter=new ArrayAdapter<Computador>(this,layout,listagemComp);
        listViewCom.setAdapter(adapter);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_listar_produtos);
        btnfiltrar=(Button)findViewById(R.id.idbtnFiltrar);
        final ConnectionFactory connectionFactory= new ConnectionFactory(this);
        listViewCom=(ListView)findViewById(R.id.idlistViewProd);
        lista();
        //connectionFactory.close();

        btnfiltrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent= new Intent(ControllerListarProdutos.this,ControllerFiltrarDados.class);
                startActivity(intent);
            }
        });
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_listar_produtos, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.idMenuControllerListaProd) {
            Intent intent= new Intent(ControllerListarProdutos.this,Controllerproduto.class);
            startActivity(intent);

            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
