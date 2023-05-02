package ficha6;

import java.time.LocalDate;

public class Utilizador {
    private String email;
    private String password;
    private String nome;
    private String genero;
    private int altura; // em cm ?
    private double peso; // em kg
    private LocalDate birthDate;
    private LocalDate registo;
    private String desportoFavorito;

    public Utilizador(){
        this.email = " ";
        this.password = " ";
        this.nome = " ";
        this.genero = " ";
        this.altura = 0;
        this.peso = 0.0;
        this.birthDate = LocalDate.now();
        this.registo = LocalDate.now();
        this.desportoFavorito = " ";
    }

    public Utilizador(String email, String password, String nome, String genero, int altura, double peso, LocalDate birthDate, LocalDate registo, String desportoFavorito){
        this.email = email;
        this.password = password;
        this.nome = nome;
        this.genero = genero;
        this.altura = altura;
        this.peso = peso;
        this.birthDate = birthDate;
        this.registo = registo;
        this.desportoFavorito = desportoFavorito;
    }

    public String getEmail(){
        return this.email;
    }

    public void setEmail(String email){
        this.email = email;
    }

    public String getPassword(){
        return this.password;
    }

    public void setPassword(String password){
        this.password = password;
    }

    public String getNome(){
        return this.nome;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public String getGenero(){
        return this.genero;
    }

    public void setGenero(String genero){
        this.genero = genero;
    }

    public int getAltura(){
        return this.altura;
    }

    public void setAltura(int altura){
        this.altura = altura;
    }

    public double getPeso(){
        return this.peso;
    }

    public void setPeso(double peso){
        this.peso = peso;
    }

    public LocalDate getBithDate(){
        return this.birthDate;
    }

    public void setBirthDate(LocalDate birthDate){
        this.birthDate = birthDate;
    }

    public String getRegisto(){
        return this.email;
    }

    public void setEmail(String email){
        this.email = email;
    }

    public String getEmail(){
        return this.email;
    }

    public void setEmail(String email){
        this.email = email;
    }

    public String getEmail(){
        return this.email;
    }

    public void setEmail(String email){
        this.email = email;
    }
}
