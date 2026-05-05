# AULA 31

## Strings em C

- Uma string é um **array de caracteres** que armazena uma sequência de caracteres adjacentes na memória. Pode representar **palavras ou frases**.

## Forma geral da declaração

```c
char nome_array[tamanho];

```


## Inicialização de Strings

1. **Caractere por caractere**, incluindo o `\0` que indica o **fim da string**:

```c
char palavra[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

```

- `\0` é obrigatório: indica onde a string termina.
- Sem ele, funções que manipulam strings podem ler lixo na memória.

2. **Usando aspas duplas** (mais comum e recomendado):

```c
char palavra[] = "Hello";

```

- O compilador adiciona automaticamente o `\0` ao final.
- Mais prático e legível.


## Acessando elementos individuais

- Cada caractere da string pode ser acessado pelo **índice**, começando em 0:

```c
printf("%c\n", palavra[0]); // H
palavra[0] = 'h';           // modifica para 'hello'

```


## Leitura de Strings

1. **Usando `scanf`**:

```c
char nome[50];
scanf("%s", nome);

```

- **Não usamos `&`** porque o nome da string já é **o endereço do primeiro elemento do array**.
- Limitação: lê **apenas até o primeiro espaço** (não captura frases completas).

2. **Usando `gets`** *(não recomendado em C moderno, inseguro)*:

```c
char frase[100];
gets(frase);

```

- Lê **toda a linha**, incluindo espaços, até apertar Enter.
- Problema: não há controle de tamanho → risco de **overflow**.

3. **Usando `fgets`** (recomendado):

```c
char frase[100];
fgets(frase, 100, stdin); // lê até 99 caracteres + \0

```

- Seguro, pois limita o tamanho da leitura.
- Mantém espaços e o Enter como parte da string.

---

## Observações 

- Strings são **arrays**, então você pode percorrer e manipular cada caractere.
- Sempre garanta que haja espaço para o `\0` no array.
- Prefira **aspas duplas** e **`fgets`** para manipulação segura de texto.

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que leia e exiba uma string. O programa deve solicitar ao usuário que digite um nome (ou texto de até 30 caracteres) e, em seguida, exibir a string digitada na tela.
- [Prática 2](./pratica2.c) Desenvolva um algoritmo que demonstre a manipulação de uma string. O programa deve armazenar uma palavra em uma variável, exibir a palavra completa, modificar a string para truncá-la em uma determinada posição utilizando o caractere nulo (`'\0'`) e exibir a palavra resultante após a modificação.