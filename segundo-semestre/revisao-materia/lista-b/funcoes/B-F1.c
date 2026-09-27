#include <stdio.h>

void imprime_vetor(int v[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf(i == 0 ? "%d" : ", %d", v[i]);
    }
    printf("]\n");
}

int main(void) {
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    imprime_vetor(v, n);
    return 0;
}
