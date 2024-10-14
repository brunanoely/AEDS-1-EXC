#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    int maior = vet[0];
    int pos = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i] >= maior) {
            maior = vet[i];
            pos = i;
        }
    }

    printf("%d %d\n", maior, pos);


    return 0;
}