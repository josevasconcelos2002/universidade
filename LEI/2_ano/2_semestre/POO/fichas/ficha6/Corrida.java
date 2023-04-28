package ficha6;

public class Corrida extends Atividade {
    private double distancia;
    // altimetria (?)
    private String percurso;

    public Corrida(){
        super();
        this.distancia = 0.0;
        this.percurso = " ";
    }

    public Corrida(double distancia, String percurso){
        super();
        this.distancia = distancia;
        this.percurso = percurso;
    }

    double getDistancia(){
        return this.distancia;
    }

    void setDistancia(double dist){
        this.distancia = dist;
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

    
}
