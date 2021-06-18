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
import model.connection.ConnectionFactory;

public class Controllerproduto extends AppCompatActivity {
    private EditText txtdesc;
    private EditText txthd;
    private EditText txtmemoria;
    private EditText txtmodelo;
    private EditText txtmarca;
    private Button btnsalvar;
    private ListView listViewCom;

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
        setContentView(R.layout.activity_produto);
        txtdesc=(EditText)findViewById(R.id.idpronome);
        txthd=(EditText)findViewById(R.id.idprohd);
        txtmemoria=(EditText)findViewById(R.id.idpromemoria);
        txtmarca=(EditText)findViewById(R.id.idpromarca);
        txtmodelo=(EditText)findViewById(R.id.idpromodelo);
        btnsalvar=(Button)findViewById(R.id.btnsalvarComp);
        final ConnectionFactory connectionFactory= new ConnectionFactory(this);
        final ComputadorDao computadorDao= new ComputadorDao(this);

        btnsalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Computador c= new Computador();
                c.setCompDesc(txtdesc.getText().toString());
                c.setCompHd(Integer.parseInt(txthd.getText().toString()));
                c.setCompMemoria(Integer.parseInt(txtmemoria.getText().toString()));
                c.setCompModelo(txtmodelo.getText().toString());
                c.setCompMarca(txtmarca.getText().toString());
                computadorDao.salvarComputaador(c);

                listViewCom=(ListView)findViewById(R.id.idListViewComp);
                lista();
            }
        });

    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_produto, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.idMenuControlleProduto) {
            Intent intent= new Intent(Controllerproduto.this,ControllerListarProdutos.class);
            startActivity(intent);
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
