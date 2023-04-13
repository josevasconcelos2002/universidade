int maiorPrefixo (char s1 [], char s2 []){
    int i = 0;
    int max = 0;
    int aux = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]){
        max++;
        i++;
    }
    return max;
}