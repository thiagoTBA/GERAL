package model.bean;

/**
 * Created by Rilmar on 25/11/2015.
 */
public class Computador {
    Integer compCod;
    Integer compMemoria;
    Integer compHd;
    String compModelo;
    String compMarca;
    String compDesc;

    @Override
    public String toString() {
        return compDesc ;
    }

    public Integer getCompCod() {
        return compCod;
    }

    public void setCompCod(Integer compCod) {
        this.compCod = compCod;
    }

    public Integer getCompMemoria() {
        return compMemoria;
    }

    public void setCompMemoria(Integer compMemoria) {
        this.compMemoria = compMemoria;
    }

    public Integer getCompHd() {
        return compHd;
    }

    public void setCompHd(Integer compHd) {
        this.compHd = compHd;
    }

    public String getCompModelo() {
        return compModelo;
    }

    public void setCompModelo(String compModelo) {
        this.compModelo = compModelo;
    }

    public String getCompMarca() {
        return compMarca;
    }

    public void setCompMarca(String compMarca) {
        this.compMarca = compMarca;
    }

    public String getCompDesc() {
        return compDesc;
    }

    public void setCompDesc(String compDesc) {
        this.compDesc = compDesc;
    }
}
