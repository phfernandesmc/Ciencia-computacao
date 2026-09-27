#include <stdio.h>

int busca_bin_conta(int vet[], int n, int x, int *divisoes) {
    int inicio = 0, fim = n - 1;
    *divisoes = 0;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vet[meio] == x) {
            return meio;
        }
        (*divisoes)++;
        if (vet[meio] > x) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int main(void) {
    int n, x, divisoes;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);
    int indice = busca_bin_conta(vet, n, x, &divisoes);
    printf("indice %d, %d divisoes\n", indice, divisoes);
    return 0;
}
