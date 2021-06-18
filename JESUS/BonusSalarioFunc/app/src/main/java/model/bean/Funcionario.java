package model.bean;

import java.io.Serializable;

/**
 * Created by Rilmar on 03/12/2015.
 */
public class Funcionario implements Serializable {
    private Integer funcod;
    private String funnome;
    private Integer funcpf;
    private String funfone;
    private double funsalario;
    private double funbonus;
    private double funSalFinal;

    public String toString() {

        return "NOME:" +funnome+" \n Salário:  "+funsalario+" \n Bônus: "+funbonus+"  \n Salário Bruto: "+funSalFinal+"\n--------------------";
    }

    public Integer getFuncod() {
        return funcod;
    }

    public void setFuncod(Integer funcod) {
        this.funcod = funcod;
    }

    public String getFunnome() {
        return funnome;
    }

    public void setFunnome(String funnome) {
        this.funnome = funnome;
    }

    public Integer getFuncpf() {
        return funcpf;
    }

    public void setFuncpf(Integer funcpf) {
        this.funcpf = funcpf;
    }

    public String getFunfone() {
        return funfone;
    }

    public void setFunfone(String funfone) {
        this.funfone = funfone;
    }

    public double getFunsalario() {
        return funsalario;
    }

    public void setFunsalario(double funsalario) {
        this.funsalario = funsalario;
    }

    public double getFunbonus() {
        return funbonus;
    }

    public void setFunbonus(double funbonus) {
        this.funbonus = funbonus;
    }

    public double getFunSalFinal() {
        return funSalFinal;
    }

    public void setFunSalFinal(double funSalFinal) {
        this.funSalFinal = funSalFinal;
    }
}
