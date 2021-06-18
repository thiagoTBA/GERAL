package model.bean;

import java.io.Serializable;

/**
 * Created by Rilmar on 26/11/2015.
 */
public class Pincel implements Serializable{

    private Integer pincCod;
    private String pincCor;
    private String pincMarca;
    private double pincValor;
    private String pincDesc;

    @Override
    public String toString() {
        return pincDesc;
    }

    public String getPincDesc() {
        return pincDesc;
    }

    public void setPincDesc(String pincDesc) {
        this.pincDesc = pincDesc;
    }

    public Integer getPincCod() {
        return pincCod;
    }

    public void setPincCod(Integer pincCod) {
        this.pincCod = pincCod;
    }

    public String getPincCor() {
        return pincCor;
    }

    public void setPincCor(String pincCor) {
        this.pincCor = pincCor;
    }

    public String getPincMarca() {
        return pincMarca;
    }

    public void setPincMarca(String pincMarca) {
        this.pincMarca = pincMarca;
    }

    public double getPincValor() {
        return pincValor;
    }

    public void setPincValor(double pincValor) {
        this.pincValor = pincValor;
    }
}
