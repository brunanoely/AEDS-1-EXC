#include <stdio.h>

int somaBordas (int M, int N, int matriz[M][N]) {

    int soma = 0;

   for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int main() {

    int M, N;

    scanf("%d %d", &M, &N);

    int matriz[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int result = somaBordas(M, N, matriz);
    printf("%d", result);

    return 0;
}