package dao;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;

import java.util.ArrayList;
import java.util.List;

import model.bean.Funcionario;
import model.connection.ConnectionFactory;

/**
 * Created by Rilmar on 03/12/2015.
 */
public class FuncionarioDao {
    private ConnectionFactory connection;
    public FuncionarioDao(Context context){
        connection=new ConnectionFactory(context);
    }


    public void salvarFunc(Funcionario f){
        ContentValues values = new ContentValues();
        values.put("funnome",f.getFunnome());
        values.put("funcpf",f.getFuncpf());
        values.put("funfone",f.getFunfone());
        values.put("funsalario",f.getFunsalario());
        values.put("funbonus",f.getFunbonus());
        //double total=f.getFunsalario()+f.getFunbonus();
        values.put("funsaltotal",f.getFunSalFinal());
        connection.getWritableDatabase().insert("funcionario",null,values);
        connection.close();
    }
    public List<Funcionario> listaFunc(){
        List<Funcionario> listar= new ArrayList<>();
        String sql="select *from funcionario";
        Cursor cursor=connection.getWritableDatabase().rawQuery(sql,null);
        while (cursor.moveToNext()){
            Funcionario func = new Funcionario();
            func.setFuncod(cursor.getInt(0));
            func.setFunnome(cursor.getString(1));
            func.setFuncpf(cursor.getInt(2));
            func.setFunfone(cursor.getString(3));
            func.setFunsalario(cursor.getDouble(4));
            func.setFunbonus(cursor.getDouble(5));
            func.setFunSalFinal(cursor.getDouble(6));
            listar.add(func);
        }
        connection.close();
        return listar;
    }
    public Double calculartotal(Double salario,Double bonus){
        Double total= salario+bonus;
        return total;
    }


}
