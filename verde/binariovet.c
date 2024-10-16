#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int vet[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }

    int soma = 0;

    for (int i = 0; i < N; i++) {
        int cont = N - 1 - i;
        soma += vet[i] * pow(2, cont);
    }
    
    printf("%d\n", soma);
    return 0;
}