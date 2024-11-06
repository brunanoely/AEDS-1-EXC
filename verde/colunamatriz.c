#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int N, int M, int matriz[N][M]) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int *somaColuna (int N, int M, int matriz[N][M]) {

    int *soma = (int *)malloc(M * sizeof(int));

    for (int i = 0; i < M; i++) {
        soma[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            soma[i] += matriz[j][i];
        }
    }

    return soma;
}


int main() {

    int N, M;

    scanf("%d %d", &N, &M);

    int matriz[N][M];

    preencherMatriz (N, M, matriz);

    int *resultado = somaColuna(N, M, matriz);

    for (int i = 0; i < M; i++) {
        printf("%d ", resultado[i]);
    }

    free(resultado);

    return 0;
}