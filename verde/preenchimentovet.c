#include <stdio.h>

int main() {

    int valor;
    int N[10] = {0};

    scanf("%d", &valor);
    N[0] = valor;

    for (int i = 1; i < 10; i++) {
            N[i] = N[i -1] * 2;
    }

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}