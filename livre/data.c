#include <stdio.h>

// 87

int verificaBissexto(int *ano) {
   //printf("%d\n %d\n %d\n", ano % 4, ano % 100, ano % 400);
    if (*ano % 4 == 0 && (*ano % 100 != 0 || *ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int qtdDias(int *i, int *bissexto){
    if (*i == 4 || *i == 6 || *i == 9 || *i == 11) {
        return 30;
    } else if (*i == 2) {
        return 28+*bissexto;
    } else {
        return 31;
    }
}

void calculaDiaMes(int *dia, int *ano) {

    if ((*dia < 1 || *dia >= 366)) {
        printf("Entradas invalidas!");
    } else {
        int *ptr = ano;

        int bissexto = verificaBissexto(ptr), i = 0;

        while (*dia > 0) {
            i++;
            *dia -= qtdDias(&i, &bissexto);
        }

        *dia += qtdDias(&i, &bissexto);
        printf("%.2d/%.2d/%d", *dia, i, *ptr);
    }
    
}

// int main(){
//     int dia, ano;
//     scanf("%d %d", &dia, &ano);
//     calculaDiaMes(&dia, &ano);
//     // scanf("%d %d", &dia, &ano);
//     // calculaDiaMes(&dia, &ano);
//     // while (scanf("%d", &ano)) {
//     //     printf("O ano %d e: ", ano);
//     //     if (verificaBissexto(ano)==1) {
//     //         printf("BISSEXTO\n");
//     //     } else {
//     //         printf("NAO BISSEXTO\n");  
//     //     }
//     // }

// }