#include <stdio.h>

int main() {
    double N[100];
    double X;
    int i;

    if (scanf("%lf", &X) != 1) return 0;

    N[0] = X;
    for (i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2.0;
    }

    for (i = 0; i < 100; i++) {
        printf("N[%d] = %.4f\n", i, N[i]);
    }

    return 0;
}