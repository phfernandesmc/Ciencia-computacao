# A-P5 [Difícil] Multiplicação de cadeia de matrizes — Lista A, Programação Dinâmica

(Exercício teórico / no papel — responda aqui.)

```
Para A1 (4x10), A2 (10x3), A3 (3x12), A4 (12x20) (vetor de dimensões p = {4,10,3,12,20}),
preencha a tabela M[i][j] bottom-up com
  M[i][j] = min_{i<=k<j} { M[i,k] + M[k+1,j] + p[i-1]*p[k]*p[j] },
anotando o k vencedor de cada célula. Preencha primeiro a diagonal (M[i][i] = 0), depois
subsequências de tamanho 2, 3, 4.

Entrada: nenhuma (cálculo no papel; opcionalmente implemente).
Saída: a tabela M completa com os valores de k e a parentização ótima.

Casos de teste (gabarito):
  M[1][2] = 120 (k=1)   M[2][3] = 360 (k=2)   M[3][4] = 720 (k=3)
  M[1][3] = 264 (k=2)   M[2][4] = 1320 (k=3)
  M[1][4] = 1080 (k=2) -> parentizacao otima: (A1 x A2) x (A3 x A4)
```

## Resposta

p = {4, 10, 3, 12, 20}; A1 (4x10), A2 (10x3), A3 (3x12), A4 (12x20).

**Diagonal:** M[1][1] = M[2][2] = M[3][3] = M[4][4] = 0.

**Tamanho 2**
- M[1][2] = 4·10·3 = **120** (k=1)
- M[2][3] = 10·3·12 = **360** (k=2)
- M[3][4] = 3·12·20 = **720** (k=3)

**Tamanho 3**
- M[1][3]: k=1 → 0 + 360 + 4·10·12 = 840; k=2 → 120 + 0 + 4·3·12 = 264 → **264** (k=2)
- M[2][4]: k=2 → 0 + 720 + 10·3·20 = 1320; k=3 → 360 + 0 + 10·12·20 = 2760 → **1320** (k=2)

**Tamanho 4**
- M[1][4]: k=1 → 0 + 1320 + 4·10·20 = 2120; k=2 → 120 + 720 + 4·3·20 = 1080; k=3 → 264 + 0 + 4·12·20 = 1224 → **1080** (k=2)

| M | j=1 | j=2 | j=3 | j=4 |
|---|-----|-----|-----|-----|
| i=1 | 0 | 120 (k=1) | 264 (k=2) | 1080 (k=2) |
| i=2 | | 0 | 360 (k=2) | 1320 (k=2) |
| i=3 | | | 0 | 720 (k=3) |
| i=4 | | | | 0 |

**Parentização ótima:** (A1 × A2) × (A3 × A4), com 1080 multiplicações escalares.

Observação: o gabarito do enunciado indica k=3 para M[2][4], mas o k vencedor é 2 (720 + 600 = 1320 contra 2760 para k=3); o valor 1320 coincide.
