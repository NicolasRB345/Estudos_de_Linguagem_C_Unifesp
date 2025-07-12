/*Exercicio de ler duas notas fixas e exibir a média*/

#include <stdio.h>

int main()
{
    const float N1 = 5.5;
    const float N2 = 8.0;
    float media;

    media = (N1 + N2)/2;

    printf("Media: %.2f", media);
    
    return 0;
}