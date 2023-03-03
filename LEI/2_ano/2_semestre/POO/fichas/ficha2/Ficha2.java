import java.util.Arrays;
import java.util.Scanner;
import java.lang.String;
import java.time.LocalDate;

public class Ficha2{
    public static void main(String[] args) {

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
    public int[] elementosIguais(int arr1[], int arr2[]){
        int[] resultado = new int[Math.max(arr1.length,arr2.length)];
        for(int i = 0; i<arr1.length ; i++){
            for(int j = 0; j<arr2.length ; j++){
                if(arr1[i] == arr2[j]){
                    resultado[i] = arr1[i];
                }
            }
        }
        return resultado;
    }
}

class Exercicio2{

}