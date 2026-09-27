# C-G3 [Fácil] Mochila fracionária (cálculo manual) — Lista C, Algoritmos Gulosos

(Exercício teórico / no papel — responda aqui.)

```
Dados v = 10, 40, 30, 50, w = 5, 4, 6, 3 e W = 10, calcule o valor máximo pela maior razão
valor/peso, indicando as frações f_i.

Saída: razões, ordem de escolha, frações e valor total.

Casos de teste (gabarito):
  r = {2, 10, 5, 16.67} -> ordem: item 4, item 2, item 3, item 1
  f4 = 1 (peso 3), f2 = 1 (peso 4), f3 = 3/6 = 1/2 (peso 3) -> peso total 10
  valor = 50 + 40 + (1/2)*30 = 105 (OTIMO)
```

## Resposta

**Razões:** r1 = 10/5 = 2; r2 = 40/4 = 10; r3 = 30/6 = 5; r4 = 50/3 ≈ 16,67.

**Ordem de escolha:** item 4, item 2, item 3, item 1.

**Preenchimento (W = 10):**
- Item 4 (w=3) inteiro: f4 = 1, usados 3, sobram 7.
- Item 2 (w=4) inteiro: f2 = 1, usados 7, sobram 3.
- Item 3 (w=6): cabem 3 → f3 = 3/6 = 1/2, usados 10.
- Item 1: f1 = 0.

**Frações:** f = {0, 1, 1/2, 1}. **Valor:** 50 + 40 + (1/2)·30 = **105 (ótimo)**.
