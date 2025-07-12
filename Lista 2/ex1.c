/*Escreva um algoritimos que exiba se uma pessoa pode dirigir ou ao menos votar*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("\nVoce pode dirigir e, consequentemente, votar.");
    }

    else if (idade >= 16 && idade < 18)
    {
        printf("\nVoce pode apenas votar.");
    }

    else
    {
        printf("\nVoce nao pode dirigir e nem votar ainda.");
    }

    return 0;
}