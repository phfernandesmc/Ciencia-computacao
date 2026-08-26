#include <stdio.h>

int mochila_forca_bruta(int pesos[], int valores[], int num_itens, int capacidade) {
  int melhor_valor = 0;
  int total_combinacoes = 1;

  for (int i = 0; i < num_itens; i++) {
    total_combinacoes *= 2;
  }

  for (int c = 0; c < total_combinacoes; c++) {
    int peso_total = 0;
    int valor_total = 0;

    for (int i = 0; i < num_itens; i++) {
      if (c & (1 << i)) {
        peso_total += pesos[i];
        valor_total += valores[i];
      }
    }

    if (peso_total <= capacidade && valor_total > melhor_valor) {
      melhor_valor = valor_total;
    }
  }

  return melhor_valor;
}

int main() {
  int pesos[] = {2, 3, 4, 5};
  int valores[] = {3, 4, 5, 6};
  int num_itens = 4;
  int capacidade = 5;

  int resultado = mochila_forca_bruta(pesos, valores, num_itens, capacidade);
  printf("Melhor valor possivel: %d\n", resultado);

  return 0;
}
