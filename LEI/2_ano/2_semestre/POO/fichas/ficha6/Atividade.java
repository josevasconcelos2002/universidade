package ficha6;

import java.time.LocalDate;


public abstract class Atividade {
    private String codigo;
    private String descriçao;
    private LocalDate data;
    private int duraçao; // em minutos

    public Atividade(){
        this.codigo = " ";
        this.descriçao = " ";
        this.duraçao = 0;
        this.data = LocalDate.now();
    }

    public Atividade(String codigo, String descriçao, LocalDate data, int duraçao){
        this.codigo = codigo;
        this.descriçao = descriçao;
        this.data = data;
        this.duraçao = duraçao;
    }

    void setCodigo(String s){
        this.codigo = s;
    }

    String getCodigo(){
        return this.codigo;
    }

    void setDescriçao(String s){
        this.descriçao = s;
    }

    String getDescriçao(){
        return this.descriçao;
    }

    void setData(LocalDate d){
        this.data = d;
    }

    LocalDate getData(){
        return this.data;
    }

    void setDuraçao(int duraçao){
        this.duraçao = duraçao;
    }

    int getDuraçao(){
        return this.duraçao;
    }

    public abstract double calculaCalorias();

    public abstract Object clone();

    @Override
    public boolean equals(Object o){
        boolean r = true;
        Atividade a = (Atividade)o;
        if(a!=null){
            if(this.getCodigo() != a.getCodigo()) r = false;
            if(this.getDescriçao() != a.getDescriçao()) r = false;
            if(this.getData() != a.getData()) r = false; // é assim?
            if(this.getDuraçao() != a.getDuraçao()) r = false;
        }
        return r;
    }
}