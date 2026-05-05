# AULA 3

## Comando `printf()` em C

- `printf()` é usado para **escrever mensagens no console**.
    - Ele pode exibir **textos fixos** e também valores de **variáveis**, usando **especificadores de formato**.

---

## Sintaxe geral

```c
printf("texto %formato", variavel);

```

- Tudo que estiver **entre aspas duplas** (`" "`) aparece como texto.
- Os **especificadores de formato** (`%d`, `%c`, `%f`, etc.) indicam **como o valor da variável será exibido**.
- As variáveis são passadas **depois da vírgula**, na mesma ordem dos formatos.

---

### Especificadores mais usados

| Especificador | Tipo de dado exibido | Exemplo |
| --- | --- | --- |
| `%c` | caractere (`char`) | `'A'`, `'c'` |
| `%d` | número inteiro (`int`) | `10`, `-23` |
| `%f` | número real (`float`) | `3.14`, `1.77` |
| `%lf` | número real com `double` | `3.14159265` |

**Importante:**

- Por padrão, `%f` mostra **6 casas decimais**.

---

### Exemplo prático

```c
#include <stdio.h>

int main() {
    char letra = 'c';
    int idade = 23;
    float altura = 1.77;

    printf("Letra: %c \n", letra);                 // Exibe a letra
    printf("Valor ASCII da letra 'c': %d \n", letra); // Mostra código inteiro do caractere
    printf("Idade: %d \n", idade);                 // Exibe número inteiro
    printf("Altura: %f \n", altura);               // Exibe número real (float)
    printf("Idade: %d e Altura: %f \n", idade, altura); // Exibe múltiplos valores

    return 0;
}

```

---

### Ajustando casas decimais

Você pode **controlar quantas casas decimais** aparecem:

```c
printf("Altura com 2 casas: %.2f \n", altura);
printf("Altura com 4 casas: %.4f \n", altura);

```

Saída:

```
Altura com 2 casas: 1.77
Altura com 4 casas: 1.7700

```

# Práticas:

1. Desenvolva um algoritmo que trabalhe com diferentes tipos de variáveis. O programa deve declarar uma variável do tipo caractere, uma do tipo inteiro e uma do tipo ponto flutuante, atribuindo valores a elas. Em seguida, o programa deve exibir a letra armazenada e o seu valor ASCII, a idade e a altura, além de apresentar a idade e a altura juntas, com a altura formatada com duas casas decimais.