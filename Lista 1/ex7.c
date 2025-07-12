#include <stdio.h>
#include <math.h>

/*Não entendemos o exercicio 7, acho que o sr quis dizer modifique os "4" numeros ao invez dos "2"*/
int main(void){
    float p1, p2, p3, p4, arit, geometric, harm, sub, mult, div;

    printf("Qual foi a nota da P1: ");
    scanf("%f", &p1);

    printf("\nQual foi a nota da P2: ");
    scanf("%f", &p2);

    printf("\nQual foi a nota da P3: ");
    scanf("%f", &p3);

    printf("\nQual foia nota da P4: ");
    scanf("%f", &p4);

    arit = (p1 + p2 + p3 + p4)/4;
    geometric = pow((p1*p2*p3*p4), 1/4);
    harm = 4/(1/p1 + 1/p2 + 1/p3 + 1/p4);
    sub = p1 - p2 - p3 - p4;
    mult = p1 * p2 * p3 * p4;
    div = p1 / p2 / p3 / p4;

    printf("\nA media aritimetica foi: %.2f", arit);
    printf("\nA media geometrica foi: %.2f", geometric);
    printf("\nA media harmonica foi: %.2f", harm);
    printf("\nA subtracao entre os numeros e: %.2f", sub);
    printf("\nA multiplicacao entre os numeros e: %.2f", mult);
    printf("\nA divisao entre os numeros e: %.5f", div);


    return 0;
}