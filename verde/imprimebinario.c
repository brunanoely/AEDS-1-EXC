#include <stdio.h>

void imprimeBinario(int n) {

    if (n == 0) {
        return;
    }
    imprimeBinario(n/2);

    printf("%d", n % 2);
}

int main () {

    int n;
    scanf("%d", &n);

    imprimeBinario(n);

    return 0;
}