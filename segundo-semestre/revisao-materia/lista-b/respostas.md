# Lista B — respostas às perguntas dos enunciados

## B-F3 Quadrado (passagem por valor)
O valor original não muda. A função recebe uma cópia temporária de n; `x = x * x` altera só essa cópia, que é descartada quando a função retorna.

## B-R4 Multiplicação por somas sucessivas
Não é recursão de cauda: depois da chamada `mult(a, b - 1)` ainda é preciso somar `a` ao resultado, então a chamada recursiva não é a última operação. (Uma versão de cauda usaria um acumulador: `mult(a, b, acc)`, retornando `mult(a, b - 1, acc + a)`; nesse caso os slides recomendam transformar em iteração, pois a pilha de chamadas é desnecessária.)

## B-FB5 Pontos mais próximos
São testados n(n−1)/2 pares, ou seja, O(n²). Para n grande fica impraticável: com n = 100 000 são cerca de 5 bilhões de pares.

## B-D4 Simulação do mergesort, v = 55 44 22 11 66 33
Árvore de divisões (q = (p + r)/2):
```
[55 44 22 11 66 33]
├── [55 44 22]
│   ├── [55 44]
│   │   ├── [55]
│   │   └── [44]
│   └── [22]
└── [11 66 33]
    ├── [11 66]
    │   ├── [11]
    │   └── [66]
    └── [33]
```
Intercalações (de baixo para cima, na ordem em que a execução as faz), com o vetor completo após cada uma:
1. [55] + [44] → [44 55]: 44 55 22 11 66 33
2. [44 55] + [22] → [22 44 55]: 22 44 55 11 66 33
3. [11] + [66] → [11 66]: 22 44 55 11 66 33
4. [11 66] + [33] → [11 33 66]: 22 44 55 11 33 66
5. [22 44 55] + [11 33 66] → 11 22 33 44 55 66

A execução do programa imprime exatamente essas cinco linhas; o papel bate.

## B-D5 Simulação do quicksort, v = 44 55 12 42 94 18 67
Pivô no elemento do meio, x = a[(e+d)/2]:

| chamada | subvetor | pivô | i, j finais | vetor após a partição |
|---|---|---|---|---|
| (0..6) | 44 55 12 42 94 18 67 | 42 | 3, 2 | 18 42 12 55 94 44 67 |
| (0..2) | 18 42 12 | 42 | 2, 1 | 18 12 42 55 94 44 67 |
| (0..1) | 18 12 | 18 | 1, 0 | 12 18 42 55 94 44 67 |
| (3..6) | 55 94 44 67 | 94 | 6, 5 | 12 18 42 55 67 44 94 |
| (3..5) | 55 67 44 | 67 | 5, 4 | 12 18 42 55 44 67 94 |
| (3..4) | 55 44 | 55 | 4, 3 | 12 18 42 44 55 67 94 |

Vetor final: 12 18 42 44 55 67 94. Total: **6 partições e 7 trocas**. (Os valores intermediários do gabarito do enunciado diferem porque a partição de Hoare aqui descrita gera outra sequência; o pivô da primeira chamada, 42, e o vetor final coincidem.)

## B-G3, B-D2, B-P3, B-P4, B-P5
Respondidas nos respectivos arquivos `.md`.
