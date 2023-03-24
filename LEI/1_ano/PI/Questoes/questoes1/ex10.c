char *mystrstr (char s1[], char s2[]){
    char *resultado = NULL;
    int i = 0;
    int j = 0;
    for(i; s1[i] != '\0' ; i++){
        for(j ; s2[j] != '\0' ; j++){
            if(s1[j] == s2[j]) continue;
            else break;
        }
    }
    return resultado;
}