#include <stdio.h>

int busca_binaria_rec(int vet[], int inicio, int fim, int x) {
    if (inicio > fim) {
        return -1;
    }
    int meio = (inicio + fim) / 2;
    if (vet[meio] == x) {
        return meio;
    }
    if (vet[meio] > x) {
        return busca_binaria_rec(vet, inicio, meio - 1, x);
    }
    return busca_binaria_rec(vet, meio + 1, fim, x);
}

int main(void) {
    int n, x;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);
    printf("%d\n", busca_binaria_rec(vet, 0, n - 1, x));
    return 0;
}
