#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int inicio;
    int fim;
} intervalo;

int compara(const void *a, const void *b) {
    const intervalo *x = a;
    const intervalo *y = b;
    if (x->fim != y->fim) {
        return x->fim - y->fim;
    }
    return x->inicio - y->inicio;
}

int main(void) {
    int n;
    scanf("%d", &n);
    intervalo evento[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &evento[i].inicio, &evento[i].fim);
    }
    qsort(evento, n, sizeof(intervalo), compara);
    int escolhidos[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (total == 0 || evento[i].inicio > evento[escolhidos[total - 1]].fim) {
            escolhidos[total++] = i;
        }
    }
    printf("%d\n", total);
    for (int i = 0; i < total; i++) {
        printf("(%d,%d)\n", evento[escolhidos[i]].inicio, evento[escolhidos[i]].fim);
    }
    return 0;
}
