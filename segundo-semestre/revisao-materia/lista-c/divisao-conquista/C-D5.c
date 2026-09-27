#include <stdio.h>

int trocas;
int particoes;

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
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf(i == 0 ? "%d" : " %d", a[i]);
    }
    printf("\n");
    printf("Trocas: %d\n", trocas);
    printf("Particoes: %d\n", particoes);
    return 0;
}
