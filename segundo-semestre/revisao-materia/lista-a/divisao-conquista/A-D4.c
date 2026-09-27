#include <stdio.h>

int total;

void imprime(int a[]) {
    for (int i = 0; i < total; i++) {
        printf(i == 0 ? "%d" : " %d", a[i]);
    }
    printf("\n");
}

void intercala(int a[], int p, int q, int r) {
    int aux[r - p + 1];
    int i = p, j = q + 1, k = 0;
    while (i <= q && j <= r) {
        aux[k++] = a[i] <= a[j] ? a[i++] : a[j++];
    }
    while (i <= q) {
        aux[k++] = a[i++];
    }
    while (j <= r) {
        aux[k++] = a[j++];
    }
    for (k = 0; k < r - p + 1; k++) {
        a[p + k] = aux[k];
    }
    imprime(a);
}

void mergesort(int a[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergesort(a, p, q);
        mergesort(a, q + 1, r);
        intercala(a, p, q, r);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    total = n;
    mergesort(a, 0, n - 1);
    if (n < 2) {
        imprime(a);
    }
    return 0;
}
