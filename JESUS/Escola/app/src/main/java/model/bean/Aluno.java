package model.bean;

/**
 * Created by Wesley Godinho on 23/11/2015.
 */
public class Aluno {
    private Integer alucod;
    private String alunome;
    private String alucpf;
    private String alurg;
    private String alufone;
    private String aluend;

    public Integer getAlucod() {
        return alucod;
    }

    public void setAlucod(Integer alucod) {
        this.alucod = alucod;
    }

    public String getAlunome() {
        return alunome;
    }

    public void setAlunome(String alunome) {
        this.alunome = alunome;
    }

    public String getAlucpf() {
        return alucpf;
    }

    public void setAlucpf(String alucpf) {
        this.alucpf = alucpf;
    }

    public String getAlurg() {
        return alurg;
    }

    public void setAlurg(String alurg) {
        this.alurg = alurg;
    }

    public String getAlufone() {
        return alufone;
    }

    public void setAlufone(String alufone) {
        this.alufone = alufone;
    }

    public String getAluend() {
        return aluend;
    }

    public void setAluend(String aluend) {
        this.aluend = aluend;
    }

    @Override
    public String toString() {
        return
                '\''+ alunome +
                        '\'' + alucpf +
                        '\'' + alurg+
                        '\'' + alufone+
        '\'' + aluend
                ;
    }
}
