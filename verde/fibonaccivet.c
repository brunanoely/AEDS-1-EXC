#include <stdio.h>

int main() {
    int n, t;

    unsigned int vet[61];
    vet[0] = 0;
    vet[1] = 1;

    for (int i = 2; i < 61; i++) {
        vet[i] = vet[i - 1] + vet[i - 2];
    }

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("Fib(%d) = %u\n", n, vet[n]);
    }

    return 0;
}
