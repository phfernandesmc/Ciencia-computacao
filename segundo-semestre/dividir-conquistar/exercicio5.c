#include <stdio.h>

int esta_ordenado(int arr[], int inicio, int fim) {
  if (inicio >= fim) return 1;

  int meio = inicio + (fim - inicio) / 2;
  int esquerda_ordenada = esta_ordenado(arr, inicio, meio);
  int direita_ordenada = esta_ordenado(arr, meio + 1, fim);
  int fronteira_ordenada = arr[meio] <= arr[meio + 1];

  return esquerda_ordenada && direita_ordenada && fronteira_ordenada;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int tamanho = sizeof(arr) / sizeof(arr[0]);
  int resultado = esta_ordenado(arr, 0, tamanho - 1);
  printf("Array ordenado? %s\n", resultado ? "sim" : "nao");

  int arr2[] = {1, 5, 3, 4, 2};
  int tamanho2 = sizeof(arr2) / sizeof(arr2[0]);
  int resultado2 = esta_ordenado(arr2, 0, tamanho2 - 1);
  printf("Array ordenado? %s\n", resultado2 ? "sim" : "nao");
  return 0;
}
