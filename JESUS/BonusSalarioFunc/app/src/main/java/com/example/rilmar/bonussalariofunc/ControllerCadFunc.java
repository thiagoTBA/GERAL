package com.example.rilmar.bonussalariofunc;

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
import android.widget.TextView;

import java.util.List;

import dao.FuncionarioDao;
import model.bean.Funcionario;

public class ControllerCadFunc extends AppCompatActivity {
    private EditText txtnome;
    private EditText txtcpf;
    private EditText txtfone;
    private EditText txtsalario;
    private EditText txtbonus;

    private Button btnsalvar;
    private ListView ListView;


    private ArrayAdapter<Funcionario> adapter;
    private int layout= android.R.layout.simple_list_item_1;

    private void listar(){

        FuncionarioDao funcDao = new FuncionarioDao(this);
        List<Funcionario> list=funcDao.listaFunc();
        adapter=new ArrayAdapter<Funcionario>(this,layout,list);
        ListView.setAdapter(adapter);

    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_cad_func);
        txtnome=(EditText)findViewById(R.id.idtxtnome);
        txtcpf=(EditText)findViewById(R.id.idtxtcpf);
        txtfone=(EditText)findViewById(R.id.idtxtfone);
        txtbonus=(EditText)findViewById(R.id.idtxtBonus);
        txtsalario=(EditText)findViewById(R.id.idtxsalario);
        btnsalvar=(Button)findViewById(R.id.idBtnSalvar);
        final FuncionarioDao funDao= new FuncionarioDao(this);

        btnsalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Funcionario func= new Funcionario();
                func.setFunnome(txtnome.getText().toString());

                func.setFuncpf(Integer.parseInt(txtcpf.getText().toString()));
                func.setFunfone(txtfone.getText().toString());
                func.setFunsalario(Double.valueOf(txtsalario.getText().toString()));
                func.setFunbonus(Double.valueOf(txtbonus.getText().toString()));
                func.setFunSalFinal(funDao.calculartotal(Double.valueOf(txtsalario.getText().toString()),Double.valueOf(txtbonus.getText().toString())));
                //func.setFunSalFinal(funDao.calculartotal(func.getFunsalario(), func.getFunbonus()));
                funDao.salvarFunc(func);
                ListView=(ListView)findViewById(R.id.idListViewCadFunc);
                listar();

            }
        });

    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_cad_func, menu);
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
            Intent intent= new Intent(ControllerCadFunc.this,ControllerListarFuncionario.class);
            startActivity(intent);
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
