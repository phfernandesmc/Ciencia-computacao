#include <stdio.h>

void buscar_numero(int vetor[], int tamanho, int alvo) {

  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == alvo) {
      printf("Encontrado %d na posicao %d\n", alvo, i);
    }
  }
}

int main() {

  int inteiros[] = {5, 9, 4, 2, 1, 3, 8, 7, 6, 0, 2, 7, 3, 4, 5, 6, 7, 8, 9, 10};
  int tamanho = sizeof(inteiros) / sizeof(inteiros[0]);
  int escolhido;

  printf("Escolha um numero: ");
  scanf("%d", &escolhido);

  buscar_numero(inteiros, tamanho, escolhido);

  return 0;
}