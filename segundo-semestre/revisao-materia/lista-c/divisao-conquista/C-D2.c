#include <stdio.h>

int busca_binaria_iter(int vet[], int n, int x) {
    int inicio = 0, fim = n - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vet[meio] == x) {
            return meio;
        }
        if (vet[meio] > x) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int main(void) {
    int n, x;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);
    printf("%d\n", busca_binaria_iter(vet, n, x));
    return 0;
}
