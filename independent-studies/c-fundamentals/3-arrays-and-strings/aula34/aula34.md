# Strings: Contando Vogais

---

### 1. **Uso de `if` com todas as condições possíveis**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[30] = "Linguagem C";
    int tamanho = strlen(str), i, contador = 0;

    for (i = 0; i < tamanho; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
        str[i] == 'O' || str[i] == 'U') {
            contador++;
        }
    }

    printf("Na string tem %d vogais.\n", contador);
    return 0;
}

```

🔸 **Lógica usada**

- Percorre a string caracter por caracter.
- Compara cada caracter com **todas as vogais possíveis** (maiúsculas e minúsculas) em uma única condição `if`.
- Se for uma vogal, incrementa o contador.

✅ **Pontos positivos**

- Código simples e direto.
- Fácil de entender para quem está começando.

❌ **Pontos negativos**

- Condição `if` fica extensa e pouco elegante.
- Difícil de manter se precisar incluir mais caracteres.
- Verificações redundantes podem afetar desempenho em strings grandes.

---

### 2. **Uso de uma string contendo as vogais (maiúsculas e minúsculas)**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[30] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU";
    int j, i, contador = 0;
    int tamanho1 = strlen(str);
    int tamanho2 = strlen(vogais);

    for (i = 0; i < tamanho1; i++) {
        for (j = 0; j < tamanho2; j++) {
            if (str[i] == vogais[j]) {
                contador++;
                break; // já encontrou, não precisa seguir
            }
        }
    }

    printf("Na string tem %d vogais.\n", contador);
    return 0;
}

```

🔸 **Lógica usada**

- Define uma string com todas as vogais (`"aeiouAEIOU"`).
- Para cada caracter da string original, percorre a lista de vogais e verifica se há igualdade.
- Se encontrar, incrementa o contador e usa `break` para parar a busca (economizando comparações desnecessárias).

✅ **Pontos positivos**

- Código mais organizado e elegante.
- Fácil de alterar ou expandir (basta mudar a string `vogais`).
- O uso do `break` evita processamento desnecessário.
- O `break` evita comparações desnecessárias.

❌ **Pontos negativos**

- Levemente mais complexo que o primeiro (usa dois `for`).
- Continua fazendo várias comparações até encontrar ou descartar o caractere.

---

### 3. **Uso de `tolower` para padronizar minúsculas + string de vogais**

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[30] = "Linguagem C";
    char vogais[6] = "aeiou";
    int tamanho1 = strlen(str);
    int tamanho2 = strlen(vogais);
    int i, j, contador = 0;

    // Converte toda a string para minúsculas
    for (i = 0; i < tamanho1; i++) {
        str[i] = tolower(str[i]);
    }

    // Agora só compara com vogais minúsculas
    for (i = 0; i < tamanho1; i++) {
        for (j = 0; j < tamanho2; j++) {
            if (str[i] == vogais[j]) {
                contador++;
                break;
            }
        }
    }

    printf("Na string tem %d vogais.\n", contador);
    return 0;
}

```

🔸 **Lógica usada**

- Usa `tolower` (biblioteca `<ctype.h>`) para converter toda a string em minúscula.
- Com isso, basta ter uma string com **vogais minúsculas**.

✅ **Pontos positivos**

- Código mais limpo que a versão anterior.
- Reduz a quantidade de caracteres necessários na lista de vogais.
- Boa prática: padronizar para maiúscula/minúscula antes de comparar.

❌ **Pontos negativos**

- Ainda tem dois `for` aninhados.
- Pequeno custo adicional para converter todos os caracteres.

---

### 4. **Versão otimizada com `strchr`**

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[30] = "Linguagem C";
    char vogais[6] = "aeiou";
    int i, contador = 0;
    int tamanho = strlen(str);

    for (i = 0; i < tamanho; i++) {
        if (strchr(vogais, tolower(str[i])) != NULL) {
            contador++;
        }
    }

    printf("Na string tem %d vogais.\n", contador);
    return 0;
}

```

🔸 **Lógica usada**

- Usa `tolower` para padronizar cada caractere.
- Usa `strchr` (da `<string.h>`) para verificar se o caractere está dentro da string `vogais`.
- Se o caractere da `str` existir em `vogais`, retorna um ponteiro (≠ `NULL`), senão retorna `NULL`

✅ **Pontos positivos**

- Código curto, limpo e fácil de ler.
- Usa função da biblioteca padrão, reduzindo a complexidade do `for` aninhado.
- Mais próximo de uma solução **profissional e idiomática** em C.

❌ **Pontos negativos**

- Menos didático para iniciantes que nunca viram `strchr`.

---

# 🔹 Comparação final

| Método | Clareza | Facilidade de manutenção | Desempenho | Boa prática |
| --- | --- | --- | --- | --- |
| `if` com todas condições | ⭐⭐⭐ | ⭐ | ⭐⭐ | Simples, mas pouco elegante |
| String com vogais (maiúsculas+minúsculas) | ⭐⭐⭐ | ⭐⭐⭐⭐ | ⭐⭐⭐ | Boa alternativa, mais clara |
| `tolower` + string de vogais | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | ⭐⭐⭐ | Boa prática, reduz redundância |
| `strchr` | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Recomendado em C profissional |

---

# Práticas:

1. Desenvolva um algoritmo que **conte a quantidade de vogais em uma string**. O programa deve **declarar uma string pré-definida, percorrer cada caractere e verificar, por meio de uma estrutura `if` contendo todas as condições possíveis para vogais maiúsculas e minúsculas, se o caractere é uma vogal**, acumulando a contagem e exibindo ao final o total de vogais encontradas na string.
2. Desenvolva um algoritmo que **conte a quantidade de vogais em uma string**. O programa deve **declarar uma string pré-definida e uma string contendo todas as vogais (maiúsculas e minúsculas), percorrer cada caractere da string principal e verificar se ele corresponde a alguma vogal usando a string de vogais**, acumulando a contagem e exibindo ao final o total de vogais encontradas.
3. Desenvolva um algoritmo que **conte a quantidade de vogais em uma string**. O programa deve **padronizar todos os caracteres da string para letras minúsculas usando a função `tolower` da biblioteca `<ctype.h>`, declarar uma string contendo todas as vogais em minúsculo, percorrer cada caractere da string principal e verificar se ele corresponde a alguma vogal, acumulando a contagem**. Ao final, o programa deve **exibir o total de vogais encontradas**.
4. Desenvolva um algoritmo que **conte quantas vezes um determinado caractere aparece em uma frase fornecida pelo usuário**. O programa deve **solicitar ao usuário a entrada de uma frase e do caractere a ser contado, percorrer a frase comparando cada caractere com o caractere informado e acumular a contagem**. Ao final, o programa deve **exibir a frase e o total de ocorrências do caractere informado**.