#include <stdio.h>

int subvetor_soma_maxima(int vetor[], int tamanho) {
  int maior_soma = vetor[0];

  for (int i = 0; i < tamanho; i++) {
    for (int j = i; j < tamanho; j++) {
      int soma = 0;
      for (int k = i; k <= j; k++) {
        soma += vetor[k];
      }
      if (soma > maior_soma) {
        maior_soma = soma;
      }
    }
  }

  return maior_soma;
}

int subvetor_soma_maxima_n2(int vetor[], int tamanho) {
  int maior_soma = vetor[0];

  for (int i = 0; i < tamanho; i++) {
    int soma = 0;
    for (int j = i; j < tamanho; j++) {
      soma += vetor[j];
      if (soma > maior_soma) {
        maior_soma = soma;
      }
    }
  }

  return maior_soma;
}

int main() {
  int vetor[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  int resultado1 = subvetor_soma_maxima(vetor, tamanho);
  int resultado2 = subvetor_soma_maxima_n2(vetor, tamanho);

  printf("Maior soma (n3): %d\n", resultado1);
  printf("Maior soma (n2): %d\n", resultado2);

  return 0;
}
