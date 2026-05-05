# AULA 8

## Comentários em C

- Comentários servem para **explicar o código**, **anotar ideias**, ou **desativar trechos temporariamente**.
- Eles **não são executados pelo compilador**.

---

### 1.Comentário de linha

- Usa `//` no início da linha.
- Tudo que estiver após `//` na mesma linha **é ignorado pelo compilador**.

```c
#include <stdio.h>

int main() {
    int x = 80;

    // x = x + 1;  // Esta linha está comentada e não será executada

    printf("x = %d \n", x);
    printf("FIM DO PROGRAMA \n");

    return 0;
}

```

**Observações:**

- Ideal para **comentários curtos** ou **anotações rápidas**.

---

### 2. Comentário de bloco

- Começa com `/*` e termina com `*/`.
- Tudo que estiver entre `/* */` será ignorado pelo compilador, mesmo em **várias linhas**.

```c
#include <stdio.h>

int main() {
    /*
    int x = 10;
    x = x + 1;
    printf("x = %d \n", x);
    */

    printf("FIM DO PROGRAMA \n");

    return 0;
}

```

**Observações:**

- Útil para **desativar blocos de código temporariamente**.
- Bom para **comentários mais longos ou explicações detalhadas**.

---

## Resumo

| Tipo de comentário | Símbolo | Uso recomendado |
| --- | --- | --- |
| Linha | `//` | Comentários curtos, uma linha apenas |
| Bloco | `/* */` | Comentários longos ou múltiplas linhas |

---

**Dica:**

- Evite exagerar nos comentários **óbvios**.
- Use comentários para **explicar a lógica** ou **informações importantes** que não são evidentes no código.

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que demonstre o uso de comentários em C. O programa deve declarar uma variável inteira, incluir uma linha de código comentada que não será executada e, em seguida, exibir o valor da variável e uma mensagem indicando o fim do programa.
- [Prática 2](./pratica2.c) Desenvolva um algoritmo que demonstre o uso de comentários em bloco em C. O programa deve incluir um trecho de código comentado que não será executado e, em seguida, exibir apenas uma mensagem indicando o fim do programa.