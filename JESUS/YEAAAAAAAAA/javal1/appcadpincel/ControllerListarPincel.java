package com.example.rilmar.appcadpincel;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import java.util.List;

import dao.PincelDao;
import model.bean.Pincel;
import model.connection.ConnectionFactory;

public class  ControllerListarPincel extends AppCompatActivity {
    private ListView listView;
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
        setContentView(R.layout.activity_listar_pincel);
        //final ConnectionFactory connectionFactory= new ConnectionFactory(this);
       // final PincelDao pincelDao= new PincelDao(this);
        listView = (ListView) findViewById(R.id.idViewListaPincel);
        listar();

        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Pincel pincel= (Pincel)parent.getItemAtPosition(position);
                Intent intent= new Intent(ControllerListarPincel.this,ControllerPincel.class);
                intent.putExtra("pincel",pincel);
                startActivity(intent);
            }
        });
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_listar_pincel, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.idMenuViewListaPincel) {
            Intent intent= new Intent(ControllerListarPincel.this,ControllerPincel.class);
            startActivity(intent);
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
