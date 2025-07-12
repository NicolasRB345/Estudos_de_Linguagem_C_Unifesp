/*Escreva um algoritimo que receba 3 notas de um aluno, exiba a média aritimética e exiba uma mensagem*/

#include <stdio.h>

int main(void)
{
    float n1, n2, n3, media;

    printf("Qual a nota 1: ");
    scanf("%f", &n1);

    printf("Qual a nota 2: ");
    scanf("%f", &n2);

    printf("Qual a nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/3;

    printf("A media das 3 notas do aluno foi de: %.2f", media);

    return 0;
}
