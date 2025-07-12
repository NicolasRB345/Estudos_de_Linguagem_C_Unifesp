/*Desenvolva um algoritimo que retorna o dobro de um valor informado pelo usuário*/

#include <stdio.h>

int main()
{
    float i, calc;

    printf("Digite um nUmero: ");
    scanf("%f", &i);

    calc = i * 2;

    printf("O dobro de %.2f e igual a %.2f.", i, calc);
    return 0;
}