#include <stdio.h>

int calcular_distancia(int caminho[], int distancias[][4], int num_cidades) {
  int total = 0;

  for (int i = 0; i < num_cidades - 1; i++) {
    total += distancias[caminho[i]][caminho[i + 1]];
  }

  total += distancias[caminho[num_cidades - 1]][caminho[0]];

  return total;
}

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void gerar_permutacoes(int cidades[], int inicio, int fim, int distancias[][4], int *melhor_distancia) {
  if (inicio == fim) {
    int distancia_atual = calcular_distancia(cidades, distancias, fim + 1);
    if (distancia_atual < *melhor_distancia) {
      *melhor_distancia = distancia_atual;
    }
    return;
  }

  for (int i = inicio; i <= fim; i++) {
    trocar(&cidades[inicio], &cidades[i]);
    gerar_permutacoes(cidades, inicio + 1, fim, distancias, melhor_distancia);
    trocar(&cidades[inicio], &cidades[i]);
  }
}

int caixeiro_viajante(int distancias[][4], int num_cidades) {
  int cidades[4];
  int melhor_distancia = 999999;

  for (int i = 0; i < num_cidades; i++) {
    cidades[i] = i;
  }

  gerar_permutacoes(cidades, 1, num_cidades - 1, distancias, &melhor_distancia);

  return melhor_distancia;
}

int main() {
  int distancias[4][4] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
  };

  int resultado = caixeiro_viajante(distancias, 4);
  printf("Menor distancia: %d\n", resultado);

  return 0;
}
