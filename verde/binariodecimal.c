#include <stdio.h>

int binarioParaDecimal(int binario) {
    if (binario == 0) {
        return 0;
    }
    int ultimoDigito = binario % 10;
    int restante = binario / 10;
    return ultimoDigito + 2 * binarioParaDecimal(restante);
}

int main() {
    int binario;
   
    scanf("%d", &binario);

    int decimal = binarioParaDecimal(binario);
    printf("%d\n", decimal);

    return 0;
}
