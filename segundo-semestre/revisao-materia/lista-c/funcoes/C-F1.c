#include <stdio.h>
#include <string.h>

void cabecalho(const char *titulo) {
    int largura = strlen(titulo) + 4;
    for (int i = 0; i < largura; i++) {
        putchar('=');
    }
    putchar('\n');
    printf("%s\n", titulo);
    for (int i = 0; i < largura; i++) {
        putchar('=');
    }
    putchar('\n');
}

int main(void) {
    char titulo[51];
    scanf("%50s", titulo);
    cabecalho(titulo);
    return 0;
}
