# AULA 7

## Operações Aritméticas em C

- C possui operadores aritméticos básicos:

| Operador | Operação | Observação |
| --- | --- | --- |
| `+` | Soma | Pode somar números ou caracteres (`char`) |
| `-` | Subtração | - |
| `*` | Multiplicação | - |
| `/` | Divisão | Se ambos operandos forem inteiros, o resultado será **inteiro** (truncando a parte decimal) |
| `%` | Resto da divisão | Só funciona com **valores inteiros** |

---

### 🔹 Exemplo 1: Soma entre `char`

```c
#include <stdio.h>

int main() {
    char ch1, ch2 = '0', ch3 = 'A';

    ch1 = ch2 + ch3;  // soma os valores ASCII de '0' (48) + 'A' (65) = 113
    printf("ch1 = %c \n", ch1);  // Exibe o caractere equivalente ao valor 113 na tabela ASCII

    return 0;
}

```

✅ Observações:

- Em C, **caracteres são armazenados como números inteiros (códigos ASCII)**.
- Operações aritméticas entre `char` **retornam um número inteiro**, mas podem ser armazenadas em `char` se couberem no tipo.

---

### 🔹 Exemplo 2: Divisão entre inteiros e float

```c
#include <stdio.h>

int main() {
    int x1 = 9;
    float f1, f2;

    f1 = x1 / 2;     // 9 / 2 = 4 (inteiro), depois convertido para float → 4.0
    printf("f1 = %f \n", f1);

    f2 = x1 / 2.0;   // 9 / 2.0 → 4.5 (divisão real)
    printf("f2 = %f \n", f2);

    return 0;
}

```

✅ Observações:

- Se **ambos os operandos são inteiros**, o resultado da divisão será **truncado para inteiro**.
- Para obter **resultado real (float/double)**, **pelo menos um dos operandos deve ser float/double**.
- Alternativa usando **type casting**:

```c
f2 = (float)x1 / 2;  // converte x1 para float antes da divisão

```

---

### 🔹 Resumo e dicas

1. `%` (resto) → só funciona com **int**.
    
    ```c
    int r = 9 % 2;  // r = 1
    
    ```
    
2. Operações entre `char` → manipulam os valores **ASCII**.
3. Divisão entre inteiros → resultado inteiro.
4. Para resultado decimal → use **float, double ou type casting**.

---

# Práticas:

1. Desenvolva um algoritmo que utilize operadores aritméticos com diferentes tipos de variáveis. O programa deve declarar variáveis inteiras, de ponto flutuante e caracteres, realizar operações de adição entre variáveis do mesmo tipo e, no caso dos caracteres, somar seus valores ASCII. Em seguida, o programa deve exibir os resultados das operações, mostrando o valor inteiro, o valor float e o caractere correspondente à soma dos valores ASCII.
2. Desenvolva um algoritmo que demonstre o uso de operadores aritméticos com divisões inteiras e reais. O programa deve declarar variáveis inteiras e de ponto flutuante, realizar uma divisão inteira entre números inteiros, atribuindo o resultado a uma variável inteira e a uma variável float, e realizar uma divisão real utilizando pelo menos um operando de ponto flutuante. Em seguida, o programa deve exibir os resultados das divisões, mostrando a diferença entre divisão inteira e divisão real.