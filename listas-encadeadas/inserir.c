#include <stdlib.h>
#include <stdio.h>

// 100

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void insere_inicio (celula *le, int x){
    celula *a = malloc(sizeof(celula));
    a->dado = x;
    a->prox = le->prox;
    le->prox = a;
}

void insere_antes (celula *le, int x, int y){
    // insere dado x antes do elemento com dado y
    celula *a = malloc(sizeof(celula));
    a->dado = x;
    int inseri = 0;
    while(le->prox){
        if (le->prox->dado == y) { // verifica sempre se o dado do prox for igual ao que queremos
            a->prox = le->prox;
            le->prox = a;
            inseri = 1;
            break;
        }
        le = le->prox; 
    }

    if(!inseri) { // se não estiver na lista
        for (le = le; le->prox; le = le->prox);
        a->prox = le->prox;
        le->prox = a;
    }
}

void imprimir(celula *le) {
    celula *a;
    int i= 0;
    for (a = le->prox; a; a = a->prox) { // ignora a cabeça
        printf("--- CELULA %d ---\nDado: %d\nProx: %p\n", i, a->dado, a->prox);
        i++;
    }
}

int main(){
    celula *dado2 = malloc(sizeof(celula));
    dado2->dado = 10;
    dado2->prox = NULL;
    celula *dado1 = malloc(sizeof(celula));
    dado1->dado = 1;
    dado1->prox = dado2;
    celula *le = malloc(sizeof(celula));
    le->prox = dado1;
    insere_antes(le, 8, 1);
    imprimir(le);
}