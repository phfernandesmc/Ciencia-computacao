#include <stdio.h>

void linha(void);

void linha(void) {
    for (int i = 0; i < 80; i++) {
        putchar('-');
    }
    putchar('\n');
}

int main(void) {
    linha();
    printf("\t\t\t\tUm programa em C\n");
    linha();
    return 0;
}
