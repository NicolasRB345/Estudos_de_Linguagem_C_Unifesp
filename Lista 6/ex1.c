//Perimetro de um quadrado com função

#include <stdio.h>


int perimetro(double lado){
    double perimetro;
    perimetro = lado * 4;

    return perimetro;
}

int main(void){
    double lado_square, result_perimetro;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado_square);

    result_perimetro = perimetro(lado_square);

    printf("\n");

    printf("O perimetro do quadrado de lado %.2lf e: %.2lf", lado_square, result_perimetro);

    return 0;
}