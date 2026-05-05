## Declaração de Constantes em C

- Uma **constante** é um valor **que não pode ser alterado durante a execução do programa**.
- Ao declarar uma constante, **é obrigatório atribuir um valor inicial**.

---

### 🔹 Formas de declarar uma constante

### 1️⃣ Usando `const`

```c
const tipo nome_da_constante = valor;

```

Exemplo:

```c
#include <stdio.h>

int main() {
    const int numero = 8;   // constante inteira
    int soma = numero + 1;

    printf("Constante = %d \n", numero);
    printf("Soma = %d \n", soma);

    // ERRO: não é permitido alterar o valor de uma constante
    // numero = 10;

    return 0;
}

```

✅ Observações:

- A constante **fica armazenada na memória**.
- Boa prática para **tipos de dados específicos**, como `int`, `float`, `char` etc.
- Tentativa de alterar o valor resulta em **erro de compilação**.

---

### 2️⃣ Usando `#define`

```c
#define NOME_DA_CONSTANTE valor

```

Exemplo:

```c
#include <stdio.h>
#define PI 3.1415   // define PI como 3.1415

int main() {
    float raio = 5, perimetro;

    perimetro = 2 * raio * PI;
    printf("Perímetro do círculo = %f\n", perimetro);

    return 0;
}

```

✅ Observações:

- `#define` é **uma substituição de texto feita pelo compilador**.
- Durante a compilação, **todas as ocorrências do nome da constante são substituídas pelo valor**.
- Não ocupa espaço de memória por si só.
- Não tem tipo definido; o compilador **substitui o valor literalmente**.

---

### 🔹 Diferenças entre `const` e `#define`

| Característica | `const` | `#define` |
| --- | --- | --- |
| Tipo de dado | Sim (int, float, char…) | Não, é texto literal |
| Armazena na memória | Sim | Não |
| Verificação de tipo | Sim | Não |
| Pode ser usado em ponteiros | Sim | Não diretamente |
| Erro ao alterar valor | Compilação | N/A (não pode alterar, pois é substituído) |

---

### 🔹 Resumo

- **Constante** = valor fixo que **não muda durante o programa**.
- `const` → constante **com tipo**, ocupa memória.
- `#define` → constante **sem tipo**, substituição de texto durante a compilação.
- Use `const` quando quiser segurança de tipo; use `#define` para macros simples ou valores que não precisam de memória.

---

# Práticas:

1. Desenvolva um algoritmo que demonstre o uso de constantes. O programa deve declarar uma constante inteira, realizar uma operação de soma usando essa constante e armazenar o resultado em outra variável. Em seguida, o programa deve exibir o valor da constante e o resultado da soma no console, destacando que o valor da constante não pode ser alterado.
2. Desenvolva um algoritmo que calcule o perímetro de um círculo usando uma constante definida com `#define`. O programa deve declarar uma constante para o valor de π usando `#define`, definir o valor do raio do círculo, calcular o perímetro utilizando a fórmula: 2*raio*pi, em seguida, exibir o resultado no console.