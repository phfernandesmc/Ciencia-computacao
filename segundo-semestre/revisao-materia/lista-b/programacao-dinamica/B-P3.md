# B-P3 [Fácil] Top-down vs bottom-up (teórico) — Lista B, Programação Dinâmica

(Exercício teórico / no papel — responda aqui.)

```
Complete a tabela comparativa entre as abordagens top-down (memoization) e bottom-up
(tabulação) nos quesitos: facilidade de pensar o problema, simplicidade do código, quais
subproblemas são resolvidos e o que é armazenado na tabela.

Saída: tabela preenchida com 4 linhas (uma por quesito) e 2 colunas (uma por abordagem).

Casos de teste (exemplo):
  Linha 'Subproblemas resolvidos' |
    top-down: apenas os necessarios |
    bottom-up: todos, do menor ao maior
```

## Resposta

| Quesito | Top-down (memoization) | Bottom-up (tabulação) |
|---|---|---|
| Facilidade de pensar o problema | Mais natural: escreve-se a recorrência recursiva e acrescenta-se a consulta à tabela | Exige definir antes a ordem de preenchimento (dos subproblemas menores para os maiores) |
| Simplicidade do código | Recursivo, quase idêntico à definição matemática; tabela inicializada com um sentinela (-1) | Iterativo com laços; sem recursão, sem custo de pilha e sem risco de estouro dela |
| Subproblemas resolvidos | Apenas os necessários para chegar à resposta | Todos, do menor ao maior |
| O que a tabela armazena | Resultados dos subproblemas já calculados (sentinela nos não calculados) | Resultados de todos os subproblemas, preenchidos na ordem dos laços |
