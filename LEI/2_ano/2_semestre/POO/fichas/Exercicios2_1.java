import java.util.Scanner;


import java.lang.String;
//import java.util.Scanner;

public class Exercicios2_1{
    public static  double celsiusParaFarenheit(double graus){
        double resultado;
        resultado = graus*1.8 + 32; 
        return resultado;
    }
    public static void main(String[] args) {
        System.out.println("Introduza a temperatura em graus Celsius: ");
        String tempStr;
        Scanner input = new Scanner(System.in);
        tempStr = input.nextLine();
        double tempDbl;
        tempDbl = Double.parseDouble(tempStr);
        String resultadoStr;
        resultadoStr = String.valueOf(celsiusParaFarenheit(tempDbl));
        System.out.println(tempStr + "graus Celsius = " + resultadoStr + " graus Farenheit" );
        input.close();
    }
}