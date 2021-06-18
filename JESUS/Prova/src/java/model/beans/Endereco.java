package model.beans;
// Generated 09/11/2015 08:22:27 by Hibernate Tools 4.3.1



/**
 * Endereco generated by hbm2java
 */
public class Endereco  implements java.io.Serializable {


     private Integer edcod;
     private Bairro bairro;
     private Dependentes dependentes;
     private String edrua;
     private Integer ednumero;

    public Endereco() {
    }

	
    public Endereco(Bairro bairro, Dependentes dependentes) {
        this.bairro = bairro;
        this.dependentes = dependentes;
    }
    public Endereco(Bairro bairro, Dependentes dependentes, String edrua, Integer ednumero) {
       this.bairro = bairro;
       this.dependentes = dependentes;
       this.edrua = edrua;
       this.ednumero = ednumero;
    }
   
    public Integer getEdcod() {
        return this.edcod;
    }
    
    public void setEdcod(Integer edcod) {
        this.edcod = edcod;
    }
    public Bairro getBairro() {
        return this.bairro;
    }
    
    public void setBairro(Bairro bairro) {
        this.bairro = bairro;
    }
    public Dependentes getDependentes() {
        return this.dependentes;
    }
    
    public void setDependentes(Dependentes dependentes) {
        this.dependentes = dependentes;
    }
    public String getEdrua() {
        return this.edrua;
    }
    
    public void setEdrua(String edrua) {
        this.edrua = edrua;
    }
    public Integer getEdnumero() {
        return this.ednumero;
    }
    
    public void setEdnumero(Integer ednumero) {
        this.ednumero = ednumero;
    }




}

