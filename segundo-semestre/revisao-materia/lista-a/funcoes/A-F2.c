#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main(void) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("Soma: %d\n", soma(n1, n2));
    return 0;
}
