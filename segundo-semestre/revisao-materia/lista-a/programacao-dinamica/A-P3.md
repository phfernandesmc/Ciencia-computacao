# A-P3 [Fácil] Caracterização (teórico) — Lista A, Programação Dinâmica

(Exercício teórico / no papel — responda aqui.)

```
Cite e explique as duas características que um problema deve apresentar para admitir solução
por programação dinâmica: SUBESTRUTURA ÓTIMA e SOBREPOSIÇÃO DE SUBPROBLEMAS.
Ilustre ambas com a recorrência F_n = F_(n-1) + F_(n-2).

Saída: resposta escrita com: (a) definição das duas características; (b) desenho da árvore de
chamadas de fib(4) com os nós repetidos circulados.

Casos de teste (gabarito):
  fib(4) chama fib(3) e fib(2);
  fib(3) chama fib(2) e fib(1);
  fib(2) chama fib(1) e fib(0);
  Subproblemas repetidos: fib(2) aparece 2x, fib(1) aparece 3x, fib(0) aparece 2x.
```

## Resposta

**(a) Características**

- **Subestrutura ótima:** a solução ótima de um problema é composta por soluções ótimas de subproblemas menores. Em Fibonacci, F(n) é obtido diretamente de F(n-1) e F(n-2): F(n) = F(n-1) + F(n-2).
- **Sobreposição de subproblemas:** a resolução recursiva volta a resolver os mesmos subproblemas muitas vezes, em vez de gerar subproblemas sempre novos. Em Fibonacci, F(n-1) e F(n-2) compartilham F(n-3), F(n-4) etc. Como o resultado de um subproblema é sempre o mesmo, pode ser calculado uma vez e guardado numa tabela (memoization ou tabulação). Sem sobreposição (como no mergesort) não há ganho em memorizar.

**(b) Árvore de chamadas de fib(4)** (nós repetidos entre colchetes)

```
fib(4)
├── fib(3)
│   ├── [fib(2)]
│   │   ├── [fib(1)]
│   │   └── [fib(0)]
│   └── [fib(1)]
└── [fib(2)]
    ├── [fib(1)]
    └── [fib(0)]
```

- fib(4) chama fib(3) e fib(2); fib(3) chama fib(2) e fib(1); fib(2) chama fib(1) e fib(0).
- Repetidos: fib(2) aparece 2x, fib(1) aparece 3x, fib(0) aparece 2x.
