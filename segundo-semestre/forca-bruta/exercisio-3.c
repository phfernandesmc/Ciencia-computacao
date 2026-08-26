#include <stdio.h>
#include <string.h>

void buscar_palavra(char texto[], char palavra[]) [
    if (strstr(texto, palavra) != NULL) {
        printf("Achei!\n");
    } else {
        printf("Nao achei!\n");
    }
]

int main() {
    char texto[] = "programacao em c";
    char palavra[] = "em c";

    buscar_palavra(texto, palavra);
    return 0;
}