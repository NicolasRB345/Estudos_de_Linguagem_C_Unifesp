/*Soma de duas matrizes*/

#include <stdio.h>

int main(void)
{
    const int N = 3;
    int matriz_1[N][N];
    int matriz_2[N][N];
    int matriz_soma[N][N];

    printf("Primeira Matriz:");
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Digite o elemento [%d][%d] da primeira matriz: ", i, j);
            scanf("%d", &matriz_1[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("Segunda Matriz: ");
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Digite o elemento [%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    /*Matriz Soma*/
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz_soma[i][j] = (matriz_1[i][j] + matriz_2[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("Matriz 1 gerada: ");
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matriz_1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("Matriz 2 gerada: ");
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matriz_2[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("Matriz soma gerada: ");
    printf("\n");

    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matriz_soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}