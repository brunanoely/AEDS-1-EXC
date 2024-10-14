#include <stdio.h>

int main() {

    int n, cont = 0;
    scanf("%d", &n);

    int vet[2 * n];
    int aux[n + 1];

    for (int i = 1; i <= n; i++) {
        aux[i] = 0;
    }
   
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 2 * n; i++) {
         
            if (aux[vet[i]] == 0) {  
                    aux[vet[i]] = 1;     
                    cont++;              

                 if (cont == n) {
                    printf("%d\n", i + 1);  
                    
                }
        }
    
 }
 printf("0\n");
}