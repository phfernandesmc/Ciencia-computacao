# B-P5 [Difícil] Multiplicação de cadeia de matrizes — Lista B, Programação Dinâmica

(Exercício teórico / no papel — responda aqui.)

```
Para A1 (10x30), A2 (30x5), A3 (5x60) (p = {10,30,5,60}), preencha a tabela M[i][j] bottom-up com
  M[i][j] = min_{i<=k<j} { M[i,k] + M[k+1,j] + p[i-1]*p[k]*p[j] }.
Mostre o cálculo completo de cada célula fora da diagonal.

Saída: tabela 3x3, custo mínimo e parentização ótima.

Casos de teste (gabarito):
  M[1][2] = 10*30*5 = 1500
  M[2][3] = 30*5*60 = 9000
  M[1][3]: k=1 -> 0 + 9000 + 10*30*60 = 27000;
           k=2 -> 1500 + 0 + 10*5*60 = 4500 (k=2 vence)
  Custo minimo: 4500 -> parentizacao: (A1 x A2) x A3
```

## Resposta

p = {10, 30, 5, 60}; A1 (10x30), A2 (30x5), A3 (5x60).

**Diagonal:** M[1][1] = M[2][2] = M[3][3] = 0.

**Células fora da diagonal**
- M[1][2] = 0 + 0 + 10·30·5 = **1500** (k=1)
- M[2][3] = 0 + 0 + 30·5·60 = **9000** (k=2)
- M[1][3]:
  - k=1: M[1][1] + M[2][3] + 10·30·60 = 0 + 9000 + 18000 = 27000
  - k=2: M[1][2] + M[3][3] + 10·5·60 = 1500 + 0 + 3000 = 4500 → **4500** (k=2 vence)

| M | j=1 | j=2 | j=3 |
|---|-----|-----|-----|
| i=1 | 0 | 1500 (k=1) | 4500 (k=2) |
| i=2 | | 0 | 9000 (k=2) |
| i=3 | | | 0 |

**Custo mínimo:** 4500 multiplicações escalares. **Parentização ótima:** (A1 × A2) × A3.
