import ficha6.Atividade;

package ficha6;

public class Canoagem extends Atividade implements FazMetros {
    private String embarcacao;
    private double velocidadeVento;
    private String orientacaoVento;
    private double distancia;
    private int nVoltas;

    public String getEmbarcacao(){
        return this.embarcacao;
    }

    public void setEmbarcacao(String embarcacao){
        this.embarcacao = embarcacao;
    }

    public double getVelocidadeVento(){
        return this.velocidadeVento;
    }

    public void setVelocidadeVento(double velocidadeVento){
        this.velocidadeVento = velocidadeVento;
    }

    public String getOrientacaoVento(){
        return this.orientacaoVento;
    }

    public void setOrientacaoVento(String orientacaoVento){
        this.orientacaoVento = orientacaoVento;
    }

    public double getDistancia(){
        return this.distancia;
    }

    public void setDistancia(double distancia){
        this.distancia = distancia;
    }

    public int getNVoltas(){
        return this.embarcacao;
    }

    public void setNVoltas(int nVoltas){
        this.nVoltas = nVoltas;
    }

    @Override
    public double calculaPontos(){
        double resultado = 0.0;
        resultado = getPontosPorMetro() * 1.5 * this.getVelocidadeVento();
        return resultado;
    }
}
