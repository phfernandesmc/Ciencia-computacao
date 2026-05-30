#include <stdio.h>

int main() {

    int total, A, B, C, D, E;

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    total = 0;

    if (A % 2 == 0) {
        total++;
    }

    if (B % 2 == 0) {
        total++;
    }

    if (C % 2 == 0) {
        total++;
    }

    if (D % 2 == 0) {
        total++;
    }

    if (E % 2 == 0) {
        total++;
    }

    printf("%d valores pares\n", total);

    return 0;
}
