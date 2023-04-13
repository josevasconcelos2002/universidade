#include <string.h>
#include <stdbool.h>

bool is_letra(char s){
    bool resultado = false;
    int ascii = (int)s;
    if(ascii>=65 && ascii <= 90 || ascii>=97 && ascii<=122) resultado = true;
    return resultado;
}


int difConsecutivos(char s[]) {
    int max;
    int aux = 1;
    if (strlen(s) > 0)
        max = 1;
    else
        max = 0;
    int i;
    for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++) {
        if (s[i] == ' ')
            i++;
        if (!is_letra(s[i]) || !is_letra(s[i + 1]))
            i++;
        if (tolower(s[i + 1]) != tolower(s[i])) {
            aux++;
            if (aux > max)
                max = aux;
        } else {
            aux = 1;
        }
    }
    return max;
}