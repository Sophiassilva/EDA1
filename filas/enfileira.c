#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
  int *dados;
  int N, p, u;
} fila;

int enfileira (fila *f, int x){
    if((f->u + 1 == f->p) || (f->p == 0 && (f->u == f->N))){
        printf("Me barraram </3\n");
        f->dados = realloc(f->dados, 2 * f->N * sizeof(int));
        f->N *= 2;
        return 0;
    } else {
        printf("To entrando\n");
        f->dados[f->u++] = x;
        return 1;
    }
}

int main(){
    fila a;
    a.N = 10;
    a.dados = calloc(a.N, sizeof(int));
    if (a.dados == NULL) {
        printf("Falhou\n");
        return 1;
    } else{
        printf("Ok\n");
    }
    a.p = 0;
    a.u = 0;
    int i = 0;
    while(i < 11){
        int x = enfileira(&a, i);
        if(x == 0){
            x = enfileira(&a, i);
        }
        i++;
    }
    i = 0;
    while(i < 10){
        int x = enfileira(&a, i);
        if(x == 0){
            x = enfileira(&a, i);
        }
        i++;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", a.dados[i]);
    }
    free(a.dados);
}