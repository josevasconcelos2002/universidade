int minInd (int v[], int n){
    int ind = 0;
    int i = 0;
    for(i; i<n ;i++){
        if(v[ind]>v[i]) ind = i;
    }
    return ind;
}