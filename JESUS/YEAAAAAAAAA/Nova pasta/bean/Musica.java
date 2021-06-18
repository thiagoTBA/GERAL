package model.bean;

/**
 * Created by DiegoArllen on 25/11/2015.
 */
public class Musica {

    private Integer muscod;
    private String musnome;
    private String muscomp;
    private Integer musserie;
    private String muscantor;
    private String musgenero;
    private String musdesc;

    public Integer getMuscod() {
        return muscod;
    }

    public void setMuscod(Integer muscod) {
        this.muscod = muscod;
    }

    public String getMusnome() {
        return musnome;
    }

    public void setMusnome(String musnome) {
        this.musnome = musnome;
    }

    public String getMuscomp() {
        return muscomp;
    }

    public void setMuscomp(String muscomp) {
        this.muscomp = muscomp;
    }

    public Integer getMusserie() {
        return musserie;
    }

    public void setMusserie(Integer musserie) {
        this.musserie = musserie;
    }

    public String getMuscantor() {
        return muscantor;
    }

    public void setMuscantor(String muscantor) {
        this.muscantor = muscantor;
    }

    public String getMusgenero() {
        return musgenero;
    }

    public void setMusgenero(String musgenero) {
        this.musgenero = musgenero;
    }

    public String getMusdesc() {
        return musdesc;
    }

    public void setMusdesc(String musdesc) {
        this.musdesc = musdesc;
    }

    @Override
    public String toString() { return musnome; }
    }

