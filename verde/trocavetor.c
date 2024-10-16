#include <stdio.h>

int main() {

    int N[20], temp[20];

    for (int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
        temp[i] = N[i];
    }

    for (int i = 0; i < 20; i++) {
            N[i] = temp[19 - i];
            if (N[i] == 11) {
                N[i] = temp[i];
            }
        
    }

    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}