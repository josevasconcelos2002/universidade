import java.util.Arrays;
//import java.util.Scanner;
import java.lang.String;
import java.time.LocalDate;

public class Ficha2{
    public static void main(String[] args) {
        Exercicio2 ex2 = new Exercicio2();
        System.out.println(Arrays.toString(ex2.getDatas()));
        ex2.insereData(LocalDate.now());
        System.out.println(Arrays.toString(ex2.getDatas()));
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
    private LocalDate[] arr;

    public Exercicio2(){
        this.arr = new LocalDate[20];
        for(int i = 0; i<20 ; i++){
            arr[i] = null;
        }
    }

    public LocalDate[] getDatas(){
        return this.arr;
    }

    public void setDatas(LocalDate[] arr){
        this.arr = arr;
    }

    public void insereData(LocalDate data){
        int i = 0;
        while(arr[i] != null){
            i++;
        }
        arr[i] = data;
    }
    /*
    public LocalDate dataMaisProxima(LocalDate data){
        LocalDate resultado;
        int maisProximo = 0;
        for(int i = 0; arr[i] != null; i++){
            if(Math.abs(data.toMill))
        }
        return resultado;
    }
    */

}