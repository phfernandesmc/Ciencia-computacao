#include <stdio.h>

void dobro(int x) {
    printf("Dobro: %d\n", 2 * x);
}

int main(void) {
    int n;
    scanf("%d", &n);
    dobro(n);
    printf("Numero informado: %d\n", n);
    return 0;
}
