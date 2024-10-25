#include <stdio.h>

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