#include <stdio.h>

// recebe uma lista encadeada com nó cabeça le e devolve duas listas encadeadas
//com nós cabeça l1 e l2 de forma que todos os alunos na lista l1 possuem média de atividades menor ou igual à media 
// e na lista l2, média de atividades maior que media.
// não alocar nenhuma nova célula na sua função, apenas manipular os ponteiros dos nós de le para que estejam em l1 ou l2.
// considerar que os nós cabeça l1 e l2 já foram alocados antes da chamada para a função relatorioMediaAtividades.

Como consequência, a lista encabeçada por le não estará intacta após a chamada à sua função.

void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double media) {
    celula *a = NULL;
}

typedef struct celula {
  char matricula[10];
  double mediaAtividades;
  double mediaProvas;
  struct celula *prox;
} celula;

// le -> {140164006, 10.0, 8.0} -> {160016169, 4.0, 2.0} -> {170062465, 9.5, 8.5} -> {190262661, 5.0, 7.0} -> NULL
// relatorioMediaAtividades (le, l1, l2, 6.0)

// l1 -> {160016169, 4.0, 2.0} -> {190262661, 5.0, 7.0} -> NULL
// l2 -> {140164006, 10.0, 8.0} -> {170062465, 9.5, 8.5} -> NULL
