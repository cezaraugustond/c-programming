# AULA 9

## Operadores de Incremento e Decremento:

### 1. Incremento (`++`)

- Adiciona **1** ao valor da variável.
- Substitui `x = x + 1`.

### 2. Decremento (`-`)

- Subtrai **1** do valor da variável.
- Substitui `x = x - 1`.

---

### Exemplo:

```c
#include <stdio.h>

int main() {
    int x = 10, y = 10;

    x++;  // Incremento pós-fixo (x = x + 1)
    ++y;  // Incremento pré-fixo (y = y + 1)

    printf("x = %d \n", x);  // x = 11
    printf("y = %d \n", y);  // y = 11

    x--;  // Decremento pós-fixo (x = x - 1)
    --y;  // Decremento pré-fixo (y = y - 1)

    printf("x = %d \n", x);  // x = 10
    printf("y = %d \n", y);  // y = 10

    return 0;
}

```

---

## Pré-incremento / Pré-decremento

- **O incremento/decremento ocorre primeiro**, depois a variável é usada na expressão.

```c
#include <stdio.h>

int main() {
    int x = 10, y;

    y = ++x;  // pré-incremento: x = x + 1 → y recebe x

    printf("x = %d \n", x);  // x = 11
    printf("y = %d \n", y);  // y = 11

    return 0;
}

```

---

## Pós-incremento / Pós-decremento

- **A variável é usada na expressão primeiro**, depois ocorre o incremento/decremento.

```c
#include <stdio.h>

int main() {
    int x = 10, y;

    y = x++;  // pós-incremento: y recebe x → x = x + 1

    printf("x = %d \n", x);  // x = 11
    printf("y = %d \n", y);  // y = 10

    return 0;
}

```

---

## Resumo

| Operador | Efeito | Exemplo | Resultado |
| --- | --- | --- | --- |
| `++x` | Pré-incremento | y = ++x; | x incrementa **antes** de atribuir a y |
| `x++` | Pós-incremento | y = x++; | y recebe x **antes** do incremento |
| `--x` | Pré-decremento | y = --x; | x decrementa **antes** de atribuir a y |
| `x--` | Pós-decremento | y = x--; | y recebe x **antes** do decremento |

---

**Dicas importantes:**

1. Use **pré** quando precisar que o valor já seja alterado antes de usar na expressão.
2. Use **pós** quando precisar que o valor atual seja usado antes de incrementar ou decrementar.
3. Fora de expressões complexas, `x++` e `++x` produzem o mesmo efeito em **linhas isoladas**.

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que demonstre o uso dos operadores de incremento em C. O programa deve declarar duas variáveis inteiras, aplicar o operador de pós-incremento em uma delas e o operador de pré-incremento na outra, e em seguida exibir os valores das variáveis após os incrementos.
- [Prática 2](./pratica2.c) Desenvolva um algoritmo que demonstre o uso dos operadores de decremento em C. O programa deve declarar duas variáveis inteiras, aplicar o operador de pós-decremento em uma delas e o operador de pré-decremento na outra, e em seguida exibir os valores das variáveis após os decrementos.
- [Prática 3](./pratica3.c) Desenvolva um algoritmo que demonstre o uso do operador de pré-incremento em C. O programa deve declarar duas variáveis inteiras, aplicar o operador de pré-incremento a uma variável e atribuir o resultado a outra variável. Em seguida, o programa deve exibir os valores das duas variáveis após o incremento.
- [Prática 4](./pratica4.c) Desenvolva um algoritmo que demonstre o uso do operador de pós-incremento em C. O programa deve declarar duas variáveis inteiras, aplicar o operador de pós-incremento a uma variável e atribuir o valor original a outra variável. Em seguida, o programa deve exibir os valores das duas variáveis, mostrando a diferença entre o valor antes e depois do incremento.