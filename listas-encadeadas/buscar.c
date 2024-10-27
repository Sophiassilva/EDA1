#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

// procura pela primeira ocorrência do elemento x na lista encadeada e 
// devolve um ponteiro para a célula que o contém
celula *busca (celula *le, int x);

celula *busca_rec (celula *le, int x);