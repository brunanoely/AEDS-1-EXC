#include <stdio.h>

void invertenumero(int n) {

    if (n < 10) {
        printf("%d", n);
        return;
    }
    printf("%d", n % 10);
    return invertenumero(n/10);
}

int main () {

    int n;
    scanf("%d", &n);
    invertenumero(n);

    return 0;
}