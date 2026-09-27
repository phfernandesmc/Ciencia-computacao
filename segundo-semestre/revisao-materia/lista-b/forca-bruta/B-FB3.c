#include <stdio.h>

void imprime(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf(i == 0 ? "%d" : " %d", a[i]);
    }
    printf("\n");
}

void insercao(int n, int a[]) {
    for (int i = 1; i < n; i++) {
        int aux = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > aux) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = aux;
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
    insercao(n, a);
    return 0;
}
