# A-G3 [Fácil] Mochila fracionária (cálculo manual) — Lista A, Algoritmos Gulosos

(Exercício teórico / no papel — responda aqui.)

```
Dados v = 60, 150, 120, 200, w = 10, 20, 30, 40 e capacidade W = 50, resolva no papel pelas
três estratégias: (a) maior valor primeiro; (b) menor peso primeiro; (c) maior razão valor/peso.
Para cada uma indique as frações f_i escolhidas e o valor total. Não é preciso programar.

Saída: para cada estratégia: frações e valor total.

Casos de teste (gabarito):
  (a) maior valor primeiro:
      f = {0, 1/2, 0, 1} -> valor 275
  (b) menor peso primeiro:
      f = {1, 1, 2/3, 0} -> valor 290
  (c) maior razao v/w:
      r = {6, 7.5, 4, 5}; f = {1, 1, 0, 1/2} -> valor 310 (OTIMO)

Perguntas: qual estratégia é a correta? Por que a gulosa funciona na mochila fracionária
mas não na booleana?
```

## Resposta

**Dados:** v = {60, 150, 120, 200}, w = {10, 20, 30, 40}, W = 50.

**(a) Maior valor primeiro** (ordem: item 4, item 2, item 3, item 1)
- Item 4 (w=40) entra inteiro: sobram 10.
- Item 2 (w=20): cabe só metade → f2 = 1/2 (peso 10).
- f = {0, 1/2, 0, 1} → valor = 200 + 75 = **275**.

**(b) Menor peso primeiro** (ordem: item 1, item 2, item 3, item 4)
- Item 1 (w=10) e item 2 (w=20) entram inteiros: usados 30, sobram 20.
- Item 3 (w=30): cabem 20/30 → f3 = 2/3.
- f = {1, 1, 2/3, 0} → valor = 60 + 150 + 80 = **290**.

**(c) Maior razão valor/peso**
- r = {6, 7,5, 4, 5} → ordem: item 2, item 1, item 4, item 3.
- Item 2 (w=20) e item 1 (w=10) entram inteiros: usados 30, sobram 20.
- Item 4 (w=40): cabem 20/40 → f4 = 1/2.
- f = {1, 1, 0, 1/2} → valor = 150 + 60 + 100 = **310 (ótimo)**.

**Qual estratégia é a correta?** A (c), maior razão valor/peso. As outras duas ignoram o "custo" em peso de cada unidade de valor e por isso podem deixar valor na mesa.

**Por que o guloso funciona na fracionária e não na booleana?** Na fracionária, o item pode ser dividido, então a capacidade é sempre totalmente aproveitada com as unidades de melhor razão; trocar qualquer fração de um item de razão maior por outra de razão menor nunca melhora a solução (argumento de troca), logo a escolha local é globalmente ótima. Na booleana o item é tudo ou nada: a sobra de capacidade não pode ser preenchida com uma fração e o guloso pode "gastar" capacidade num item que impede uma combinação melhor. Com os mesmos dados na versão booleana, a razão pega os itens 2 e 1 (peso 30, valor 210) e nenhum outro cabe, resultado 210; porém os itens 2 e 3 (peso 50) dão 270, que é melhor.
