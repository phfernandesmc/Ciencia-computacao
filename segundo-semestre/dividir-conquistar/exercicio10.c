#include <stdio.h>

int soma_maxima_cruzando(int arr[], int inicio, int meio, int fim) {
  int soma = 0;
  int soma_esquerda = arr[meio];
  for (int i = meio; i >= inicio; i--) {
    soma += arr[i];
    if (soma > soma_esquerda) soma_esquerda = soma;
  }

  soma = 0;
  int soma_direita = arr[meio + 1];
  for (int j = meio + 1; j <= fim; j++) {
    soma += arr[j];
    if (soma > soma_direita) soma_direita = soma;
  }

  return soma_esquerda + soma_direita;
}

int soma_maxima_subvetor(int arr[], int inicio, int fim) {
  if (inicio == fim) return arr[inicio];

  int meio = inicio + (fim - inicio) / 2;

  int soma_esquerda = soma_maxima_subvetor(arr, inicio, meio);
  int soma_direita = soma_maxima_subvetor(arr, meio + 1, fim);
  int soma_cruzando = soma_maxima_cruzando(arr, inicio, meio, fim);

  int maior = soma_esquerda > soma_direita ? soma_esquerda : soma_direita;
  return maior > soma_cruzando ? maior : soma_cruzando;
}

int main() {
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int tamanho = sizeof(arr) / sizeof(arr[0]);
  int resultado = soma_maxima_subvetor(arr, 0, tamanho - 1);
  printf("Soma maxima de subvetor contiguo: %d\n", resultado);
  return 0;
}
