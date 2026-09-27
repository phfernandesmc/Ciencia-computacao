#include <stdio.h>

int conta(int vet[], int n, int x) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] == x) {
            total++;
        }
    }
    return total;
}

int main(void) {
    int n, x;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);
    printf("Ocorrencias: %d\n", conta(vet, n, x));
    return 0;
}
