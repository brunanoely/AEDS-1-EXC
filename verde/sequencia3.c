#include <stdio.h>

float somatorio (int n) {
    float soma = 0.0, aux = 0.0;

    for (int fat = 2; fat <= n; fat++) {
        aux += 1.0/fat * (fat - 1);
    }
    soma = 1.0 + 1.0/1.0 + aux;
    return soma;
}

int main() {
    
    int n;
    scanf("%d", &n);
    printf("%.2f", somatorio(n));
    return 0;
}