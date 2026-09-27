# Lista A — respostas às perguntas dos enunciados

## A-R1 Fatorial
Solução trivial: `if (n == 0) return 1;`. Solução geral: `return n * fat(n - 1);`.

## A-R5 Torres de Hanói
- (a) n=1: 1 movimento; n=2: 3 movimentos; n=3: 7 movimentos.
- (b) Mínimo de movimentos: 2^n − 1 (H(n) = 2·H(n−1) + 1, H(0) = 0).
- (c) Pilha de execução de hanoi(2, 'A', 'C', 'B'), de baixo para cima:
  ```
  hanoi(2, A, C, B)          imprime "A -> B" depois de voltar de hanoi(1, A, B, C)
    hanoi(1, A, B, C)        chama hanoi(0, ...) (retorna), imprime "A -> B", chama hanoi(0, ...) (retorna)
  imprime "A -> C"
    hanoi(1, B, C, A)        chama hanoi(0, ...) (retorna), imprime "B -> C", chama hanoi(0, ...) (retorna)
  ```
  Saída: A -> B, A -> C, B -> C. A profundidade máxima da pilha é n + 1 quadros (aqui 3: hanoi(2), hanoi(1), hanoi(0)).

## A-F3 Dobro (passagem por valor)
Não: n continua com o valor original. Na passagem por valor a função recebe uma cópia temporária do argumento (o parâmetro x é uma variável local nova); alterações em x afetam só a cópia, que deixa de existir quando a função retorna.

## A-F4 Troca por referência
Os endereços são necessários porque a função precisa saber onde estão as variáveis da main para alterá-las através dos ponteiros. Se a e b fossem passados por valor, a função trocaria apenas cópias locais e, ao voltar, a e b continuariam 10 e 20.

## A-G3 Mochila fracionária
Respondida em [algoritmos-gulosos/A-G3.md](algoritmos-gulosos/A-G3.md).

## A-D5 Quicksort
- (a) Não. O quicksort faz todo o trabalho na etapa de divisão (partição): depois das duas chamadas recursivas o vetor já está ordenado no lugar, então não há etapa de combinação (diferente do mergesort, que precisa de intercalação).
- (b) Vetor já ordenado com pivô sempre no elemento mediano: o desempenho é o melhor caso, O(n log n), pois cada partição divide o trecho ao meio. Com o primeiro elemento como pivô, um vetor ordenado é o pior caso: cada partição separa 1 elemento do resto, a recursão tem profundidade n e o custo é O(n²).
- Observação: o vetor impresso na primeira partição do enunciado (33 11 22 44 66 55) não corresponde ao algoritmo descrito; a execução real imprime 11 22 44 55 66 33, depois 11 22 44 55 66 33, 11 22 44 33 66 55, 11 22 33 44 66 55 e 11 22 33 44 55 66.

## A-FB5 Mochila booleana recursiva
São testados 2^n subconjuntos (cada item entra ou não). Só é viável para n pequeno porque o tempo cresce exponencialmente: n = 30 já são mais de um bilhão de subconjuntos e n = 60 é inviável.

## A-P4 Mochila com PD
Complexidade O(n · c) (tempo e memória da tabela), contra O(2^n) da força bruta. É pseudo-polinomial: depende do valor numérico da capacidade, mas para c moderado é muito mais rápida que a enumeração de subconjuntos.
- Observação: no terceiro caso de teste (c = 4, pesos 4 5 6, valores 5 6 7) só o item de peso 4 cabe; o valor correto é 5, não 7.
