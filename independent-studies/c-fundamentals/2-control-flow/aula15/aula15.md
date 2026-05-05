# Aninhamento de `if-else` em C

- O **aninhamento** acontece quando você coloca um `if` ou `if-else` **dentro de outro `if` ou `else`**.
- Isso permite tratar **condições mais complexas** e criar decisões múltiplas.

---

## 1️⃣ Estrutura geral de aninhamento

```c
if (condicao1) {
    if (condicao2) {
        // primeiro conjunto de comandos
    } else {
        // segundo conjunto de comandos
    }
} else {
    if (condicao3) {
        // terceiro conjunto de comandos
    } else {
        // quarto conjunto de comandos
    }
}

```

- Cada `else` está **sempre ligado ao `if` mais próximo** que ainda não possui um `else`.
- É possível **ter vários níveis de aninhamento**, mas cuidado para não deixar o código confuso.

---

## Regras importantes

1. Cada `else` está **sempre ligado ao `if` mais próximo** que ainda não possui `else`.
2. Não é permitido ter **dois `else` para o mesmo `if`**.
3. É permitido ter **quantos `if` você quiser**, desde que o aninhamento faça sentido.
4. Para facilitar a leitura, sempre use **chaves `{ }`** mesmo com apenas um comando.

---

# Práticas:

1. Desenvolva um algoritmo que verifique se um número inteiro é positivo, negativo ou igual a zero. O programa deve solicitar ao usuário a digitação de um valor inteiro, testar o valor utilizando estruturas condicionais e exibir uma mensagem indicando se o número é positivo, negativo ou zero.