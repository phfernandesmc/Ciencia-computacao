# B-P4 [Médio] Mochila booleana com PD — Lista B, Programação Dinâmica

(Exercício teórico / no papel — responda aqui.)

```
Preencha a tabela M[i][c] bottom-up para p = 1, 3, 4, 5, v = 1, 4, 5, 7 e capacidade c = 7,
com a regra: se p[i] > c, M[i][c] = M[i-1][c]; senão
M[i][c] = max(M[i-1][c], v[i] + M[i-1][c - p[i]]).
Apresente a tabela completa (5 linhas x 8 colunas, de c = 0 a 7) e o valor ótimo.

Saída: a tabela completa e o valor ótimo.

Casos de teste (gabarito):
  M[1][c] = c (item 1: peso 1, valor 1 -> cabe em toda capacidade)
  M[4][7] = 9 -> itens de peso 3 (valor 4) e 4 (valor 5)
  Otimo: 9
```

## Resposta

p = {1, 3, 4, 5}, v = {1, 4, 5, 7}, c = 7. Linha i = melhores valores usando os itens 1..i.

| i \ c | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
|---|---|---|---|---|---|---|---|---|
| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 1 (p=1, v=1) | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |
| 2 (p=3, v=4) | 0 | 1 | 1 | 4 | 5 | 5 | 5 | 5 |
| 3 (p=4, v=5) | 0 | 1 | 1 | 4 | 5 | 6 | 6 | 9 |
| 4 (p=5, v=7) | 0 | 1 | 1 | 4 | 5 | 7 | 8 | 9 |

Exemplos: M[2][3] = max(M[1][3] = 1, 4 + M[1][0] = 4) = 4; M[3][7] = max(M[2][7] = 5, 5 + M[2][3] = 9) = 9; M[4][7] = max(M[3][7] = 9, 7 + M[3][2] = 8) = 9.

**Valor ótimo: M[4][7] = 9**, com os itens de peso 3 (valor 4) e 4 (valor 5).

Observação: o gabarito diz M[1][c] = c, mas com um único item de peso 1 e valor 1 a mochila só leva esse item uma vez, logo M[1][c] = 1 para c ≥ 1.
