#include <stdio.h>
 
int main() {
 
    const double n = 3.14159;
    double R;
    scanf("%lf", &R);

    const double A = n * (R * R);
    printf("A=%.4f\n", A);
    return 0;
}