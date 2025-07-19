#include <stdio.h>

int main(void){
    int  i, n, h, j, y;
    y = 1;

    printf("\n");
    printf("Qual a altura do triangulo?: ");
    scanf("%d", &n);
    j = n;

    printf("\n");
    printf("\n");

    for (i=0; i < n; i++)
    {
        for (h=0; h < (j-1) ;h++){
            printf(" ");
        }

        for (h=0; h < (y); h++){
            printf("*");
            printf(" ");
        }

        for (h=0; h < (j-1) ;h++){
            printf(" ");
        }
        j -= 1;
        y += 1;
        printf("\n");
    }

}