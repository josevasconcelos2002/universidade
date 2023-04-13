int conta(int v[], int N, int elemento){
    int count = 0;
    for(int i = 0; i<N ; i++){
        if(v[i] == elemento) count++;
    }
    return count;
}


int maisFreq(int v[], int N){
    int max = 0;
    int indice_max = 0;
    for(int i = 0; i<N ; i++){
        if(conta(v,N,v[i])>conta(v,N,v[indice_max])){
            max = v[i];
            indice_max = i;
        }
    }
    return max;
}