## Operadores Lógicos:

- Os operadores lógicos servem para **combinar expressões** e retornar um resultado **verdadeiro (1)** ou **falso (0)**.
- Forma geral:

```c
expressão "operador_lógico" expressão

```

---

### ✅ Operador **lógico “E”** (`&&`)

- O resultado será **1** (verdadeiro) **apenas se as duas expressões forem verdadeiras**.
- Caso contrário, o resultado será **0** (falso).

| Expressão A | Expressão B | A && B |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

---

### ✅ Operador **lógico “OU”** (`||`)

- O resultado será **1** se **pelo menos uma das expressões for verdadeira**.
- Será **0** somente se **todas forem falsas**.

| Expressão A | Expressão B | A || B |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

---

### ✅ Operador **Negação** (`!`)

- **Inverte o valor lógico** da expressão:
    - Se a expressão for verdadeira (**1**), o resultado será **0**.
    - Se a expressão for falsa (**0**), o resultado será **1**.

---

# Práticas:

1. Desenvolva um algoritmo que demonstre o uso dos operadores lógicos em C. O programa deve declarar variáveis inteiras, realizar expressões lógicas utilizando o operador `&&` (E lógico), e exibir na tela tanto as expressões avaliadas quanto o resultado de cada operação.
2. Desenvolva um algoritmo que demonstre o uso do operador lógico **OU (`||`)** em C. O programa deve declarar variáveis inteiras, realizar expressões lógicas utilizando o operador `||`, e exibir na tela tanto as expressões avaliadas quanto o resultado de cada operação.
3. Desenvolva um algoritmo que demonstre o uso do operador lógico **de negação (`!`)** em C. O programa deve declarar variáveis inteiras, aplicar o operador `!` em diferentes expressões lógicas e exibir na tela as expressões avaliadas juntamente com o resultado de cada operação.