#include <stdio.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition_lomuto(int arr[], int inicio, int fim) {
  int pivo = arr[fim];
  int i = inicio - 1;

  for (int j = inicio; j < fim; j++) {
    if (arr[j] <= pivo) {
      i++;
      trocar(&arr[i], &arr[j]);
    }
  }

  trocar(&arr[i + 1], &arr[fim]);
  return i + 1;
}

int quickselect(int arr[], int inicio, int fim, int k) {
  if (inicio == fim) return arr[inicio];

  int posicao_pivo = partition_lomuto(arr, inicio, fim);

  if (k == posicao_pivo) {
    return arr[k];
  } else if (k < posicao_pivo) {
    return quickselect(arr, inicio, posicao_pivo - 1, k);
  } else {
    return quickselect(arr, posicao_pivo + 1, fim, k);
  }
}

int main() {
  int arr[] = {9, 4, 7, 1, 8, 3, 6, 2, 5};
  int tamanho = sizeof(arr) / sizeof(arr[0]);
  int k = 3;
  int resultado = quickselect(arr, 0, tamanho - 1, k);
  printf("O %d-esimo menor elemento (indice %d) e: %d\n", k + 1, k, resultado);
  return 0;
}
