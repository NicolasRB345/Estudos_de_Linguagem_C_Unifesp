#include <stdio.h>
#include <math.h>

int main(void){
    double q, F_magnetica, v, B, angulo;

    printf("Qual o valor de [q]?: ");
    scanf("%lf", &q);

    printf("\nQual o valor de [v]?: ");
    scanf("%lf", &v);

    printf("\nQual o valor de [B]?: ");
    scanf("%lf", &B);

    printf("\nQual o valor do angulo?: ");
    scanf("%lf", &angulo);

    F_magnetica = q * v * B * sin(angulo);

    printf("O valor da forca magnetica entre as particulas e: %lf\n", F_magnetica);

    return 0;
}