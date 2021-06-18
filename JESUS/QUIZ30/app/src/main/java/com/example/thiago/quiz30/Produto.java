package com.example.thiago.quiz30;

/**
 * Created by THIAGO on 06/12/2015.
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
        return pronome ;

    }
}
