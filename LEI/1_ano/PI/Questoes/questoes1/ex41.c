void addTo (int N, int M, int a [N][M], int b[N][M]){
    int i = 0;
    int j = 0;
    for(i; i<N ;i++){
        for(j; j<M ;j++){
            a[i][j] += b[i][j];
        }
    }
}