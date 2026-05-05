## Array (Vetor)

- Um **array** é uma estrutura de dados que armazena **vários elementos do mesmo tipo** (inteiros, reais, caracteres etc.) em posições sequenciais da memória.
- Cada elemento do array é acessado por um **índice**, que geralmente começa em **0**.
- Em C, um array é **estático**, ou seja, o tamanho dele precisa ser definido em tempo de compilação (salvo em casos específicos com alocação dinâmica).

---

## Características principais:

1. **Tipo único:** 
    - Todos os elementos devem ser do mesmo tipo (`int`, `float`, `char`, etc.).
2. **Acesso por índice:**
    - O **primeiro elemento** fica no índice `0`.
    - Se o vetor tem tamanho `n`, o último elemento está no índice `n-1`.
3. **Tamanho fixo:** normalmente você precisa definir o tamanho do vetor ao declarar.
    
    ```c
    int numeros[5]; // vetor de 5 inteiros
    
    ```
    
4. **Memória sequencial:** 
    - Os elementos são armazenados lado a lado na memória, o que torna o acesso muito rápido.
5. **Inicialização:** 
    - Pode atribuir valores já na declaração:
        
        ```c
        int numeros[5] = {10, 20, 30, 40, 50};
        
        ```
        
    - Deixar o compilador contar:
        
        ```c
        int numeros[] = {10, 20, 30, 40, 50}; // tamanho será 5
        
        ```
        

---

## ⚡ Limitações importantes:

- **Tamanho fixo:** uma vez declarado, você não pode aumentar ou diminuir o array.
- **Necessário definir o tamanho:** se não inicializar os valores, você precisa dizer quantos elementos cabem.
- **Sem verificação automática de limites:** se você acessar `numeros[10]` em um vetor de tamanho 5, o programa pode dar erro ou comportamento inesperado.

---

# Práticas:

1. Desenvolva um algoritmo que calcule a média de notas de um conjunto de alunos. O programa deve solicitar ao usuário a digitação de três notas para cada um dos três alunos, armazenando os valores em um array. Após o preenchimento, o programa deve calcular a média de cada aluno, salvar os resultados em outro array e, por fim, exibir as médias individuais de todos os alunos na tela.
2. Desenvolva um algoritmo que calcule a média das notas de um grupo de alunos. O programa deve solicitar ao usuário a digitação das notas de cinco alunos, armazenando os valores em um array. Em seguida, deve calcular a média geral da turma, exibir esse resultado e, por fim, apresentar apenas os alunos que obtiveram nota acima da média, mostrando seus respectivos valores.