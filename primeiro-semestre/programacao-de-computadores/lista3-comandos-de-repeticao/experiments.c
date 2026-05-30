#include <stdio.h>

int main() {

    int i, inputs, quantidade, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char typeAnimal;

    scanf("%d", &inputs);

    for (i = 0; i < inputs; i++) {
        scanf("%d", &quantidade);
        scanf(" %c", &typeAnimal);

        if (typeAnimal == 'C') {
            coelhos += quantidade;
        } else if (typeAnimal == 'R') {
            ratos += quantidade;
        } else if (typeAnimal == 'S') {
            sapos += quantidade;
        }

        total += quantidade;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", (coelhos * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (ratos * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (sapos * 100.0) / total);

    return 0;
}
