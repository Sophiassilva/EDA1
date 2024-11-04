#include <stdio.h>
#include <string.h>

void imprimeAoContrario(char *str, int t){
    t--;
    if(strlen(str) % 2 == 0){
        if(t >= strlen(str)/2){
            char letra = str[t];
            str[t] = str[strlen(str) -1 - t];
            str[strlen(str)- 1 - t] = letra;
            imprimeAoContrario(str, t);
        }
    } else {
        if(t > strlen(str)/2){
            char letra = str[t];
            str[t] = str[strlen(str) -1 - t];
            str[strlen(str)- 1 - t] = letra;
            imprimeAoContrario(str, t);
        }
    }
}

int main(){
    char str[500];
    scanf("%s", str);
    int t = strlen(str);
    imprimeAoContrario(str, t);
    printf("%s", str);
}