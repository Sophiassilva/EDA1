#include <stdio.h>

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}


void insertionO(int v[], int l, int r){
    int menor, m;
    for (int i = l + 1; i <= r; i++)
    {
        m = i;
        menor = v[i];
        for (int j = i; j > l && menor < v[j - 1]; j--)
        {
            v[j] = v[j - 1];
            m = j - 1;
        }
        if (m != i){
            v[m] = menor;
        }
    }
}

void shell(int v[], int l, int r){
    int h = 1;
    int parte = r / 3;
    while (h < parte){
        h = h * 3 + 1;
    }

    while(h > 1){
        for (int i = h; i <= r; i++){
            for (int j = i; ((j-h) > (l+h)) && v[j] < v[j-h]; j-= h){
                swap(&v[j], &v[j - h]);
            }
            h = h / 3;
        }
    }
    insertionO(v, l, r);
}




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
    int v[8] = {-4, -1, 4, 0, 20, 12, 7, 2, };
    insertion(v, 0, 7);
    for (int i = 0; i < 8; i++){
        printf("%d ", v[i]);
    }
}
