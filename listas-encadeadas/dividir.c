#include <stdlib.h>
#include <stdio.h>

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

void insere_fim(celula *dest, celula *source){
   celula *aux = source;
   for (; dest->prox; dest=dest->prox);
   dest->prox = aux;
   dest->prox->prox = NULL;
}

void divide_lista (celula *l, celula *l1, celula *l2){
   celula *aux = malloc(sizeof(celula));
   l = l->prox;
   while(l){
      aux = l->prox;
      if(l->dado % 2 == 0){
         insere_fim(l2, l);
      } else {
         insere_fim(l1, l);
      }
      l = aux;
   }
}

// int main(){
//     celula *l1 = malloc(sizeof(celula));
//     l1->prox = NULL;
//     celula *l2 = malloc(sizeof(celula));
//     l2->prox = NULL;
//     celula *dado6 = malloc(sizeof(celula));
//     dado6->dado = 10;
//     dado6->prox = NULL;
//     celula *dado5 = malloc(sizeof(celula));
//     dado5->dado = 7;
//     dado5->prox = dado6;
//     celula *dado4 = malloc(sizeof(celula));
//     dado4->dado = 2;
//     dado4->prox = dado5;
//     celula *dado3 = malloc(sizeof(celula));
//     dado3->dado = -9;
//     dado3->prox = dado4;
//     celula *dado2 = malloc(sizeof(celula));
//     dado2->dado = 4;
//     dado2->prox = dado3;
//     celula *dado1 = malloc(sizeof(celula));
//     dado1->dado = 10;
//     dado1->prox = dado2;
//     celula *le = malloc(sizeof(celula));
//     le->prox = dado1;
//     imprime(le);
//     printf("----------------------------\n");
//     divide_lista(le, l1, l2);
//     imprime(l1);
//     printf("----------------------------\n");
//     imprime(l2);

// }