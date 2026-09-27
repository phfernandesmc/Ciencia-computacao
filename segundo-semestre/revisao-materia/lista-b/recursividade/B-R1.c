#include <stdio.h>

long long fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("Fib(%d) = %lld\n", n, fib(n));
    return 0;
}
