/*Peso ideal para homens e mulheres baseado na altura*/

#include <stdio.h>

int main()
{
    float altura,peso_ideal;
    char sexo;

    printf("Qual seu sexo [M] ou [F]: ");
    scanf("%c", &sexo);
    
    printf("\nQual a sua altura em metros: ");
    scanf("%f", &altura);

    printf("\n");

    if (sexo == 'M')
    {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para voce e: %.2f kg", peso_ideal);
    }

    else if ( sexo == 'F')
    {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para voce e: %.2f kg", peso_ideal);
    }

    else
    {
        printf("Insira apenas M ou F");
    }

    return 0;
}