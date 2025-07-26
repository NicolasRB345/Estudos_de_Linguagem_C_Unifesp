// coding: utf-8

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    int a, b, sum;

    printf("Type the number A: ");
    scanf("%d", &a);
    printf("\nType the number B: ");
    scanf("%d", &b);
    
    sum = a + b;

    printf("The sum between A and B is: %d", sum);

    return 0;
}