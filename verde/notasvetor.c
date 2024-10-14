#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    float vet[N];
    float menor, maior, soma = 0;

    for (int i = 0; i < N; i++) {
        scanf("%f", &vet[i]);
    }   

    menor = maior = vet[0];

    for (int i = 0; i < N; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }
        soma += vet[i];
    }

    float media = soma / N;
    printf("%.1f %.1f %.1f\n", maior, menor, media);

    return 0;
}
