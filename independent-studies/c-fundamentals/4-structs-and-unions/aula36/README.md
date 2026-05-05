# AULA 36

## **Inicialização de uma `struct`**

- Uma `struct` pode ser inicializada de diferentes formas:

---

### 🔹 1. Atribuindo campo a campo

- Cada membro é preenchido separadamente, usando o operador `.` (ponto).

```c
struct pessoa p1;

strcpy(p1.nome, "Cezar");   // para strings, usar strcpy
strcpy(p1.rua, "Avenida 3");
p1.idade = 23;
p1.numero = 965;

```

✅ **Vantagem:** mais legível, especialmente quando a struct tem muitos campos.

⚠️ **Observação:** strings **não podem** ser atribuídas diretamente (`p1.nome = "Cezar";` é inválido).

---

### 🔹 2. Inicialização como lista de valores

- Você pode inicializar a struct já no momento da declaração, **respeitando a ordem em que os campos foram definidos** dentro da struct.

```c
struct pessoa p2 = {"Bianka", "Avenida 45", 22, 43};

```

⚠️ A ordem dos valores precisa seguir exatamente a ordem dos campos declarados.

✅ Campos que não forem preenchidos recebem valores padrão:

- `0` para inteiros e floats
- `""` (string vazia) para vetores de caracteres

Exemplo:

```c
struct pessoa p3 = {"Augusto"};
// nome = "Augusto", rua = "", idade = 0, numero = 0

```

---

## **Atribuição entre `structs`**

- É possível copiar os valores de uma struct inteira para outra, **desde que sejam do mesmo tipo**.

```c
struct pessoa p1 = {"Cezar", "Av. 3", 23, 965};
struct pessoa p2;

p2 = p1;   // todos os campos de p1 são copiados para p2

```

✅ **Pontos positivos:**

- Muito mais simples do que copiar campo a campo.
- Preserva todas as informações.

⚠️ **Limitação:** só funciona se ambas as structs forem do **mesmo tipo**.

Se forem de tipos diferentes (mesmo que os campos sejam iguais), a atribuição **não é permitida**.

---

# Práticas:

1. Desenvolva um algoritmo que **utilize estruturas (`struct`) para armazenar informações de uma pessoa**. O programa deve **demonstrar diferentes formas de inicialização de variáveis do tipo `struct` (atribuição campo a campo, inicialização direta e cópia de uma `struct` para outra)**, exibindo em seguida os dados armazenados em cada uma das variáveis.