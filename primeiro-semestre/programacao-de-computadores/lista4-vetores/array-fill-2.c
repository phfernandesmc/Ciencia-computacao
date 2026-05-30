#include <stdio.h>

int main() {
    int N[1000];
    int T, i;

    if (scanf("%d", &T) != 1) return 0;

    for (i = 0; i < 1000; i++) {
        N[i] = i % T;
    }

    for (i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}