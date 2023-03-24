int crescente(int a[], int i, int j){
    int resultado = 1;
    for(i; i<j ; i++){
        if(a[i]<=a[i+1]) resultado = resultado && 1;
        else resultado = 0;
    }
    return resultado;
}