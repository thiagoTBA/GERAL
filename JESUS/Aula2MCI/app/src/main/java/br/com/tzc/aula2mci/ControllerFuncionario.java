package br.com.tzc.aula2mci;

import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Adapter;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

import java.util.List;

import model.bean.Funcionario;
import model.connection.ConnectionFactory;
import model.dao.FuncionarioDao;

public class ControllerFuncionario extends AppCompatActivity {
    private EditText txtnomefun;
    private EditText txtfonefun;
    private Button btnsalvar;
    private ListView listViewfun;

    private ArrayAdapter<Funcionario> adapter;
    private int layout=android.R.layout.simple_list_item_1;

    private void listar(){
        FuncionarioDao funcionarioDao = new FuncionarioDao(this);
        List<Funcionario> lista=funcionarioDao.listarFuncionario();
        adapter= new ArrayAdapter<Funcionario>(this,layout,lista);
        listViewfun.setAdapter(adapter);
    }

    public void onResume(){
        super.onResume();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_controller_cliente);
        txtnomefun=(EditText)findViewById(R.id.txtnomefunc);
        txtfonefun=(EditText)findViewById(R.id.txtfonefunc);
        btnsalvar=(Button)findViewById(R.id.btnsalvar);
        final ConnectionFactory connectionFactory= new ConnectionFactory(this);
        final FuncionarioDao funcionarioDao = new FuncionarioDao(this);
        btnsalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Funcionario func = new Funcionario();
                func.setFunnome(txtnomefun.getText().toString());
                func.setFunfone(txtfonefun.getText().toString());
                funcionarioDao.salvarFunc(func);
                listViewfun=(ListView)findViewById(R.id.ListViewFunc);
                listar();
            }
        });
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_controller_cliente, menu);
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
