/*Conversor de grau celcius com opção do usuário*/

#include <stdio.h>

int main()
{
    float celcius, celcius_convert;
    int esc;

    printf("Digite o grau em Celcius: ");
    scanf("%f", &celcius);
    printf("\n");
    printf("\n");

    printf("Para qual unidade de medida voce quer converter?:");
    printf("\n[0] Fahrenheit");
    printf("\n[1] Kelvin");
    printf("\nEscolha: ");
    scanf("%d", &esc);
    printf("\n");

    if (esc == 0)
    {
        celcius_convert = (((9.00/5.00)*celcius) + 32.00);
        printf("\n%.2f Celcius convertido para Fahrenheit e igual a: %.2f", celcius, celcius_convert);
    }

    else if (esc == 1)
    {
        celcius_convert = celcius + 273.15;
        printf("\n%.2f Celcius convertido para Kelvin e igual a: %.2f", celcius, celcius_convert);
    }

    else
    {
        printf("\nEssa nao e uma escolha valida!");
    }

    return 0;
}