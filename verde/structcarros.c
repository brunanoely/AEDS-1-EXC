#include <stdio.h>
#include <string.h>

typedef struct Carros {
    char marca[30];
    int ano;
    float preco;
} Carros;

Carros cadastrarCarros() {
    Carros carro;

    fgets(carro.marca, 30, stdin);
    carro.marca[strcspn(carro.marca, "\n")] = '\0';

    scanf("%d", &carro.ano);
    scanf("%f", &carro.preco);

    while (getchar() != '\n'); 

    return carro;
}

void filtrarCarros(Carros *carro, int n, float preco_max) {
    printf("\nCarros com preco menor que %.2f:\n", preco_max);
    for (int i = 0; i < n; i++) {
        if (carro[i].preco < preco_max) {
            printf("Marca: %s, Ano: %d, Preco: %.2f\n", carro[i].marca, carro[i].ano, carro[i].preco);
        }
    }
}

int main() {
    int n;
    float preco_max;

    scanf("%d", &n);

    while (getchar() != '\n'); 

    Carros carro[n];

    for (int i = 0; i < n; i++) {
        carro[i] = cadastrarCarros();
    }

    scanf("%f", &preco_max);

    filtrarCarros(carro, n, preco_max);

    return 0;
}
