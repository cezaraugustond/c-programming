## Operadores Relacionais:

- Os operadores relacionais são usados para **comparar valores**.
- O resultado de uma comparação em C é sempre um número inteiro:
    - **0** → falso
    - **1** → verdadeiro

---

### 🔹 Principais operadores relacionais

| Operador | Significado |
| --- | --- |
| `>` | Maior que |
| `>=` | Maior ou igual |
| `<` | Menor que |
| `<=` | Menor ou igual |
| `==` | Igual a |
| `!=` | Diferente de |

⚠️ **Atenção:**

- `=` é **atribuição** (guarda valor).
- `==` é **comparação** (verifica igualdade).

---

### 🔹 Forma geral

```c
valor1 operador_relacional valor2

```

O resultado pode ser usado **diretamente** em expressões ou estruturas condicionais (`if`, `while`, etc.).

---

⚠️ **Atenção:**

- C trata **qualquer valor diferente de 0 como verdadeiro**.

---

# Práticas:

1. Desenvolva um algoritmo que demonstre o uso dos operadores relacionais em C. O programa deve declarar duas variáveis inteiras, realizar comparações utilizando os operadores `>`, `>=`, `<`, `<=`, `==` e `!=`, e exibir os resultados de cada operação no console.