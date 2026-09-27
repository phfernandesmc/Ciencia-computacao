# Lista C — respostas às perguntas dos enunciados

## C-G2 Quando o guloso falha
- (a) Notas 5, 4 e 1, valor 8: o guloso usa 5 (sobram 3) e depois 1 + 1 + 1 → **4 notas** (5 + 1 + 1 + 1).
- (b) Solução ótima: 4 + 4 → **2 notas**.
- (c) `troco_geral` com entrada `8 / 3 / 5 4 1` imprime `1 nota(s) de 5` e `3 nota(s) de 1`, confirmando (a).
- Por que falha: escolher sempre a maior nota que cabe é uma decisão local que compromete o restante; aqui o 5 deixa sobrar 3, que só se paga com notas de 1, enquanto duas notas de 4 fecham o valor exato. O conjunto {5, 4, 1} não tem a propriedade da escolha gulosa.
- No sistema real 100, 50, 20, 10, 5, 2, 1 o guloso é ótimo porque o conjunto é "canônico": nenhuma nota maior pode ser substituída por uma combinação com menos notas das menores, então escolher a maior nota possível nunca impede a solução ótima. (Em {5, 4, 1}, 8 = 4 + 4 usa menos notas que a escolha gulosa, quebrando isso.)

## C-G5 Reservas do laboratório
Primeiro caso: 8:00–9:00, 9:00–10:30, 9:15–9:45, 10:00–11:00. Ordenadas por término: 8:00–9:00, 9:15–9:45, 9:00–10:30, 10:00–11:00. O guloso aceita 8:00–9:00, aceita 9:15–9:45 (9:15 ≥ 9:00), rejeita 9:00–10:30 (9:00 < 9:45) e aceita 10:00–11:00 (10:00 ≥ 9:45). O resultado é **3 reservas**, que é também o máximo possível.

O gabarito do enunciado (2) está incorreto: a reserva das 10:00 só seria incompatível com as escolhidas se a escolha incluísse 9:00–10:30 (que termina depois das 10:00), o que não é o caso da solução gulosa por término.

## C-D4 Mergesort
- Para 5 elementos ocorrem **4 intercalações**: [9 7 5] [3 1] → [9 7] [5] e [3] [1]; intercala-se [9 7], depois [9 7]+[5], depois [3]+[1], e por fim as duas metades.
- Para n elementos ocorrem **n − 1 intercalações** (árvore binária de divisões com n folhas tem n − 1 nós internos).

## C-D5 Quicksort com contadores
- v1 = 55 44 22 11 66 33: 6 trocas e 5 partições.
- v2 = 11 22 33 44 55 66 (já ordenado): 3 trocas e 3 partições.
- Com o pivô no elemento do meio, o vetor já ordenado é o melhor caso: cada partição divide o trecho ao meio, a recursão tem profundidade ≈ log n e as trocas são apenas i == j autotrocas do pivô. O experimento não revela o pior caso, porque ele depende da escolha do pivô: com o primeiro (ou último) elemento como pivô, um vetor já ordenado geraria n − 1 partições desbalanceadas e custo O(n²). O pior caso ocorre quando o pivô é sempre o menor ou o maior elemento do trecho.

## C-F3 Incremento (passagem por valor)
Foi impresso 5 porque `incrementa` altera uma cópia. O parâmetro formal x é uma variável local da função, criada na pilha com o valor de n copiado na chamada; `x++` muda essa variável, que deixa de existir no retorno, e n na main não é tocado.

## C-R5 Contagem de chamadas do Fibonacci
- (a) O número de chamadas cresce exponencialmente: 177, 1973 e 21891 para n = 10, 15, 20 (≈ 2·fib(n+1) − 1, isto é, cerca de 1,618^n).
- (b) O subproblema recalculado mais vezes é fib(1) (junto de fib(0)); os casos base das folhas da árvore são os mais repetidos.
- (c) A programação dinâmica guarda o resultado de cada subproblema (memoization ou tabulação) e o reutiliza, de modo que cada fib(k) é calculado uma única vez, tornando o custo linear, O(n).
