# AULA 35

# **Struct em C**

- Uma **struct** (estrutura) permite **agrupar diferentes variáveis** sob um mesmo nome, podendo ser de **tipos distintos**.
- É usada para **empacotar dados relacionados** em um único bloco lógico.

---

### 🔹 Forma geral

```c
struct nome_struct {
    tipo1 identificador1;
    tipo2 identificador2;
    ...
    tipoN identificadorN;
};

```

> ⚠️ Atenção: sempre finalize com ; após fechar a definição.
> 

---

### 🔹 Onde declarar?

- **Fora do `main`** → pode ser usada em qualquer função do programa.
- **Dentro do `main`** → só pode ser usada no escopo local do `main`.

---

### 🔹 Por que usar?

- Sem struct: cada variável precisa ser declarada separadamente.
- Com struct: um só identificador agrupa os campos, facilitando a organização.

Exemplo:

```c
// Sem struct
char nome1[50], nome2[50];
int idade1, idade2;

// Com struct
struct pessoa {
    char nome[50];
    int idade;
};
struct pessoa p1, p2;

```

---

### 🔹 Campos com nomes iguais em structs diferentes

Cada struct tem seu **próprio escopo de campos**.

```c
struct ponto2D { int x, y; };
struct ponto3D { int x, y, z; };

int main() {
    struct ponto2D p2;
    struct ponto3D p3;

    p2.x = 10;
    p3.x = 20;

    printf("p2.x = %d, p3.x = %d", p2.x, p3.x);
}

```

✅ Válido, pois `p2.x` e `p3.x` pertencem a tipos diferentes.

---

### 🔹 Como acessar os campos?

Usa-se o **operador `.`** (ponto):

```c
struct pessoa p;
p.idade = 31;

```

---

### 🔹 Strings em structs

- **Não é possível atribuir diretamente**:
    
    ```c
    p.nome = "Cezar";  // ❌ inválido
    
    ```
    
- É preciso usar funções da biblioteca `<string.h>` como `strcpy`:
    
    ```c
    strcpy(p.nome, "Cezar"); // ✅ válido
    
    ```
    

---

### 🔹 Exemplo completo

```c
#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50];
    char rua[50];
    int idade;
    int numero;
};

int main() {
    struct pessoa p;

    // Atribuição direta
    p.idade = 31;
    strcpy(p.rua, "Avenida 3 Poderes");

    // Leitura de dados
    printf("Numero: ");
    scanf("%d", &p.numero);
    getchar(); // limpa buffer do teclado

    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0'; // remove '\n'

    // Exibição
    printf("\n--- Dados da pessoa ---\n");
    printf("Nome: %s \n", p.nome);
    printf("Idade: %d \n", p.idade);
    printf("Rua: %s \n", p.rua);
    printf("Numero: %d \n", p.numero);

    return 0;
}

```

---

# Práticas:

1. Desenvolva um algoritmo que **armazene e exiba informações de uma pessoa utilizando uma estrutura (`struct`)**. O programa deve **definir uma estrutura contendo os campos nome, idade, rua e número**, atribuir valores fixos para alguns desses campos, **solicitar ao usuário a digitação do nome e do número da residência** e, ao final, **exibir todos os dados armazenados de forma organizada**.
2. Desenvolva um algoritmo que **utilize estruturas (`struct`) para representar pontos em 2D e 3D**. O programa deve **definir duas estruturas, sendo uma com os campos x e y (ponto no plano 2D) e outra com os campos x, y e z (ponto no espaço 3D)**. Em seguida, deve **solicitar ao usuário os valores das coordenadas correspondentes** e **exibir os pontos informados de forma organizada**.