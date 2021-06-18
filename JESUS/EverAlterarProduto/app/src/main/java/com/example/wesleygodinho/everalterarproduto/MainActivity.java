package com.example.wesleygodinho.everalterarproduto;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

import com.example.wesleygodinho.everalterarproduto.R;import java.lang.Override;import java.util.List;

import model.bean.Produto;
import model.connection.ConnectionFactory;
import model.dao.ProdutoDao;

public class MainActivity extends AppCompatActivity {
    private EditText txtpronome;
    private Button txtbtnsalvar;
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
        setContentView(R.layout.activity_main);
        txtpronome=(EditText)findViewById(R.id.pronome);
        txtbtnsalvar=(Button)findViewById(R.id.btnsalvar);

        final ConnectionFactory connectionFactory=new ConnectionFactory(this);
        final ProdutoDao produtoDao= new ProdutoDao(this);
        txtbtnsalvar.setOnClickListener(new View.OnClickListener() {
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
