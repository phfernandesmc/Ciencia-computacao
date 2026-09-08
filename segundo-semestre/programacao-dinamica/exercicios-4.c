#include <stdio.h>

int dp[1000];

int custo_minimo_escadas(int custo[], int n) {
  dp[0] = 0;
  dp[1] = 0;

  for (int i = 2; i <= n; i++) {
    int vindo_de_tras = dp[i - 1] + custo[i - 1];
    int vindo_de_2_atras = dp[i - 2] + custo[i - 2];
    dp[i] = vindo_de_tras < vindo_de_2_atras ? vindo_de_tras : vindo_de_2_atras;
  }

  return dp[n];
}

int main() {
  int custo[] = {10, 15, 20};
  int n = sizeof(custo) / sizeof(custo[0]);
  int resultado = custo_minimo_escadas(custo, n);
  printf("Custo minimo para chegar ao topo: %d\n", resultado);

  return 0;
}
