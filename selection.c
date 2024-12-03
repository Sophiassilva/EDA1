#include <stdio.h>

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void selection(int v[], int l, int r){
    int m;
    int menorvalor;
    int valor;

    for (int i = l; i < r; i++){
        m = i;
        for (int j = i + 1; j <= r; j++){ 
            if(v[j] < v[m]){
                menorvalor = j;
            }
        }

        int menor = v[menorvalor];
        while (menorvalor > i){
            v[menorvalor] = v[menorvalor - 1];
            menorvalor--;
        }
        v[i] = menor;
    }
}



int main(){
    int v[5] = {2, 1, 4, 8, 3};
    selection(v, 0, 4);
    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
}