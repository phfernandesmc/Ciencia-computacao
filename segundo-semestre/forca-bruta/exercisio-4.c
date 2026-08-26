#include <stdio.h>

void ordenar_selecao(int vetor[], int tamanho) {
  int i = 0, j, temp;

  for (i; i < tamanho; i++) {
    for (j = i + 1; j < tamanho; j++) {
      if (vetor[i] > vetor[j]) {
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
      }
    }
  }
}

int main() {
  int bagunca[20] = {5, 9, 4, 2, 1, 3, 8, 7, 6, 0, 2, 7, 3, 4, 5, 6, 7, 8, 9, 10};

  int tamanho = sizeof(bagunca) / sizeof(bagunca[0]);

  ordenar_selecao(bagunca, tamanho);

  return 0;
}

