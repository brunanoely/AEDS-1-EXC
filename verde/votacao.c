#include <stdio.h>

int main() {

    int cand_1 = 0, cand_2 = 0, cand_3 = 0, cand_4 = 0, nulo = 0, branco = 0;
    int voto, totalvotos = 0;
    float porcentagem;

    do {

        scanf("%d", &voto);

        if (voto == 1) {
            cand_1++;
        } else if (voto == 2) {
            cand_2++;
        } else if (voto == 3) {
            cand_3++;
        } else if (voto == 4) {
            cand_4++;
        } else if (voto == 5) {
            nulo++;
        } else if (voto == 6) {
            branco++;
        }
    } while (voto != 0);

    totalvotos = cand_1 + cand_2 + cand_3 + cand_4 + nulo + branco;
    porcentagem = (float)branco/ totalvotos * 100.00;

    printf("Candidato 1: %d voto(s)\n", cand_1);
    printf("Candidato 2: %d voto(s)\n", cand_2);
    printf("Candidato 3: %d voto(s)\n", cand_3);
    printf("Candidato 4: %d voto(s)\n", cand_4);
    printf("Votos nulos: %d\n", nulo);
    printf("Porcentagem de votos em branco: %.2f", porcentagem);

    return 0;
}