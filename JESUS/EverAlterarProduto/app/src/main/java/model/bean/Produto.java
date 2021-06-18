package model.bean;

/**
 * Created by Wesley Godinho on 30/11/2015.
 */
public class Produto {
    private Integer procod;
    private String pronome;

    public Integer getProcod() {
        return procod;
    }

    public void setProcod(Integer procod) {
        this.procod = procod;
    }

    public String getPronome() {
        return pronome;
    }

    public void setPronome(String pronome) {
        this.pronome = pronome;
    }

    @Override
    public String toString() {
        return "Produto{" +
                "procod=" + procod +
                ", pronome='" + pronome + '\'' +
                '}';
    }
}
