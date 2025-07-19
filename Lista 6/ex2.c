// criar função de potência para não precisar usar funções pré-prontas como pow()

#include <stdio.h>

int potencia(int base, int expoente){
    int result, n;

    result = base;

    for (int i = 1; i < expoente; i++){
        n = result;
        result = n * base;
    }

    return result;
}


int main(void){
    int base_esc, expoente_esc;

    printf("Digite a base: ");
    scanf("%d", &base_esc);

    printf("\n");

    printf("Digite o expoente: ");
    scanf("%d", &expoente_esc);

    printf("\nResultado: %d", potencia(base_esc, expoente_esc));

    return 0;
}