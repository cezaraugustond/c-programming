# Estrutura de repetição `for` em C

- O comando **`for`** é usado quando sabemos **de antemão** quantas vezes o loop deve se repetir (ou quando temos um **contador de controle**).

---

## Forma geral

```c
for (inicialização; condição; incremento) {
    // conjunto de comandos
}

```

- **Inicialização** → executada apenas **uma vez** no início do laço (geralmente usada para criar/definir um contador).
- **Condição** → testada **antes de cada repetição**. Se for falsa, o loop termina.
- **Incremento/Decremento** → executado **ao final de cada repetição**, atualizando o contador.

---

## Loop infinito (cuidado)

- Se a condição nunca se tornar falsa, o `for` rodará para sempre.

---

## Sem inicialização ou incremento

- É possível omitir partes do `for`, tornando-o parecido com um `while`.

```c
int i = 0;
for (; i < 3;) {
    printf("i = %d\n", i);
    i++;
}

```

---

# Práticas:

1. Desenvolva um algoritmo que exiba uma sequência de valores inteiros em ordem crescente. O programa deve solicitar ao usuário a digitação de dois números inteiros e utilizar o comando `for` para percorrer do primeiro valor até o segundo, exibindo cada número da sequência e finalizando com a mensagem *“Fim do programa!”*.