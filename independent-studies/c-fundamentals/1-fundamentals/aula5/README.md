# AULA 5

## Operador de Atribuição (`=`)

- O operador de atribuição é usado para **atribuir um valor a uma variável**:
- `=` → operador de **atribuição**.

```c
variavel = expressao;

```

- A **expressão** pode ser um valor direto, outra variável ou um cálculo.
- Pode ser usada para **atribuções simples ou encadeadas**.

---

### 🔹 Formas de atribuição

### 1️⃣ Atribuição simples

```c
#include <stdio.h>

int main() {
    int x = 5, y, z;
    y = x;       // y recebe o valor de x
    z = y + 10;  // z recebe o valor de y + 10
    return 0;
}

```

✅ Observação: Sempre que o lado direito for compatível com o tipo da variável, a atribuição ocorre normalmente.

---

### 2️⃣ Atribuição encadeada

```c
#include <stdio.h>

int main() {
    int x, y, z;
    x = y = z = 10;  // todos recebem 10
    return 0;
}

```

- O operador `=` é **associativo da direita para a esquerda**.
- Primeiro `z = 10`, depois `y = z`, depois `x = y`.

---

### 3️⃣ Atribuição entre tipos diferentes (char e int)

```c
#include <stdio.h>

int main() {
    int x = 97;
    char ch1, ch2 = 'A';

    ch1 = x;  // converte o valor 97 para o caractere 'a' na tabela ASCII
    printf("ch1 = %c \n", ch1);

    x = ch2;  // converte o caractere 'A' para seu valor ASCII (65)
    printf("x = %d \n", x);

    return 0;
}

```

✅ Observação: Em C, é possível **atribuir entre tipos compatíveis**, com conversão automática (implícita).

- `int → char` → pode truncar valores se o número for maior que 255.
- `char → int` → converte para o valor da tabela ASCII.

---

### 4️⃣ Atribuição entre tipos numéricos diferentes (int e float)

```c
#include <stdio.h>

int main(){
    int x = 833;
    float f1, f2 = 5.25;

    f1 = x;  // int para float → ok, f1 = 833.0
    printf("f1 = %f \n", f1);

    x = f2;  // float para int → parte decimal é descartada
    printf("x = %d \n", x);

    return 0;
}

```

✅ Observação:

- Quando atribuímos **float → int**, a parte decimal é **perdida** (truncamento).
- Para conversões explícitas, podemos usar **type casting**:
    
    ```c
    x = (int) f2;
    
    ```
    

---

# Práticas:

1. Desenvolva um algoritmo que demonstre o uso de operadores de atribuição. O programa deve declarar variáveis inteiras, atribuir valores entre elas utilizando o operador de atribuição e realizar uma operação de adição em uma das variáveis. Em seguida, o programa deve exibir os valores de todas as variáveis no console.
2. Desenvolva um algoritmo que utilize operadores de atribuição encadeados. O programa deve declarar três variáveis inteiras e atribuir a elas o mesmo valor utilizando uma única expressão. Em seguida, o programa deve exibir os valores das três variáveis no console.
3. Desenvolva um algoritmo que demonstre atribuições entre variáveis de tipos diferentes. O programa deve declarar uma variável inteira e duas variáveis do tipo caractere, atribuindo o valor da variável inteira a uma variável caractere e o valor de uma variável caractere à variável inteira. Em seguida, o programa deve exibir o caractere correspondente ao valor inteiro e o valor inteiro correspondente ao caractere, mostrando a relação com a tabela ASCII.
4. Desenvolva um algoritmo que demonstre atribuições entre variáveis de tipos numéricos diferentes. O programa deve declarar uma variável inteira e duas variáveis de ponto flutuante, atribuindo o valor da variável inteira a uma variável float e o valor de uma variável float à variável inteira. Em seguida, o programa deve exibir o valor da variável float e o valor inteiro obtido a partir do float, mostrando que a parte fracionária é descartada na conversão para inteiro.