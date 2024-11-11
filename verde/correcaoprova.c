#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadastrarGabarito(int n_questoes, char gabarito[]) {

    for (int i = 0; i < n_questoes; i++) {
        scanf("%c", &gabarito[i]);

    }
}

void cadastrarRespostas(int n_alunos, int n_questoes, char respostas[][n_questoes]) {

    for (int i = 0; i < n_alunos; i++) {
        for (int j = 0; j < n_questoes; j++) {
            scanf("%c", &respostas[i][j]);
        }
    }
}

int* calcularPontuacao(int n_alunos, int n_questoes, char respostas[][n_questoes], char gabarito[]) {

    int *cont_pontos = (int *)malloc(n_alunos * sizeof(int *));

    for (int i = 0; i < n_alunos; i++) {
        cont_pontos[i] = 0;
        for (int j = 0; j < n_questoes; j++) {
            if (respostas[i][j] == gabarito[j]) {
                cont_pontos[i]++; 
            }
        }
    }
    return cont_pontos;
}

int main() {

    int N, M;

    scanf("%d %d", &N, &M);

    char respostas[N][M];
    char gabarito[M];

    cadastrarRespostas(N, M, respostas);
    
    cadastrarGabarito(M, gabarito);

    int* pontuacao = calcularPontuacao(N, M, respostas, gabarito);

    for (int i = 0; i < N; i++) {
        printf("%d ", pontuacao[i]);
    }
    printf("\n");

    free(pontuacao);

    return 0;
}

