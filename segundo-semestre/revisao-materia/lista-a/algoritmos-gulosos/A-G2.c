#include <stdio.h>

int max_arquivos(int capacidade, int tamanhos[], int n) {
    for (int i = 1; i < n; i++) {
        int aux = tamanhos[i];
        int j = i - 1;
        while (j >= 0 && tamanhos[j] > aux) {
            tamanhos[j + 1] = tamanhos[j];
            j--;
        }
        tamanhos[j + 1] = aux;
    }
    int qtd = 0;
    int usado = 0;
    for (int i = 0; i < n && usado + tamanhos[i] <= capacidade; i++) {
        usado += tamanhos[i];
        qtd++;
    }
    return qtd;
}

int main(void) {
    int capacidade, n;
    scanf("%d %d", &capacidade, &n);
    int tamanhos[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tamanhos[i]);
    }
    printf("Arquivos: %d\n", max_arquivos(capacidade, tamanhos, n));
    return 0;
}
