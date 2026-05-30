#include <stdio.h>

int main() {
    unsigned long long fib[61];
    int T, N, i;

    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }

    return 0;
}