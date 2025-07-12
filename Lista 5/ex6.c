#include <stdio.h>

int main(void){
    int N = 5;
    int M = 5;

    int matriz[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
         matriz[i][j] = (i+j) % 2;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
            printf("\n");
    }
    return 0;
}
