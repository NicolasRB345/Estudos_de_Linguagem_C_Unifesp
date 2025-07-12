/*Desenvolva um algoritimo que calcule o quadrado de um número informado pelo usuário*/
/*No exercicio nós sabemos que podemos usar n * n, mas utilizamos a função pow() para treinar*/

#include <stdio.h>
#include <math.h>

int main()
{
    float n, square;

    printf("Digite um numero: ");
    scanf("%f", &n);

    square = pow(n, 2);

    printf("O quadrado de %.2f e igual a %.2f", n, square);
    return 0;
}