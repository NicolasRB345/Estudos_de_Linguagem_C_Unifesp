// 100 primeiros números de fibonacci

#include <stdio.h>

int main(void){
    int fibonnaci[100];

    int i, cont = 1;

    fibonnaci[0] = 1;
    fibonnaci[1] = 1;

    for (i = 2; i < 100; i++){
        fibonnaci[i] = fibonnaci[i - 2] + fibonnaci [i -1];
    }

    printf("Primeiros 100 numeros de Fibonnaci:");
    printf("\n");
    printf("\n");

    for (int n = 0; n < 100;n++){
        printf("%d termo | %d", cont, fibonnaci[n]);
        printf("\n");
        cont++;
    }

    return 0;
}