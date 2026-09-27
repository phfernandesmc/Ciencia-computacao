#include <stdio.h>

int absoluto(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("Absoluto: %d\n", absoluto(x));
    return 0;
}
