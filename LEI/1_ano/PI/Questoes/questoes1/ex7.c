char *mystrcat(char s1[], char s2[]){
    int i = 0;
    int j = 0;
    while(s1[i] != '\0'){
        i++;
        j = i;
    }
    for(i = 0; s2[i] != '\0' ; i++){
        s1[j] = s2[i];
        j++;
    }
    s1[j] = '\0';
    return s1;
}