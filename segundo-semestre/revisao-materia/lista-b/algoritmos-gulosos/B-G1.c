#include <stdio.h>

void troco_moedas(int centavos) {
    int moedas[] = {50, 25, 10, 5, 1};
    for (int i = 0; i < 5 && centavos > 0; i++) {
        int qtd = centavos / moedas[i];
        if (qtd > 0) {
            printf("%d moeda(s) de %dc\n", qtd, moedas[i]);
            centavos -= qtd * moedas[i];
        }
    }
}

int main(void) {
    int centavos;
    scanf("%d", &centavos);
    troco_moedas(centavos);
    return 0;
}
