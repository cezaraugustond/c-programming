# AULA 22

## Comando `break`

- O comando `break` é utilizado para **interromper imediatamente a execução de um laço de repetição** (`for`, `while` ou `do...while`), **independentemente da condição do laço**.
- Após o `break`, o programa continua a execução **logo após o laço interrompido**.
- Também é usado no comando `switch` para evitar a execução dos próximos `case`.

---

### 📌 Forma geral

```c
repeticao (condicao1) {
    if (condicao2) {
        break;  // interrompe o laço imediatamente
    }
    // outros comandos (executados somente se a condição2 for falsa)
}

```

---

### ⚠️ Observações importantes

- Sem o `break`, o laço continuaria normalmente.
- No `switch`, se o `break` não for usado, ocorre o **“efeito cascata”**, onde os próximos `case` também são executados.
- O `break` **interrompe apenas o laço mais próximo** (não “sai” de laços externos).

---

# Práticas:

1. Desenvolva um algoritmo que incremente um valor inicial até um valor final definido pelo usuário. O programa deve solicitar ao usuário a digitação de dois números inteiros (valor inicial e valor final), utilizar a estrutura de repetição `while` para realizar o incremento e exibir cada valor na tela. O programa deve ainda interromper a execução do laço com o comando `break` quando o valor **atingir 5**, finalizando a repetição antes do término natural.