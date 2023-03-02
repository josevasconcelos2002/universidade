import java.util.Scanner;
import java.lang.String;

public class Ficha2{
    public static void main(String[] args) {
        int arr[] = new int[5];
        Exercicio1 ex1 = new Exercicio1();
        Scanner input = new Scanner(System.in);
        System.out.println("Introduza os elementos do array: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = Integer.parseInt(input.nextLine());
        }
        input.close();
        System.out.println("O menor elemento do array introduzido e: " + String.valueOf(ex1.minArray(arr)));
    }
}

class Exercicio1{
    public int minArray(int arr[]){
        int min = arr[0];
        for(int i = 0; i<arr.length;i++){
            if(arr[i] < min) min = arr[i];
        }
        return min;
    }
}