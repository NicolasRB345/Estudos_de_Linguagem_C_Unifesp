// coding: utf-8

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    int a, b, soma;

    printf("Digite o número A: ");
    scanf("%d", &a);
    printf("\nDigite o numero B: ");
    scanf("%d", &b);
    
    soma = a + b;

    printf("A soma de A e B e: %d", soma);

    return 0;
}