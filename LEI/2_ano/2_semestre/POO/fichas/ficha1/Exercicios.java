import java.util.Scanner;


import java.lang.String;

public class Exercicios{
    public static void  main(String[] args){
        Exercicios2 f = new Exercicios2();
        System.out.println("Introduza a temperatura em graus Celsius: ");
        String tempStr;
        Scanner input = new Scanner(System.in);
        tempStr = input.nextLine();
        double tempDbl;
        tempDbl = Double.parseDouble(tempStr);
        String resultadoStr;
        resultadoStr = String.valueOf(f.celsiusParaFarenheit(tempDbl));
        System.out.println(tempStr + "graus Celsius = " + resultadoStr + " graus Farenheit" );
        input.close();
    }
}


class Exercicios2{
    public double celsiusParaFarenheit(double graus){
        double resultado;
        resultado = graus*1.8 + 32; 
        return resultado;
    }

    public int maximoNumeros(int a, int b){
        int resultado;
        if(a>=b) resultado = a;
        else resultado = b;
        return resultado;
    }
}