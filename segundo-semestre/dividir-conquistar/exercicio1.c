#include <stdio.h>

int busca_binaria_iterativa(int arr[], int inicio, int fim, int alvo) {
  while (inicio <= fim) {
    int meio = inicio + (fim - inicio) / 2;

    if (arr[meio] == alvo) {
      return meio;
    }

    if (arr[meio] < alvo) {
      inicio = meio + 1;
    } else {
      fim = meio - 1;
    }
  }
  return -1;
};

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int tamanho = sizeof(arr) / sizeof(arr[0]);
  int alvo = 5;
  int resultado = busca_binaria_iterativa(arr, 0, tamanho - 1, alvo);
  printf("Índice do elemento %d: %d\n", alvo, resultado);
  return 0;
}