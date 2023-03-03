/* *
 * Classe que implementa um Circulo.
 * As coordenadas do ponto são double, assim como o raio.
 *
 * @author Jose Vasconcelos
 */

public class Circulo{
    // variaveis de instancia
    private double x;
    private double y;
    private double raio;

    /* *
     * Construtores da classe Circulo.
     * Por omissao, parametrizado e de copia.
     */

     /* *
     * Construtor por omissao.
     */
    public Circulo(){
        this.x = 0.0;
        this.y = 0.0;
        this.raio = 1.0;
    }

    /* *
     * Construtor paremtrizado.
     * Recebe como argumento o valor de x,y e raio.
     */
    public Circulo(double x, double y, double raio){
        this.x = x;
        this.y = y;
        this.raio = raio;
    }

    /* *
     * Construtor de copia do Circulo.
     * Aceita como argumento o Circulo que se pretende copiar.
     */
    public Circulo(Circulo umCirculo){
        this.x = umCirculo.getX();
        this.y = umCirculo.getY();
        this.raio = umCirculo.getRaio();
    }

    /* *
     * Metodos de instancia.
     */

    /* *
     * Metodo que faz clone do objeto que o chama.
     * 
     * @return objeto clonado.
     */
    public Circulo clone(){
        return new Circulo(this);
    }

    /* *
     * Metodo que verifica se dois x sao iguais.
     * 
     * @param x1 coordenada x do primeiro Circulo.
     * 
     * @param x2 coordenada x do segundo Circulo.
     * 
     * @return valor boolean da comparacao feita.
     */
    public boolean equalsX(double x1, double x2){
        return (x1 == x2);
    }

    /* *
     * Metodo que verifica se dois y sao iguais.
     * 
     * @param y1 coordenada y do primeiro Circulo.
     * 
     * @param y2 coordenada y do segundo Circulo.
     * 
     * @return valor boolean da comparacao feita.
     */
    public boolean equalsY(double y1, double y2){
        return (y1 == y2);
    }

    /* *
     * Metodo que verifica se dois raios sao iguais.
     * 
     * @param r1 raio do primeiro Circulo.
     * 
     * @param r2 raio do segundo Circulo.
     * 
     * @return valor boolean da comparacao feita.
     */
    public boolean equalsRaio(double r1, double r2){
        return (r1 == r2);
    }

    /* *
     * Metodo que verifica se dois circulos sao iguais.
     * 
     * @param c2 Circulo que se pretende comparar.
     * 
     * @return valor boolean da comparacao feita.
     */
    public boolean equals(Circulo c2){
        boolean resultado;
        if(equalsX(this.getX(),c2.getX()) && equalsY(this.getY(),c2.getY()) && equalsRaio(this.getRaio(),c2.getRaio())){ 
            resultado = true;
        }
        else{
            resultado = false;
        }
        return resultado;
    }

    /* *
     * Metodo que converte para String as coordenadas de um Circulo.
     * 
     * @return String resultante.
     */
    public String toString(){
        return ("Cx: " + this.getX() + " Cy: " + this.getY() + " Raio: " + this.getRaio());
    }

    /* *
     * Metodo que devolve o valor da coordenada x.
     * 
     * @return valor da coordenada x.
     */
    public double getX(){
        return this.x;
    }

    /* *
     * Metodo que devolve o valor da coordenada y.
     * 
     * @return valor da coordenada y.
     */
    public double getY(){
        return this.y;
    }

    /* *
     * Metodo que devolve o valor do raio.
     * 
     * @return valor do raio.
     */
    public double getRaio(){
        return this.raio;
    }

    /* *
     * Metodo que altera o valor da coordenada x.
     */
    public void setX(double x){
        this.x = x;
    }

    /* *
     * Metodo que altera o valor da coordenada y.
     */
    public void setY(double y){
        this.y = y;
    }

    /* *
     * Metodo que altera o valor do raio.
     */
    public void setRaio(double raio){
        this.raio = raio;
    }

    /* *
     * Metodo que altera o valor da coordenada x e y.
     * 
     * @param x valor da coordenada x;
     * 
     * @param y valor da coordenada y;
     */
    public void alteraCentro(double x, double y){
        this.x = x;
        this.y = y;
    }

    /* *
     * Metodo que calcula a area de um Circulo.
     */
    public double calculaArea(){
        return Math.PI * this.raio * this.raio;
    }

    /* *
     * Metodo que calcula o perimetro de um Circulo.
     */
    public double calculaPerimetro(){
        return Math.PI *2* this.raio;
    }

    public static void main(String[] args){

        Circulo c1 = new Circulo(1.0,1.0,1.0);
        Circulo c2 = new Circulo(1.0,1.0,1.0);
        System.out.println("C1 e igual a C2? " + Boolean.toString(c1.equals(c2)));
    }
}