# C-P5 [Difícil] Multiplicação de cadeia de matrizes (6 matrizes) — Lista C, Programação Dinâmica

(Exercício teórico / no papel — responda aqui.)

```
Para A1 (30x35), A2 (35x15), A3 (15x5), A4 (5x10), A5 (10x20), A6 (20x25)
(p = {30,35,15,5,10,20,25}), preencha a tabela M[i][j] (6x6) bottom-up. Indique o k vencedor
de M[1,6] e recupere a parentização ótima completa percorrendo as escolhas de k.

Saída: tabela completa, custo mínimo e parentização.

Casos de teste (gabarito):
  M[1][2] = 15750  M[2][3] = 2625  M[3][4] = 750
  M[4][5] = 1000   M[5][6] = 5000
  M[1][6] = 15125 (k = 3)
  -> ((A1 x A2) x ((A3 x A4) x A5)) x A6   (recupere percorrendo as escolhas de k a partir de M[1,6])
```

## Resposta

p = {30, 35, 15, 5, 10, 20, 25}. Custos M[i][j] (com o k vencedor entre parênteses):

| M | j=1 | j=2 | j=3 | j=4 | j=5 | j=6 |
|---|---|---|---|---|---|---|
| i=1 | 0 | 15750 (1) | 7875 (1) | 9375 (3) | 11875 (3) | **15125 (3)** |
| i=2 | | 0 | 2625 (2) | 4375 (3) | 7125 (3) | 10500 (3) |
| i=3 | | | 0 | 750 (3) | 2500 (3) | 5375 (3) |
| i=4 | | | | 0 | 1000 (4) | 3500 (5) |
| i=5 | | | | | 0 | 5000 (5) |
| i=6 | | | | | | 0 |

**M[1][6]:** k=3 vence (M[1][3] + M[4][6] + 30·5·25 = 7875 + 3500 + 3750 = 15125). Custo mínimo: **15125**.

**Recuperação da parentização** (percorrendo os k):
- (1,6), k=3 → (A1..A3) × (A4..A6)
- (1,3), k=1 → A1 × (A2 × A3)
- (4,6), k=5 → (A4 × A5) × A6

**Parentização ótima:** (A1 × (A2 × A3)) × ((A4 × A5) × A6), com 15125 multiplicações.

Observação: o custo e o k de M[1][6] batem com o gabarito, mas a parentização indicada nele ((A1 × A2) × ((A3 × A4) × A5)) × A6 não corresponde aos valores de k da tabela; a correta é a acima.
