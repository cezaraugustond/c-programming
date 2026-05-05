# AULA 23

## Comando `continue`

- O comando `continue` é utilizado dentro de laços de repetição (`for`, `while`, `do...while`).
- Quando encontrado, ele **ignora todos os comandos restantes daquela iteração** e **volta diretamente para o início do laço**, verificando novamente a condição (ou fazendo o incremento no caso do `for`).

---

### 📌 Forma geral

```c
repeticao (condicao1) {
    if (condicao2) {
        continue; // pula o restante desta iteração
    }
    // comandos ignorados se o continue for executado
}

```

---

### ⚠️ Diferença entre `break` e `continue`

- **`break`** → interrompe totalmente o laço e sai dele.
- **`continue`** → apenas ignora o restante da iteração atual e volta para o início do laço.

---

# Práticas:

1. Desenvolva um algoritmo que incremente um valor inicial até um valor final definido pelo usuário. O programa deve solicitar ao usuário a digitação de dois números inteiros (valor inicial e valor final), utilizar a estrutura de repetição `while` para realizar o incremento e exibir cada valor na tela. O programa deve utilizar o comando `continue` para **pular a exibição do número 7**, sem interromper a execução do laço.