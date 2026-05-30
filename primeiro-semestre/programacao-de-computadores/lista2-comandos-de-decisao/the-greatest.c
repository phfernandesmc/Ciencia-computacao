#include <stdio.h>
#include <math.h>

int main() {

    int A, B, C, maiorAB, R;

    scanf("%d %d %d", &A, &B, &C);

    maiorAB = (abs(A - B) + (A + B)) / 2;

    R = (abs(maiorAB - C) + abs(maiorAB + C)) / 2;

    printf("%d eh o maior\n", R);

    return 0;
}
