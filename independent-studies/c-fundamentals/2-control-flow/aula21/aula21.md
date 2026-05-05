## Aninhamento de repetições

- O **aninhamento de repetições** acontece quando colocamos **um laço de repetição dentro de outro**.
- É possível usar qualquer combinação:
    - `for` dentro de `for`
    - `while` dentro de `for`
    - `do...while` dentro de `while`, etc.
- Muito utilizado em situações que envolvem **tabelas, matrizes, combinações e cálculos repetidos em várias dimensões**.

---

### 📌 Estrutura geral

```c
repeticao (condição1) {
    // comandos do laço externo

    repeticao (condição2) {
        // comandos do laço interno

        repeticao (condição3) {
            // comandos do laço mais interno
        }
    }
}

```

---

### ⚠️ Atenção

- Sempre verifique se a condição de parada de **cada laço** está correta, para evitar **loops infinitos**.
- Estruturas muito aninhadas podem dificultar a **leitura e manutenção** do código.

---

# Práticas:

1. Desenvolva um algoritmo que exiba uma matriz quadrada formada por zeros e uns. O programa deve utilizar apenas estruturas de repetição do tipo `for` para gerar o padrão, exibindo o número **1** quando a linha for igual à coluna e o número **0** nos demais casos, resultando em uma matriz identidade de ordem 4.
2. Desenvolva um algoritmo que exiba uma matriz quadrada formada por zeros e uns. O programa deve utilizar apenas estruturas de repetição do tipo `while` para gerar o padrão, exibindo o número **1** quando a linha for igual à coluna e o número **0** nos demais casos, resultando em uma matriz identidade de ordem 4.
3. Desenvolva um algoritmo que exiba uma matriz quadrada formada por zeros e uns. O programa deve utilizar o aninhamento de repetições, combinando a estrutura `while` (para controlar as linhas) e a estrutura `for` (para controlar as colunas), exibindo o número **1** quando a linha for igual à coluna e o número **0** nos demais casos, resultando em uma matriz identidade de ordem 4.