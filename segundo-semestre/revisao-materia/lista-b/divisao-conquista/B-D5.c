#include <stdio.h>

int total;
int particoes;
int trocas;

void imprime(int a[]) {
    for (int i = 0; i < total; i++) {
        printf(i == 0 ? "%d" : " %d", a[i]);
    }
    printf("\n");
}

void quicksort(int a[], int e, int d) {
    if (e >= d) {
        return;
    }
    int x = a[(e + d) / 2];
    int i = e, j = d;
    while (i <= j) {
        while (a[i] < x) {
            i++;
        }
        while (x < a[j]) {
            j--;
        }
        if (i <= j) {
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            trocas++;
            i++;
            j--;
        }
    }
    particoes++;
    printf("quicksort(%d..%d) pivo=%d i=%d j=%d -> ", e, d, x, i, j);
    imprime(a);
    quicksort(a, e, j);
    quicksort(a, i, d);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    total = n;
    quicksort(a, 0, n - 1);
    imprime(a);
    printf("Particoes: %d\n", particoes);
    printf("Trocas: %d\n", trocas);
    return 0;
}
