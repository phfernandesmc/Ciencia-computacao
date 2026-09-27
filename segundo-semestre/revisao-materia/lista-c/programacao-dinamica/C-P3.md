# C-P3 [Fácil] Sobreposição de subproblemas (teórico) — Lista C, Programação Dinâmica

(Exercício teórico / no papel — responda aqui.)

```
Desenhe a árvore de chamadas de fib(5) e responda: (a) quantas vezes cada subproblema
fib(0)..fib(3) é resolvido? (b) qual o número total de chamadas? (c) quantas chamadas
sobrariam com memoization?

Saída: árvore desenhada + três respostas numéricas.

Casos de teste (gabarito):
  fib(3) x2, fib(2) x3, fib(1) x5, fib(0) x3
  Total de chamadas (incluindo a inicial): 15
  Com memoization: apenas 5 chamadas de calculo (fib(0) a fib(4))
```

## Resposta

**Árvore de chamadas de fib(5)**

```
fib(5)
├── fib(4)
│   ├── fib(3)
│   │   ├── fib(2)
│   │   │   ├── fib(1)
│   │   │   └── fib(0)
│   │   └── fib(1)
│   └── fib(2)
│       ├── fib(1)
│       └── fib(0)
└── fib(3)
    ├── fib(2)
    │   ├── fib(1)
    │   └── fib(0)
    └── fib(1)
```

**(a)** fib(3) é resolvido 2 vezes, fib(2) 3 vezes, fib(1) 5 vezes, fib(0) 3 vezes (fib(4) e fib(5) uma vez cada).

**(b)** Total de chamadas, incluindo a inicial: 1 + 1 + 2 + 3 + 5 + 3 = **15**.

**(c)** Com memoization cada valor é calculado uma única vez: os subproblemas fib(0)..fib(4) são resolvidos uma vez cada (5, como no gabarito) e fib(5) é a chamada inicial. Contando também as consultas à tabela que retornam de imediato (fib(2) e fib(3) reaproveitados), o total de chamadas é 9, contra 15 sem memoization; apenas 4 delas fazem cálculo real além dos casos base (fib(2), fib(3), fib(4) e fib(5)).
