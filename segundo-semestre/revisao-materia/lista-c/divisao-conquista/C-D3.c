#include <stdio.h>

int menor_dc(int vet[], int inicio, int fim) {
    if (inicio == fim) {
        return vet[inicio];
    }
    if (fim - inicio == 1) {
        return vet[inicio] < vet[fim] ? vet[inicio] : vet[fim];
    }
    int meio = (inicio + fim) / 2;
    int esq = menor_dc(vet, inicio, meio);
    int dir = menor_dc(vet, meio + 1, fim);
    return esq < dir ? esq : dir;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    printf("Menor: %d\n", menor_dc(vet, 0, n - 1));
    return 0;
}
