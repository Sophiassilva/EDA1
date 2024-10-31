#include <stdio.h>
#include <string.h>

char *trocaXPorY(char str[], int i){
    i++;
    if(str[i] != '\0'){
        if(str[i] == 'x'){
            str[i] = 'y';
        }
        trocaXPorY(str, i);
    }
    return str;
}

int main(){
    char str1[80], *res;
    scanf("%s", str1);
    res = trocaXPorY(str1, -1);
    printf("%s", res);
}