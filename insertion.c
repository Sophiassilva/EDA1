#include <stdio.h>

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void insertionO();

void insertion(int v[], int l, int r){
    for (int i = l+1; i <= r; i++){
        for (int j = i; j > l; j--){
            if(v[j] < v[j-1]){
                swap(&v[j], &v[j - 1]);
            } else{
                j = l;
            }
        }
    }
}

int main(){
    int v[5] = {2, 1, 4, 8, 3};
    insertion(v, 0, 4);
    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
}