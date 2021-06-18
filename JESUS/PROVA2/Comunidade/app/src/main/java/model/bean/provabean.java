package model.bean;


public class provabean {

    private Integer pcod;
    private String pnome;
    private Integer pcpf;
    private Integer pfone;
    private Integer psalari;
    private Integer pbonus;
    private Integer psalariofinal;

    @Override
    public String toString() {
        return "provabean{" +
                "pnome='" + pnome + psalariofinal + '\'' +
                '}';
    }

    public Integer getPcod() {
        return pcod;
    }

    public void setPcod(Integer pcod) {
        this.pcod = pcod;
    }

    public String getPnome() {
        return pnome;
    }

    public void setPnome(String pnome) {
        this.pnome = pnome;
    }

    public Integer getPcpf() {
        return pcpf;
    }

    public void setPcpf(Integer pcpf) {
        this.pcpf = pcpf;
    }

    public Integer getPfone() {
        return pfone;
    }

    public void setPfone(Integer pfone) {
        this.pfone = pfone;
    }

    public Integer getPsalari() {
        return psalari;
    }

    public void setPsalari(Integer psalari) {
        this.psalari = psalari;
    }

    public Integer getPbonus() {
        return pbonus;
    }

    public void setPbonus(Integer pbonus) {
        this.pbonus = pbonus;
    }

    public Integer getPsalariofinal() {
        return psalariofinal;
    }

    public void setPsalariofinal(Integer psalariofinal) {
        this.psalariofinal = psalariofinal;
    }
}
