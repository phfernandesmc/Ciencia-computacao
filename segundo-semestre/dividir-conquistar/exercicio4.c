#include <stdio.h>

int encontrar_minimo(int arr[], int inicio, int fim) {
  if (inicio == fim) return arr[inicio];

  int meio = inicio + (fim - inicio) / 2;
  int min_esquerda = encontrar_minimo(arr, inicio, meio);
  int min_direita = encontrar_minimo(arr, meio + 1, fim);

  return min_esquerda < min_direita ? min_esquerda : min_direita;
}

int main() {
  int arr[] = {5, 3, 8, 1, 9, 2, 7};
  int tamanho = sizeof(arr) / sizeof(arr[0]);
  int resultado = encontrar_minimo(arr, 0, tamanho - 1);
  printf("Elemento minimo: %d\n", resultado);
  return 0;
}
