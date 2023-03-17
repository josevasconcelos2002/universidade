import java.util.Arrays;

public class Telemovel {
    private String marca;
    private String modelo;
    private int dispX;
    private int dispY;
    private int dimensaoM;
    private int espacoFotosAplicacoes;
    private int espacoFotos;
    private int espacoAplicacoes;
    private int totalOcupado; //bytes
    private int fotosGuardadas;
    private int aplicacoesInstaladas;
    private String[] nomeAplicacoes;

    public Telemovel(){
        this.dispX = 0;
        this.dispY = 0;
        this.dimensaoM = 0;
        this.espacoFotosAplicacoes = 0;
        this.espacoFotos = 0;
        this.espacoAplicacoes = 1000;
        this.totalOcupado = 0;
        this.fotosGuardadas = 0;
        this.aplicacoesInstaladas = 0;
    }

    public Telemovel(String marca,String modelo,int dispX,int dispY,int dimensaoM,int espacoFA,int espacoF,int espacoA,int totalO,int fotosG,int aplI,String[] nomeA){
        this.marca = marca;
        this.modelo = modelo;
        this.dispX = dispX;
        this.dispY = dispY;
        this.dimensaoM = dimensaoM;
        this.espacoFotosAplicacoes = espacoFA;
        this.espacoFotos = espacoF;
        this.espacoAplicacoes = espacoA;
        this.totalOcupado = totalO;
        this.fotosGuardadas = fotosG;
        this.aplicacoesInstaladas = aplI;
        this.nomeAplicacoes = nomeA;
    }

    public Telemovel(Telemovel umTlm){
        this.marca = umTlm.getMarca();
        this.modelo = umTlm.getModelo();
        this.dispX = umTlm.getDispX();
        this.dispY = umTlm.getDispY();
        this.dimensaoM = umTlm.getDimensaoM();
        this.espacoFotosAplicacoes = umTlm.getEspacoFA();
        this.espacoFotos = umTlm.getEspacoF();
        this.espacoAplicacoes = umTlm.getEspacoA();
        this.totalOcupado = umTlm.getTotalO();
        this.fotosGuardadas = umTlm.getFotosG();
        this.aplicacoesInstaladas = umTlm.getAplicacoesI();
        this.nomeAplicacoes = umTlm.getNomeA();
    }

    public void setMarca(String marca){
        this.marca = marca;
    }

    public void setModelo(String modelo){
        this.modelo = modelo;
    }

    public void setDispX(int dispX){
        this.dispX = dispX;
    }

    public void setDispY(int dispY){
        this.dispY = dispY;
    }

    public void setDimensaoM(int dimensaoM){
        this.dimensaoM = dimensaoM;
    }

    public void setEspacoFA(int espacoFA){
        this.espacoFotosAplicacoes = espacoFA;
    }

    public void setEspacoF(int espacoF){
        this.espacoFotos = espacoF;
    }

    public void setEspacoA(int espacoA){
        this.espacoAplicacoes = espacoA;
    }

    public void setTotalO(int totalO){
        this.totalOcupado = totalO;
    }

    public void setFotosG(int fotosG){
        this.fotosGuardadas = fotosG;
    }

    public void setAplicacoesI(int aplicacoesI){
        this.aplicacoesInstaladas = aplicacoesI;
    }

    public void setNomeA(String[] nomeA){
        this.nomeAplicacoes = nomeA;
    }

    public String getMarca(){
        return this.marca;
    }

    public String getModelo(){
        return this.modelo;
    }

    public int getDispX(){
        return this.dispX;
    }

    public int getDispY(){
        return this.dispY;
    }

    public int getDimensaoM(){
        return this.dimensaoM;
    }

    public int getEspacoFA(){
        return this.espacoFotosAplicacoes;
    }

    public int getEspacoF(){
        return this.espacoFotos;
    }

    public int getEspacoA(){
        return this.espacoAplicacoes;
    }

    public int getTotalO(){
        return this.totalOcupado;
    }

    public int getFotosG(){
        return this.fotosGuardadas;
    }

    public int getAplicacoesI(){
        return this.aplicacoesInstaladas;
    }

    public String[] getNomeA(){
        return this.nomeAplicacoes;
    }

    public boolean existeEspaco(int numeroBytes){
        boolean resultado = false;
        if(this.espacoFotosAplicacoes - this.totalOcupado >= numeroBytes){
            resultado = true;
        }
        return resultado;
    }

    public void instalaApp(String nome, int tamanho){
        if(this.existeEspaco(tamanho)){
            //System.arraycopy(this.getNomeA(),this.getAplicacoesI(),this.getNomeA(), this.getAplicacoesI()+1, 1);
            //this.getNomeA();
            int nova_capacidade = (int)(this.getNomeA().length +1);
            String[] array = Arrays.copyOf(this.getNomeA(),nova_capacidade);
            array[nova_capacidade] = nome;
            this.setNomeA(array);
            this.setTotalO(this.getTotalO()+tamanho);
            this.setAplicacoesI(this.getAplicacoesI()+1);
        }
    }

    
    public static void main(String args[]){
        Telemovel tele1 = new Telemovel();
        String[] nomeA = {"Facebook","Instagram"};
        tele1.setNomeA(nomeA);
        System.out.println("Aplicações iniciais: " + Arrays.toString(nomeA));
        tele1.instalaApp("Whatsapp", 10);
        System.out.println("Aplicações: " + Arrays.toString(tele1.getNomeA()));
    }
}