#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

// recebe uma lista encadeada com nó cabeça le e devolve duas listas encadeadas
//com nós cabeça l1 e l2 de forma que todos os alunos na lista l1 possuem média de atividades menor ou igual à media 
// e na lista l2, média de atividades maior que media.
// não alocar nenhuma nova célula na sua função, apenas manipular os ponteiros dos nós de le para que estejam em l1 ou l2.
// considerar que os nós cabeça l1 e l2 já foram alocados antes da chamada para a função relatorioMediaAtividades.

// Como consequência, a lista encabeçada por le não estará intacta após a chamada à sua função.

typedef struct celula {
  char matricula[10];
  double mediaAtividades;
  double mediaProvas;
  struct celula *prox;
} celula;

// void imprimir(celula *le) {
//     celula *a;
//     int i= 0;
//     for (a = le->prox; a; a = a->prox) { // ignora a cabeça
//         printf("--- CELULA %d ---\nDado: %s\nProx: %p\n", i, a->matricula, a->prox);
//         i++;
//     }
// }

void insere_fim(celula *a, celula *b){
  // a é onde vai ser inserido e b é o que será inserido
  celula *aux = b;
  for (; a; a = a->prox) {
    if (a->prox == NULL){
      a->prox = aux;
      a->prox->prox = NULL;
      break;
    }
  }
}

void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double media){
  celula *a = malloc(sizeof(celula));
  le = le->prox;
  while (le)
  {
    a = le->prox;
    if (le->mediaAtividades <= media)
    {
      insere_fim(l1, le);
    }
    else
    {
      insere_fim(l2, le);
    }
    le = a;
  }
}

// int main(){
//     celula *l1 = malloc(sizeof(celula));
//     l1->prox = NULL;
//     celula *l2 = malloc(sizeof(celula));
//     l2->prox = NULL;
//     celula *dado4 = malloc(sizeof(celula));
//     strcpy(dado4->matricula, "190262661");
//     dado4->mediaAtividades = 5.0;
//     dado4->mediaProvas = 7.0;
//     dado4->prox = NULL;
//     celula *dado3 = malloc(sizeof(celula));
//     strcpy(dado3->matricula, "170062465");
//     dado3->mediaAtividades = 9.5;
//     dado3->mediaProvas = 8.5;
//     dado3->prox = dado4;
//     celula *dado2 = malloc(sizeof(celula));
//     strcpy(dado2->matricula, "160016169");
//     dado2->mediaAtividades = 4.0;
//     dado2->mediaProvas = 2.0;
//     dado2->prox = dado3;
//     celula *dado1 = malloc(sizeof(celula));
//     strcpy(dado1->matricula, "140164006");
//     dado1->mediaAtividades = 10.0;
//     dado1->mediaProvas = 8.0;
//     dado1->prox = dado2;
//     celula *le = malloc(sizeof(celula));
//     le->prox = dado1;
//     imprimir(le);
//     printf("----------------------------\n");
//     relatorioMediaAtividades(le, l1, l2, 6.0);
//     imprimir(l1);
//     printf("----------------------------\n");
//     imprimir(l2);

// }

// le -> {140164006, 10.0, 8.0} -> {160016169, 4.0, 2.0} -> {170062465, 9.5, 8.5} -> {190262661, 5.0, 7.0} -> NULL
// relatorioMediaAtividades (le, l1, l2, 6.0)

// l1 -> {160016169, 4.0, 2.0} -> {190262661, 5.0, 7.0} -> NULL
// l2 -> {140164006, 10.0, 8.0} -> {170062465, 9.5, 8.5} -> NULL
