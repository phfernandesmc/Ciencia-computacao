# B-D2 [Fácil] Simulação da busca binária — Lista B, Divisão e Conquista

(Exercício teórico / no papel — responda aqui.)

```
Suponha que v[i] = i para todo i (vetor ordenado contendo os próprios índices). Execute a
busca binária NO PAPEL para os três casos abaixo. Para cada caso, escreva uma tabela com as
colunas inicio, final e meio a cada iteração, e indique o que é devolvido.

Entrada: parâmetros n e x conforme cada caso.
Saída: tabela de iterações e valor devolvido.

Casos de teste:
  (a) n = 9,  x = 3 -> encontra o indice 3
  (b) n = 14, x = 7 -> encontra o indice 7
  (c) n = 15, x = 7 -> encontra o indice 7
  (desafio) em (a), (b) e (c), quantas iteracoes foram feitas? O que muda entre n par e n impar?
```

## Resposta

Convenção: inicio = 0, final = n-1, meio = (inicio + final)/2; se v[meio] == x devolve meio; se v[meio] > x, final = meio-1; senão inicio = meio+1. Como v[i] = i, v[meio] = meio.

**(a) n = 9, x = 3**

| iteração | inicio | final | meio | decisão |
|---|---|---|---|---|
| 1 | 0 | 8 | 4 | 4 > 3 → final = 3 |
| 2 | 0 | 3 | 1 | 1 < 3 → inicio = 2 |
| 3 | 2 | 3 | 2 | 2 < 3 → inicio = 3 |
| 4 | 3 | 3 | 3 | encontrou → devolve 3 |

**(b) n = 14, x = 7**

| iteração | inicio | final | meio | decisão |
|---|---|---|---|---|
| 1 | 0 | 13 | 6 | 6 < 7 → inicio = 7 |
| 2 | 7 | 13 | 10 | 10 > 7 → final = 9 |
| 3 | 7 | 9 | 8 | 8 > 7 → final = 7 |
| 4 | 7 | 7 | 7 | encontrou → devolve 7 |

**(c) n = 15, x = 7**

| iteração | inicio | final | meio | decisão |
|---|---|---|---|---|
| 1 | 0 | 14 | 7 | encontrou → devolve 7 |

**Desafio:** (a) fez 4 iterações, (b) 4 e (c) 1. Com n ímpar, o trecho tem um elemento central exato e as duas metades restantes têm o mesmo tamanho; em (c) o 7 é justamente o centro, por isso 1 iteração. Com n par, não existe elemento central: o meio é truncado e as duas metades ficam com tamanhos diferentes (a da esquerda com um elemento a menos que a da direita), então o intervalo encolhe de forma assimétrica. No pior caso o número de iterações é ⌊log₂ n⌋ + 1 para ambos.
