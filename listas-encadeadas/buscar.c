#include <stdio.h>
#include <stdlib.h>

// 100

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

// void imprime(celula *le){
//     int terminei = 0;
//     do{
//         if(le->prox){
//             printf("%d %p -> ", le->prox->dado, le->prox);
//         }else{
//             printf("NULL\n");
//             terminei = 1;
//         }
//         le = le->prox;
//     } while(!terminei);
// }


// procura pela primeira ocorrência do elemento x na lista encadeada e 
// devolve um ponteiro para a célula que o contém
celula *busca (celula *le, int x){
   celula *res = malloc(sizeof(celula));
   res = NULL;
   while (le->prox)
   {
      if(le->prox->dado == x){
         res = le;
         break;
      }
      le = le->prox;
   }
   return res;
}

celula *busca_rec (celula *le, int x){
   celula *res = malloc(sizeof(celula));
   res = NULL;
   if(le->prox){
      if(le->prox->dado == x){
         return le;
      } else{
         res = busca_rec(le->prox, x);
      }
   }
   return res;
}

// int main(){
//     celula *dado2 = malloc(sizeof(celula));
//     dado2->dado = 7;
//     dado2->prox = NULL;
//     celula *dado1 = malloc(sizeof(celula));
//     dado1->dado = 7;
//     dado1->prox = dado2;
//     celula *le = malloc(sizeof(celula));
//     le->prox = dado1;
//     imprime(le);
//     printf("--------------------------------\n");
//     celula *res = busca(le, 7);
//     printf("%p\n", res);
//     printf("--------------------------------\n");
//     res = busca_rec(le, 7);
//     printf("%p\n", res);
//     //imprime();
// }