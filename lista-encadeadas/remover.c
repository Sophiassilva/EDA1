#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

// void insere_inicio (celula *le, int x){
//     celula *a = malloc(sizeof(celula));
//     a->dado = x;
//     a->prox = le->prox;
//     le->prox = a;
// }

/* 
Uma função que remove o elemento imediatamente seguinte do ponteiro p
Sua função deve ser capaz de lidar com o(s) caso(s) em que não seja possível remover o elemento seguinte a p
*/
void remove_depois (celula *p) {

}

// Uma função que remove a primeira ocorrência de x da lista encadeada
void remove_elemento (celula *le, int x){

}

// Uma função que remove todas as ocorrências de x da lista encadeada
void remove_todos_elementos (celula *le, int x) {

}

// void imprimir(celula *le) {
//     celula *a;
//     int i= 0;
//     for (a = le->prox; a != NULL; a = a->prox) { // ignora a cabeça
//         printf("--- CELULA %d ---\nDado: %d\nProx: %p\n", i, a->dado, a->prox);
//         i++;
//     }
// }

// int main(){
//     celula *dado2 = malloc(sizeof(celula));
//     dado2->dado = 10;
//     dado2->prox = NULL;
//     celula *dado1 = malloc(sizeof(celula));
//     dado1->dado = 7;
//     dado1->prox = dado2;
//     celula *le = malloc(sizeof(celula));
//     le->prox = dado1;
//     insere_inicio(le, 7);
//     insere_inicio(le, 5);
//     insere_inicio(le, 1);
//     imprimir(le);
//     printf("-------------REMOVE ELEMENTO---------------\n");
//     remove_elemento(le, 1);
//     imprimir(le);
//     printf("-------------REMOVE TODOS---------------\n");
//     remove_elemento(le, 7);
//     imprimir(le);
// }