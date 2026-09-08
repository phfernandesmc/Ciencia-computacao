#include <stdio.h>

long long potencia_rapida(int x, int n) {
  if (n == 0) return 1;

  long long metade = potencia_rapida(x, n / 2);
  long long quadrado = metade * metade;

  if (n % 2 == 0) return quadrado;
  return x * quadrado;
}

int main() {
  int x = 2;
  int n = 10;
  long long resultado = potencia_rapida(x, n);
  printf("%d^%d = %lld\n", x, n, resultado);
  return 0;
}
