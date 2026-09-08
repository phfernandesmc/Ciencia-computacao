#include <stdio.h>

int dp[100][1000];

int mochila_01(int valores[], int pesos[], int n, int capacidade) {
  for (int i = 0; i <= n; i++) {
    for (int c = 0; c <= capacidade; c++) {
      if (i == 0 || c == 0) {
        dp[i][c] = 0;
      } else if (pesos[i - 1] <= c) {
        int com_item = valores[i - 1] + dp[i - 1][c - pesos[i - 1]];
        int sem_item = dp[i - 1][c];
        dp[i][c] = com_item > sem_item ? com_item : sem_item;
      } else {
        dp[i][c] = dp[i - 1][c];
      }
    }
  }

  return dp[n][capacidade];
}

int main() {
  int valores[] = {60, 100, 120};
  int pesos[] = {10, 20, 30};
  int n = sizeof(valores) / sizeof(valores[0]);
  int capacidade = 50;

  int resultado = mochila_01(valores, pesos, n, capacidade);
  printf("Valor maximo na mochila: %d\n", resultado);

  return 0;
}
