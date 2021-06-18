package com.example.thiago.quiz30;

import android.support.v7.app.ActionBarActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

import java.util.List;

import hitesh.asimplegame.R;


public class MainActivity extends ActionBarActivity {

    private EditText txtpronome;
    private Button btnsalvar;
    private ListView Listap;
    private ArrayAdapter<Produto> adapter;//adaptador para listagem
    private int layout=android.R.layout.simple_list_item_1;//forma da listagem
    private void listar(){
        ProdutoDao produtoDao= new ProdutoDao(this);
        List<Produto> produtoList=produtoDao.listapincel();
        adapter=new ArrayAdapter<Produto>(this,layout,produtoList);
        Listap.setAdapter(adapter);
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(hitesh.asimplegame.R.layout.activity_main);
        txtpronome=(EditText)findViewById(R.id.pronome);
        btnsalvar=(Button)findViewById(R.id.btnsalvar);
        final ConnectionFactory connectionFactory = new ConnectionFactory(this);
        final ProdutoDao produtoDao= new ProdutoDao(this);


        btnsalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Produto produto = new Produto();
                produto.setPronome(txtpronome.getText().toString());
                produtoDao.salvarProduto(produto);
                Listap = (ListView) findViewById(R.id.idlistaproduto);
                listar();


            }
        });






    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(hitesh.asimplegame.R.menu.menu_main, menu);
        return true;
    }





    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();


    return super.onOptionsItemSelected(item);
}
}
