
import java.lang.String;
import java.util.Scanner;

public class Exercicios1{

    public static void diaDaSemana(String data){
        String[] resultado = data.split("/");
        int dia = Integer.parseInt(resultado[0]);
        if(dia<=0 || dia>31){
            System.out.println("Dia inválido");
            Exercicios1.main(new String[] {});
        }
        int mes = Integer.parseInt(resultado[1]);
        if(mes<=0 || mes>12){
            System.out.println("Mês inválido");
            Exercicios1.main(new String[] {});
        }
        int ano = Integer.parseInt(resultado[2]);
        if(ano>2100){
            System.out.println("Ano inválido");
            Exercicios1.main(new String[] {});
        }
        int diaDaSemana;
        diaDaSemana = ano-1900 + (ano-1900)/4;
        while(mes!=0){
            switch(mes){
                case 1: diaDaSemana += 31;
                        break;
                case 2: diaDaSemana += 28;
                        break;
                case 3: diaDaSemana += 31;
                        break;
                case 4: diaDaSemana += 30;
                        break;
                case 5: diaDaSemana += 31;
                        break;          
                case 6: diaDaSemana += 30;
                        break;
                case 7: diaDaSemana += 31;
                        break;
                case 8: diaDaSemana += 31;
                        break;
                case 9: diaDaSemana += 30;
                        break;
                case 10: diaDaSemana += 31;
                        break;
                case 11: diaDaSemana += 30;
                        break;
                case 12: diaDaSemana += 31;
                        break;
            }
            mes --;
        }
        int resultadoFinalInt = diaDaSemana % 7;
        String resultadoFinalString = "Domingo";
        switch(resultadoFinalInt){

            case 0: resultadoFinalString = "Domingo";
                        break;
            case 1: resultadoFinalString = "Segunda";
                        break;
            case 2: resultadoFinalString = "Terça";
                        break;
            case 3: resultadoFinalString = "Quarta";
                        break;
            case 4: resultadoFinalString = "Quinta";
                        break;
            case 5: resultadoFinalString = "Sexta";
                        break;          
            case 6: resultadoFinalString = "Sábado";
                        break;

        }
        System.out.println("O dia da semana é: " + resultadoFinalString);

    }
    public static void main(String[] args){
        String data;
        Scanner input = new Scanner(System.in);
        System.out.println("Introduza a data desejada: ");
        data = input.nextLine();
        diaDaSemana(data);
        input.close(); 
    }
    
}