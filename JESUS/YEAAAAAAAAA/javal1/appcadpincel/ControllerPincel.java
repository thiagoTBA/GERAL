package com.example.rilmar.appcadpincel;

import android.content.Intent;
import android.sax.StartElementListener;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

import java.util.List;

import dao.PincelDao;
import model.bean.Pincel;
import model.connection.ConnectionFactory;

public class ControllerPincel extends AppCompatActivity {
    private EditText txtdesc;
    private EditText txtcor;
    private EditText txtmarca;
    private EditText txtvalor;
    private Button btnsalvar;
    private ListView listView;

    private void setPincel(Pincel pincel){
        //txtnome.setText(cliente.getClinome());
        txtdesc.setText(pincel.getPincDesc());
        txtcor.setText(pincel.getPincCor());
        txtmarca.setText(pincel.getPincMarca());
        txtvalor.setText(String.valueOf(pincel.getPincValor()));
    }

    private ArrayAdapter<Pincel>adapter;
    private int layout=android.R.layout.simple_list_item_1;

    private void listar(){
        PincelDao pdao= new PincelDao(this);
        List<Pincel> listagem=pdao.listaPincel();
        adapter=new ArrayAdapter<Pincel>(this,layout,listagem);
        listView.setAdapter(adapter);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_pincel);
        txtdesc=(EditText)findViewById(R.id.idtxtdesc);
        txtcor=(EditText)findViewById(R.id.idtxtcor);
        txtmarca=(EditText)findViewById(R.id.idtxtmarca);
        txtvalor=(EditText)findViewById(R.id.idtxtvalor);
        btnsalvar=(Button)findViewById(R.id.idbtnsalvar);
        final ConnectionFactory connectionFactory= new ConnectionFactory(this);
        final PincelDao pincelDao= new PincelDao(this);

        final Pincel pincelAlterar=(Pincel)getIntent().getSerializableExtra("pincel");
        if(pincelAlterar!=null){
            setPincel(pincelAlterar);
        }


        btnsalvar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(pincelAlterar==null) {
                    Pincel p = new Pincel();
                    p.setPincDesc(txtdesc.getText().toString());
                    p.setPincMarca(txtmarca.getText().toString());
                    p.setPincCor(txtcor.getText().toString());
                    p.setPincValor(Double.valueOf(txtvalor.getText().toString()));
                    pincelDao.salvarPincel(p);
                    listView = (ListView) findViewById(R.id.idlistapincel);
                    listar();
                }else{
                    pincelAlterar.setPincDesc(txtdesc.getText().toString());
                    pincelAlterar.setPincCor(txtcor.getText().toString());
                    pincelAlterar.setPincMarca(txtmarca.getText().toString());
                    pincelAlterar.setPincValor(Double.parseDouble(txtvalor.getText().toString()));
                    pincelDao.alterarPincel(pincelAlterar);
                    finish();

                }
            }
        });

    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_pincel, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.idMenuCadPincel) {
            Intent intent= new Intent(ControllerPincel.this,ControllerListarPincel.class);
            startActivity(intent);
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
