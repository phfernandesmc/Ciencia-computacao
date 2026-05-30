#include <stdio.h>

int main() {

    int sumOdds = 0;
    int X, Y;

    scanf("%d", &X);
    scanf("%d", &Y);

    int min = X < Y ? X : Y;
    int max = X > Y ? X : Y;

    for (int i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            sumOdds += i;
        }
    }

    printf("%d\n", sumOdds);

    return 0;
}