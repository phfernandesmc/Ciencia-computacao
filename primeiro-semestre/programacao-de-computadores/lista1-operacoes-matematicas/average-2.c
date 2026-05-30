#include <stdio.h>

int main() {

    double A, B, C;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    double media = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);

     printf("MEDIA = %.1f\n", media);

    return 0;
}
