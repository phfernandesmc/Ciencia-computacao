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

void quicksort(int arr[], int inicio, int fim) {
  if (inicio >= fim) return;

  int posicao_pivo = partition_lomuto(arr, inicio, fim);
  quicksort(arr, inicio, posicao_pivo - 1);
  quicksort(arr, posicao_pivo + 1, fim);
}

int main() {
  int arr[] = {9, 4, 7, 1, 8, 3, 6, 2, 5};
  int tamanho = sizeof(arr) / sizeof(arr[0]);

  quicksort(arr, 0, tamanho - 1);

  printf("Array ordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
