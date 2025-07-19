// estimativas de integrais com somatórios.

#include <stdio.h>
#include <math.h>

double logaritimo_de_euler(double x){
    double x_quadrado;
    x_quadrado = x * x;

    return exp(x_quadrado);
}

double integral (double a, double b, int n){
    double h, xi, resultado, funcao;
    int i;

    i = 0;
    h = (b - a)/n;
    xi = a + i * h;

    for (int i = 0; i <= n - 1; i++){
        resultado += funcao * h;
        funcao = logaritimo_de_euler(xi);
    }

    return resultado;
}

int main(void){
    double a_main, b_main, result_integral;
    int n_main;

    printf("Digite o valor do limite de integracaoo a: ");
    scanf("%lf", &a_main);

    printf("Digite o valor do limite de integracaoo b: ");
    scanf("%lf", &b_main);

    printf("Digite o numero de subdivisoes n: ");
    scanf("%d", &n_main);

    result_integral = integral(a_main, b_main, n_main);

    printf("O resultado da integral e: %.4 lf", result_integral);

    return 0;
}

