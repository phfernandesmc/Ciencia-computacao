#include <stdio.h>

int array[1000];

long long fibonacci_dp(int n) {
  array[0] = 0;
  array[1] = 1;

  for (int i = 2; i <= n; i++) {
    array[i] = array[i - 1] + array[i - 2];
  }

  return array[n];
}

int main () {
  int numero = 13;
  long long resultado = fibonacci_dp(numero);
  printf("O fibonnaci de %d eh: %lld\n", numero, resultado);

  return 0;
}