#include <stdio.h>
#include <string.h>

int main() {

    int n, cont = 0;
    char palavra[30];
    char frase[100];

    scanf("%d", &n);
    getchar();

    fgets(palavra, 30, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    for (int i = 0; i < n; i++) {

        fgets(frase, 100, stdin);
        frase[strcspn(frase, "\n")] = '\0';

        char *separacao = strtok(frase, " ");

        while (separacao != NULL) {
            if (strcmp(separacao, palavra) == 0) {
                cont++;
            }
            separacao = strtok(NULL, " ");
        }
    }

    printf("%d\n", cont);

    return 0;
}
