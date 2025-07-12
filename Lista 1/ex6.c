#include <stdio.h>
#include <math.h>

int main(void){
    float p1, p2, p3, p4, arit, geometric, harm;

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

    printf("\nA media aritimetica foi: %f", arit);
    printf("\nA media geometrica foi: %f", geometric);
    printf("\nA media harmonica foi: %f", harm);

    return 0;
}