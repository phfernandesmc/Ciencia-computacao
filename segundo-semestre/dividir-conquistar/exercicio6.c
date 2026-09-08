#include <stdio.h>

void merge(int arr[], int inicio, int meio, int fim) {
  int tamanho_esquerda = meio - inicio + 1;
  int tamanho_direita = fim - meio;

  int esquerda[tamanho_esquerda];
  int direita[tamanho_direita];

  for (int i = 0; i < tamanho_esquerda; i++) {
    esquerda[i] = arr[inicio + i];
  }
  for (int j = 0; j < tamanho_direita; j++) {
    direita[j] = arr[meio + 1 + j];
  }

  int i = 0, j = 0, k = inicio;
  while (i < tamanho_esquerda && j < tamanho_direita) {
    if (esquerda[i] <= direita[j]) {
      arr[k] = esquerda[i];
      i++;
    } else {
      arr[k] = direita[j];
      j++;
    }
    k++;
  }

  while (i < tamanho_esquerda) {
    arr[k] = esquerda[i];
    i++;
    k++;
  }

  while (j < tamanho_direita) {
    arr[k] = direita[j];
    j++;
    k++;
  }
}

void mergesort(int arr[], int inicio, int fim) {
  if (inicio >= fim) return;

  int meio = inicio + (fim - inicio) / 2;
  mergesort(arr, inicio, meio);
  mergesort(arr, meio + 1, fim);
  merge(arr, inicio, meio, fim);
}

int main() {
  int arr[] = {9, 4, 7, 1, 8, 3, 6, 2, 5};
  int tamanho = sizeof(arr) / sizeof(arr[0]);

  mergesort(arr, 0, tamanho - 1);

  printf("Array ordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
