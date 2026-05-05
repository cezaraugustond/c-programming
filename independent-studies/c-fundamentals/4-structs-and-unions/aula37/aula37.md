# **Arrays de `struct` em C**

- Como uma `struct` é um tipo de dado definido pelo programador, ela pode ser usada dentro de **arrays**, assim como acontece com `int`, `float`, `char`, etc.
- Isso permite armazenar **vários registros** do mesmo tipo de forma organizada.

---

## 🔹 Exemplo prático: cadastro de pessoas

```c
#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

int main() {
    const int TAMANHO = 2; // quantidade de pessoas
    struct pessoa p[TAMANHO]; // array de struct

    // Leitura dos dados
    for (int i = 0; i < TAMANHO; i++) {
        printf("-------------------- \n");
        getchar(); // limpa buffer do scanf

        printf("Nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0'; // remove \n

        printf("Idade: ");
        scanf("%d", &p[i].idade);
        getchar();

        printf("Rua: ");
        fgets(p[i].rua, sizeof(p[i].rua), stdin);
        p[i].rua[strcspn(p[i].rua, "\n")] = '\0';

        printf("Numero: ");
        scanf("%d", &p[i].numero);
    }

    // Exibição dos dados
    printf("\n===== REGISTROS =====\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("-> Pessoa %d:\n", i+1);
        printf("Nome: %s\n", p[i].nome);
        printf("Idade: %d anos\n", p[i].idade);
        printf("Rua: %s\n", p[i].rua);
        printf("Numero: %d\n", p[i].numero);
    }

    return 0;
}

```

---

## 🔹 Conceitos importantes

1. **Declaração de array de struct**
    
    ```c
    struct pessoa p[5]; // vetor de 5 structs do tipo pessoa
    
    ```
    
2. **Acesso aos campos**
    
    Para acessar um campo, usamos os colchetes `[]` para escolher o índice, e depois o operador ponto `.` para acessar o campo:
    
    ```c
    p[0].idade = 25;
    strcpy(p[0].nome, "Ana");
    
    ```
    
    > ✅ Ordem correta: índice do array primeiro → depois o ponto da struct.
    > 
3. **Combinação poderosa:**
    - Arrays + structs = forma eficiente de lidar com **vários registros complexos**.
    - Evita criar várias variáveis soltas (`nome1`, `nome2`, `idade1`, etc.).
    - Permite percorrer todos os registros com **laços `for`**, simplificando a manipulação.

---

## 🔹 Vantagens

✔ Organização: os dados ficam agrupados de forma lógica.

✔ Escalabilidade: basta mudar o tamanho do array (`TAMANHO`) para cadastrar mais registros.

✔ Facilidade de manipulação com laços de repetição.

⚠ Cuidado com:

- **Buffer de entrada:** sempre limpar o `\n` do `fgets`.
- **Espaço de memória:** arrays muito grandes podem consumir bastante memória na stack.

---

# Prática:

1. Desenvolva um algoritmo que utilize **um array de estruturas** para armazenar informações de pessoas. O programa deve permitir o cadastro de múltiplos registros, solicitando ao usuário os dados de cada pessoa (nome, idade, rua e número da residência) e, ao final, exibir todos os registros armazenados com seus respectivos valores formatados.