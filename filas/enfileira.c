#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int enfileira( fila *f, int x ){
    if ( f->u+1==f->p || (f->u== f->N && f->p == 0)){
        f->N*=2;
        f->dados = realloc(f->dados, f->N*sizeof(int));
        return 0;
    } else {
        f->dados[f->u++] = x;
        return 1;
    }
}

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct fila {
//   int *dados;
//   int N, p, u;
// } fila;

// int enfileira( fila *f, int x ){
//     if(f->p == f->u){
//         if(f->u == f->N){
//             f->dados[0] = x;
//             f->u = 0;
//         }
//         else{
//             f->dados[f->p] = x;
//             f->u = 1;
//         }
//     } 
//     if (f->u != f->p && f->u++ < f->p){
//         if(f->u < f->N){
//             f->dados[f->u++] = x;
//         } else if(0 < f->p){
//             f->dados[0] = x;
//             f->u = 1;
//         }else{
//             f->N*=2;
//             f->dados = realloc(f->dados, f->N*sizeof(int));
//             return 0;
//         }
//     }
//     return 1;
// }

// // int main(){
// //     fila unica;
// //     unica.N = 10;
// //     unica.p = unica.u = 0;
// //     enfileira(&unica, 2);
// // }