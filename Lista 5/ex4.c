#include <stdio.h>

int main(){
    int N;
    int M;

    printf("Qtd. de linhas: ");
    scanf("%d", &N);

    printf("Qtd. de colunas: ");
    scanf("%d", &M);

    int controle = 1;

    int matriz[N][M];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            matriz[i][j] = controle;
            controle++;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}