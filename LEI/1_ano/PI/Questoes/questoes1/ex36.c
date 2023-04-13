int comuns (int a[], int na, int b[], int nb){
    int comuns = 0;
    int i = 0;
    int j = 0;
    for(i; i<na ;i++){
        for(j; j<nb ;j++){
            if(b[j] == a[i]) comuns++;
        }
    }
    return comuns;
}