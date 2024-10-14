#include <stdio.h>

int main() {
    int M, N;

    scanf("%d %d", &M, &N);

    int A[M], B[N], C[M + N];

    for (int i = 0; i < M; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < M; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < N; i++) {
        C[M + i] = B[i];
    }

    for (int i = 0; i < M; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    for (int i = 0; i < M + N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
