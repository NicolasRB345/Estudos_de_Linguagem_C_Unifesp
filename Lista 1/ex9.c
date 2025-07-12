/*Escreva um algoritimos que leia a base e altura de um retângulo e mostre o resultado da área*/

#include <stdio.h>

int main(void)
{
    float base, altura, area;

    printf("Qual e o valor da base: ");
    scanf("%f", &base);

    printf("Qual e o valor da altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("O valor da area do renatgulo e igual a: %.2f", area);

    return 0;
}