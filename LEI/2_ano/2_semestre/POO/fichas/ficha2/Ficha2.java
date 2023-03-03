import java.util.Arrays;
import java.util.Scanner;
import java.lang.String;
import java.lang.reflect.Array;

public class Ficha2{
    public static void main(String[] args) {
        int arr[] = new int[5];
        int a,b;
        Exercicio1 ex1 = new Exercicio1();
        Scanner input = new Scanner(System.in);
        System.out.println("Introduza os elementos do array: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = Integer.parseInt(input.nextLine());
        }
        //System.out.println("O menor elemento do array introduzido e: " + String.valueOf(ex1.minArray(arr)));
        System.out.println("Introduza os indices:  ");
        a = Integer.parseInt(input.nextLine());
        b = Integer.parseInt(input.nextLine());
        input.close();
        System.out.println("Array original:  " + Arrays.toString(arr));
        System.out.println("Novo array:  " + Arrays.toString(ex1.newArray(arr, a, b)));
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

    public int[] newArray(int arr[], int a, int b){
        int j = 0;
        int[] newArr = new int[b-a+1];
        for(int i = a; i<=b ; i++){
            newArr[j] = arr[i];
            j++;
        }
        return newArr;
        
    }
}