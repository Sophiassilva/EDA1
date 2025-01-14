#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void imprimir(celula *le) {
    celula *a;
    int i= 0;
    for (a = le->prox; a; a = a->prox) { // ignora a cabeça
        printf("--- CELULA %d ---\nDado: %d\nProx: %p\n", i, a->dado, a->prox);
        i++;
    }
}

void insere_antes(celula *dest, celula *source, celula *ref){
    celula *aux = source;
    aux->prox = ref;
    dest = aux;
}

void insere_fim (celula *dest, celula *source){
    celula *aux = source;
    for (; dest->prox; dest = dest->prox);
    dest->prox = aux;
    dest->prox->prox = NULL;
}

void mescla_listas(celula *l1, celula *l2, celula *l3){
    celula *aux = l2;
    for (l1 = l1; l1->prox; l1 = l1->prox){
        for (l2 = aux->prox; l2; l2 = l2->prox)
            if (l1->prox->dado > l2->dado){
                insere_antes(l1, l2, l1->prox);
                break;
            }
            else if (!l2->prox)
            {
                insere_fim(l1, l2);
                break;
            }
    }
    l3 = l1;
}

int main(){
    celula *dado2 = malloc(sizeof(celula));
    dado2->dado = 10;
    dado2->prox = NULL;
    celula *dado1 = malloc(sizeof(celula));
    dado1->dado = 3;
    dado1->prox = dado2;
    celula *le = malloc(sizeof(celula));
    le->prox = dado1;
    celula *d2 = malloc(sizeof(celula));
    d2->dado = 11;
    d2->prox = NULL;
    celula *d1 = malloc(sizeof(celula));
    d1->dado = 2;
    d1->prox = d2;
    celula *a = malloc(sizeof(celula));
    a->prox = d1;
    celula *res = malloc(sizeof(celula));
    res->prox = NULL;
    imprimir(le);
    printf("-------------------------------------------\n");
    imprimir(a);
    printf("-------------------------------------------\n");
    mescla_listas(le, a, res);
    printf("IMPRIMINDO LE (L1): \n");
    imprimir(le);
    printf("-------------------------------------------\n");
    printf("IMPRIMINDO A (L2): \n");
    imprimir(a);
    printf("-------------------------------------------\n");
    printf("IMPRIMINDO RES (L3): \n");
    imprimir(res);
    printf("-------------------------------------------\n");
}

 