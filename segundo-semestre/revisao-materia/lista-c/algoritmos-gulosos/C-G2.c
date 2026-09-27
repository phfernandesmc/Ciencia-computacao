#include <stdio.h>

void troco_geral(int valor, int notas[], int n) {
    for (int i = 0; i < n && valor > 0; i++) {
        int qtd = valor / notas[i];
        if (qtd > 0) {
            printf("%d nota(s) de %d\n", qtd, notas[i]);
            valor -= qtd * notas[i];
        }
    }
}

int main(void) {
    int valor, n;
    scanf("%d %d", &valor, &n);
    int notas[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &notas[i]);
    }
    troco_geral(valor, notas, n);
    return 0;
}
