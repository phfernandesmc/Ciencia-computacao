#include <stdio.h>
#include <string.h>

int contar_ocorrencias(char texto[], char palavra[]) {
  int contador = 0;
  int tam_palavra = strlen(palavra);
  char *pos = texto;

  while ((pos = strstr(pos, palavra)) != NULL) {
    contador++;
    pos += tam_palavra;
  }

  return contador;
}

int main() {
  char texto[] = "banana banana laranja banana";
  char palavra[] = "banana";

  int total = contar_ocorrencias(texto, palavra);
  printf("A palavra apareceu %d vezes\n", total);

  return 0;
}
