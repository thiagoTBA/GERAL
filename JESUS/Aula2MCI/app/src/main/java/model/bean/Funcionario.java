package model.bean;

/**
 * Created by alunoadm on 19/11/2015.
 */
public class Funcionario {

    private Integer funcod;
    private String funnome;
    private String funfone;

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

    public String getFunfone() {
        return funfone;
    }

    public void setFunfone(String funfone) {
        this.funfone = funfone;
    }

    @Override
    public String toString() {
        return   funfone +
                 funnome
                ;
    }
}
