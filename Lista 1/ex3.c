#include <stdio.h>

int main(void){
    char name[30];

    printf("Qual o seu nome?: ");
    scanf("%s", name);
 
    printf("\n");

    printf("Seja bem vindo, %s\n", name);

    return 0;
}