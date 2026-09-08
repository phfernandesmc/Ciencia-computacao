#include <stdio.h>

int soma_maxima_subarray(int arr[], int n) {
  int soma_atual = arr[0];
  int maior_soma = arr[0];

  for (int i = 1; i < n; i++) {
    int estender = soma_atual + arr[i];
    soma_atual = estender > arr[i] ? estender : arr[i];
    maior_soma = soma_atual > maior_soma ? soma_atual : maior_soma;
  }

  return maior_soma;
}

int main() {
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int resultado = soma_maxima_subarray(arr, n);
  printf("Soma maxima do subarray: %d\n", resultado);

  return 0;
}
