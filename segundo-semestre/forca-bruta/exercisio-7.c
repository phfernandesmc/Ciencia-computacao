#include <stdio.h>
#include <string.h>

int buscar_forca_bruta(char texto[], char palavra[]) {
  int n = strlen(texto);
  int m = strlen(palavra);

  for (int i = 0; i <= n - m; i++) {
    int j;
    for (j = 0; j < m; j++) {
      if (texto[i + j] != palavra[j]) {
        break;
      }
    }
    if (j == m) {
      return i;
    }
  }

  return -1;
}

int buscar_kmp(char texto[], char palavra[]) {
  int n = strlen(texto);
  int m = strlen(palavra);
  int falha[m];

  falha[0] = 0;
  int k = 0;

  for (int i = 1; i < m; i++) {
    while (k > 0 && palavra[i] != palavra[k]) {
      k = falha[k - 1];
    }
    if (palavra[i] == palavra[k]) {
      k++;
    }
    falha[i] = k;
  }

  k = 0;
  for (int i = 0; i < n; i++) {
    while (k > 0 && texto[i] != palavra[k]) {
      k = falha[k - 1];
    }
    if (texto[i] == palavra[k]) {
      k++;
    }
    if (k == m) {
      return i - m + 1;
    }
  }

  return -1;
}

void comparar_buscas(char texto[], char palavra[]) {
  int resultado_fb = buscar_forca_bruta(texto, palavra);
  int resultado_kmp = buscar_kmp(texto, palavra);

  printf("Forca bruta encontrou na posicao: %d\n", resultado_fb);
  printf("KMP encontrou na posicao: %d\n", resultado_kmp);
}

int main() {
  char texto[] = "esse texto serve para testar a busca de palavras";
  char palavra[] = "busca";

  comparar_buscas(texto, palavra);

  return 0;
}
