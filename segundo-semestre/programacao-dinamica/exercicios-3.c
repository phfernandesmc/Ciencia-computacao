#include <stdio.h>

int dp[1000];

int roubar_casas(int arr[], int n) {
  if (n == 0) return 0;
  if (n == 1) return arr[0];

  dp[0] = arr[0];
  dp[1] = arr[0] > arr[1] ? arr[0] : arr[1];

  for (int i = 2; i < n; i++) {
    int roubar = dp[i - 2] + arr[i];
    int pular = dp[i - 1];
    dp[i] = roubar > pular ? roubar : pular;
  }

  return dp[n - 1];
}

int main() {
  int arr[] = {2, 7, 9, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int resultado = roubar_casas(arr, n);
  printf("Maximo roubado: %d\n", resultado);

  return 0;
}
