# B-G3 [Fácil] Mochila fracionária (cálculo manual) — Lista B, Algoritmos Gulosos

(Exercício teórico / no papel — responda aqui.)

```
Dados v = 100, 200, 120, w = 10, 20, 30 e W = 50, calcule no papel o valor máximo pela
estratégia da maior razão valor/peso. Calcule r_i = v_i/w_i, ordene, e preencha a mochila
inteiramente até sobrar espaço; nesse caso pegue a fração do próximo item.

Saída: razões ordenadas, frações f_i de cada item e valor total.

Casos de teste (gabarito):
  r = {10, 10, 4} -> ordem: itens 1 e 2 (empate, qualquer), depois item 3
  f = {1, 1, 2/3} -> peso: 10 + 20 + (2/3)*30 = 50 (capacidade exata)
  valor = 100 + 200 + (2/3)*120 = 380 (OTIMO)
```

## Resposta

**Razões:** r1 = 100/10 = 10; r2 = 200/20 = 10; r3 = 120/30 = 4. Ordem decrescente: item 1 e item 2 (empate), depois item 3.

**Preenchimento (W = 50):**
- Item 1 (w=10) inteiro: usados 10, sobram 40.
- Item 2 (w=20) inteiro: usados 30, sobram 20.
- Item 3 (w=30): cabem 20 → f3 = 20/30 = 2/3.

**Frações:** f = {1, 1, 2/3}. Peso = 10 + 20 + (2/3)·30 = 50 (capacidade exata).

**Valor:** 100 + 200 + (2/3)·120 = 100 + 200 + 80 = **380 (ótimo)**.
