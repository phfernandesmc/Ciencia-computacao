#include <stdio.h>

void ordenar(int arquivos[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arquivos[j] > arquivos[j + 1]) {
        int temp = arquivos[j];
        arquivos[j] = arquivos[j + 1];
        arquivos[j + 1] = temp;
      }
    }
  }
}

int max_arquivos(int capacidade, int arquivos[], int n) {
  ordenar(arquivos, n);

  int espaco_usado = 0;
  int quantidade = 0;

  for (int i = 0; i < n; i++) {
    if (espaco_usado + arquivos[i] > capacidade) break;

    espaco_usado += arquivos[i];
    quantidade++;
  }

  return quantidade;
}

int main() {
  int capacidade = 10;
  int arquivos[] = {4, 8, 1, 4, 2, 1};
  int n = sizeof(arquivos) / sizeof(arquivos[0]);

  int resultado = max_arquivos(capacidade, arquivos, n);
  printf("Numero maximo de arquivos: %d\n", resultado);

  return 0;
}
