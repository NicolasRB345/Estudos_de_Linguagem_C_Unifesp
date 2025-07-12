#include <stdio.h>

int main(void){

    double vetor[100];
    double calc;

    for (int i = 0; i < 100; i++){
        if ((i == 1) | (i ==2) | (i==0)){
            vetor[i] = i;
        }

        else{
            calc = (vetor[i - 2]) + (vetor[i - 1]);
            vetor[i] = calc;
        }
    }

    printf("\nOs 100 primeiros numeros da sequencia de Fibonnaci sao: ");

    for(int i = 0; i < 100; i++){
        printf("%lf", vetor[i]);
        printf("\n");
    }


    return 0;
}