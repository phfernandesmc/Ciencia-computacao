#include <stdio.h>
#include <math.h>

double calcularDelta(double A, double B, double C) {
    return (B * B) - (4 * A * C);
}

int main() {

    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = calcularDelta(A, B, C);

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    double R1 = (-B + sqrt(delta)) / (2 * A);
    printf("R1 = %.5lf\n", R1);

    double R2 = (-B - sqrt(delta)) / (2 * A);
    printf("R2 = %.5lf\n", R2);

    return 0;
}