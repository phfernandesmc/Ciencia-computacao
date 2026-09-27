#include <stdio.h>

void troco(int valor) {
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7 && valor > 0; i++) {
        int qtd = valor / notas[i];
        if (qtd > 0) {
            printf("%d nota(s) de R$%d\n", qtd, notas[i]);
            valor -= qtd * notas[i];
        }
    }
}

int main(void) {
    int valor;
    scanf("%d", &valor);
    troco(valor);
    return 0;
}
