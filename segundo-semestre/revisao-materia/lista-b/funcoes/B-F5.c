#include <stdio.h>

void analisa(int vet[], int n, int *pares, int *impares, int *soma) {
    *pares = 0;
    *impares = 0;
    *soma = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            (*pares)++;
        } else {
            (*impares)++;
        }
        *soma += vet[i];
    }
}

int main(void) {
    int n, pares, impares, soma;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    analisa(vet, n, &pares, &impares, &soma);
    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);
    printf("Soma: %d\n", soma);
    return 0;
}
