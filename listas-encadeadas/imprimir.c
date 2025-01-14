#include <stdio.h>
#include <stdlib.h>

// 100

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void imprime(celula *le){
    int terminei = 0;
    do{
        if(le->prox){
            printf("%d -> ", le->prox->dado);
        }else{
            printf("NULL\n");
            terminei = 1;
        }
        le = le->prox;
    } while(!terminei);
}

void imprime_rec(celula *le){
    if (le->prox){
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }else{
        printf("NULL\n");
    }
}

// int main(){
//     // celula *dado2 = malloc(sizeof(celula));
//     // dado2->dado = 10;
//     // dado2->prox = NULL;
//     // celula *dado1 = malloc(sizeof(celula));
//     // dado1->dado = 7;
//     // dado1->prox = dado2;
//     celula *le = malloc(sizeof(celula));
//     le->prox = NULL;
//     imprime_rec(le);
//     printf("\n");
//     imprime(le);
// }