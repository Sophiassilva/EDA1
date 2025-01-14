#include <stdio.h>

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubble(int v[], int l, int r){
    int precisa = 0;
    while(r > l){
        for (int i = l; i < r; i++){
            if (v[i] > v[i + 1]){
                swap(&v[i], &v[i + 1]);
                precisa = 1;
            }
        }
        r--;
        if(!precisa){
            break;
        }
        precisa = 0;
    }
}

int main(){
    int v[5] = {2, 1, 4, 8, 3};
    bubble(v, 0, 4);
    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
}