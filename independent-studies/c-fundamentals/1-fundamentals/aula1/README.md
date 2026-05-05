# AULA 1

##  Estrutura básica de um programa em C

```c
#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <stdlib.h>  // Biblioteca padrão de utilidades

int main() {
    printf("Hello, World!"); // Exibe uma mensagem na tela
    return 0; // Indica que o programa terminou com sucesso
}

```

---

## Explicação dos componentes

1. **`#include <stdio.h>`**
    - Inclui a **Standard Input Output Library**.
    - Permite usar funções como `printf()` (escrever na tela) e `scanf()` (ler do teclado).
2. **`#include <stdlib.h>`**
    - Inclui a **Standard Library**.
    - Fornece funções utilitárias, como:
        - `malloc()` e `free()` → manipulação de memória dinâmica.
        - `system("pause")` ou `exit()` → controle de execução do programa.
3. **`int main()`**
    - Ponto de entrada do programa: **é sempre a primeira função a ser executada**.
    - O `int` indica que a função retorna um número inteiro ao sistema operacional.
    - Por convenção, retorna **0 quando o programa finaliza corretamente**.
4. **`printf("Hello, World!");`**
    - Exibe mensagens na tela.
    - Faz parte da biblioteca `<stdio.h>`.
5. **`return 0;`**
    - Retorna **0** para indicar que o programa executou sem erros.
    - Outros valores podem indicar erros específicos.

# Práticas:

1.(./pratica1.) Desenvolva um algoritmo que exiba uma mensagem na tela. O programa deve mostrar o texto `"Hello World!"` no console.