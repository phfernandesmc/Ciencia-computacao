#include <stdio.h>

void imprime(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf(i == 0 ? "%d" : " %d", a[i]);
    }
    printf("\n");
}

void selecao_direta(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[k]) {
                k = j;
            }
        }
        int aux = a[i];
        a[i] = a[k];
        a[k] = aux;
        imprime(n, a);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    selecao_direta(n, a);
    return 0;
}
