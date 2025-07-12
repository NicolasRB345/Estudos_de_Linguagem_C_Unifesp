/*Triângulo de Pascal Parcial*/

#include <stdio.h>

int main(void)
{
    const int N = 5;
    int mat_triangular[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((j == 0) | (j == i))
            {
                mat_triangular[i][j] = 1;
            }
            
            else if ((0 < j) && (j < i))
            {
                mat_triangular[i][j] = (mat_triangular[i-1][j-1] + mat_triangular[i-1][j]);
            }

            else
            {
                mat_triangular[i][j] = 0;
            }
        }
    }

    printf("Matriz Triangular gerada: ");
    printf("\n");
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", mat_triangular[i][j]);
        }
        printf("\n");
    }

    return 0;
}