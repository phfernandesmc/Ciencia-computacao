#include <stdio.h>

void incrementa(int x) {
    x++;
}

int main(void) {
    int n = 5;
    incrementa(n);
    printf("%d\n", n);
    return 0;
}
