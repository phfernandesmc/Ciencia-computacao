#include <stdio.h>

int busca_binaria_recursiva(int arr[], int inicio, int fim, int alvo) {
  if (inicio > fim) return -1;

  int meio = inicio + (fim - inicio) / 2;
  if (arr[meio] == alvo) return meio;
  if (arr[meio] > alvo) return busca_binaria_recursiva(arr, inicio, meio - 1, alvo);
  return busca_binaria_recursiva(arr, meio + 1, fim, alvo);
}

int main() {
  int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  int tamanho = sizeof(arr) / sizeof(arr[0]);
  int alvo = 9;
  int resultado = busca_binaria_recursiva(arr, 0, tamanho - 1, alvo);
  printf("O elemento %d esta no indice: %d\n", alvo, resultado);
}