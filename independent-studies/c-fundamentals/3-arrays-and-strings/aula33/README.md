# AULA 33

# Invertendo Strings em C

- Uma **string em C** é um array de caracteres finalizado com `\0`.
- Inverter uma string significa **trocar a ordem dos caracteres**, de trás para frente.

---

## 🔹 1. Apenas imprimindo invertida

Aqui **não alteramos a string original**. Só usamos um laço que percorre a string de trás para frente.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Linguagem C";
    int tamanho = strlen(str) - 1; // último índice válido

    for (int i = tamanho; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

```

✅ Vantagem: Simples e rápido.

❌ Desvantagem: A string original continua na mesma ordem.

---

## 🔹 2. Criando uma nova string invertida

Aqui criamos uma **cópia invertida** em outra variável auxiliar (`str2`).

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Linguagem C";
    char str2[20]; // string invertida
    int i, j = 0;
    int tam = strlen(str) - 1;

    for (i = tam; i >= 0; i--) {
        str2[j] = str[i];
        j++;
    }
    str2[j] = '\0'; // não esquecer do terminador

    printf("str2 = %s \n", str2);
    return 0;
}

```

✅ Vantagem: Não altera a string original, útil se precisar das duas versões.

❌ Desvantagem: Usa memória extra (precisa de outro array).

---

## 🔹 3. Invertendo **a string original**

Aqui fazemos a troca "espelhada" dos caracteres **dentro da própria string**, sem usar array auxiliar.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Linguagem C";
    char c;
    int i, tam = strlen(str);

    for (i = 0; i < tam / 2; i++) {
        // troca o caractere da frente com o de trás
        c = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = c;
    }

    printf("str = %s \n", str);
    return 0;
}

```

✅ Vantagem: Mais eficiente (não usa memória extra).

✅ Boa prática em algoritmos de manipulação de strings.

❌ Desvantagem: A string original é modificada.

---

## 📌 Comparativo entre os métodos

| Método | Alteração da string original? | Usa memória extra? | Quando usar |
| --- | --- | --- | --- |
| **Impressão invertida** | ❌ Não | ❌ Não | Só quando precisa exibir invertida. |
| **Nova string invertida** | ❌ Não | ✅ Sim | Quando precisa da original e da invertida. |
| **Inversão no próprio array** | ✅ Sim | ❌ Não | Quando só precisa da string invertida. |

---

👉 Dica: Em algoritmos de manipulação, a **troca direta no próprio array (método 3)** costuma ser considerada a **mais eficiente**.

---

# Práticas:

1. Desenvolva um algoritmo que **exiba uma string invertida**. O programa deve **percorrer os caracteres de uma string armazenada previamente no código, imprimindo-os em ordem inversa**, sem solicitar entradas do usuário e exibindo a **palavra invertida** na tela.
2. Desenvolva um algoritmo que **realize a inversão de uma string utilizando uma string auxiliar para armazenar o resultado**. O programa deve **percorrer os caracteres de uma string previamente definida no código, copiando-os em ordem inversa para uma nova string** e exibindo a **string invertida** na tela.
3. Desenvolva um algoritmo que **realize a inversão de uma string diretamente em sua forma original, sem utilizar uma string auxiliar**. O programa deve **percorrer metade da string previamente definida no código, trocando os caracteres das extremidades até o centro**, e exibir a **string invertida** na tela.
4. Desenvolva um algoritmo que **verifique se uma palavra é um palíndromo**. O programa deve **solicitar ao usuário uma palavra (sem acento), converter todos os caracteres para minúsculos, gerar a versão invertida da palavra e comparar as duas strings**, exibindo se a palavra digitada **é ou não um palíndromo**.
5. Desenvolva um algoritmo que **verifique se uma frase é um palíndromo**. O programa deve **solicitar ao usuário a digitação de uma frase (sem acento), converter todos os caracteres para minúsculos, remover os espaços em branco, gerar a versão invertida da frase e comparar as duas versões resultantes**, exibindo se a frase digitada **é ou não um palíndromo**.