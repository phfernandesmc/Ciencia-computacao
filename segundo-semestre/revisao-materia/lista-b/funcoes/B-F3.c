#include <stdio.h>

void quadrado(int x) {
    x = x * x;
    printf("Quadrado: %d\n", x);
}

int main(void) {
    int n;
    scanf("%d", &n);
    quadrado(n);
    printf("Original: %d\n", n);
    return 0;
}
