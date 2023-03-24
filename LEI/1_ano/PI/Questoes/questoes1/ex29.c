int retiraNeg (int v[], int N){
    int resultado = N;
    int i = 0;
    int j = 0;
    int v1[N];
    for(i;i<N;i++){
        if(v[i]>=0){
            v1[j] = v[i];
            j++;
        }
        else{
            resultado--;
        }
    }
    for(i=0;i<N;i++){
        v[i] = v1[i];
    }
    return resultado;
}