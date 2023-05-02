package ficha6;

//import ficha6.FazMetros;

public class Corrida extends Atividade implements FazMetros{
    private double distancia;
    private double altimetria; //?
    private String percurso;

    public Corrida(){
        super();
        this.distancia = 0.0;
        this.percurso = " ";
        this.altimetria = 0.0;
    }

    public Corrida(double distancia, double altimetria, String percurso){
        super();
        this.distancia = distancia;
        this.altimetria = altimetria;
        this.percurso = percurso;
    }

    double getDistancia(){
        return this.distancia;
    }

    void setDistancia(double dist){
        this.distancia = dist;
    }

    double getAltimetria(){
        return this.altimetria;
    }

    void setAltimetria(double altimetria){
        this.altimetria = altimetria;
    }

    String getPercurso(){
        return this.percurso;
    }

    void setPercurso(String percurso){
        this.percurso = percurso;
    }

    @Override
    public double calculaCalorias(double peso, int idade) {
        double CaloriasCorrida = 0.0;
        CaloriasCorrida = this.getDistancia() * peso * super.getDuraçao() * idade/50;
        return CaloriasCorrida;
        //throw new UnsupportedOperationException("Unimplemented method 'calculaCalorias'");
    }

    @Override
    public double calculaPontos(){
        double resultado = 0.0;
        resultado = this.getDistancia() * getPontosPorMetro();
        return resultado;
    }
}
