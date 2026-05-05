## Comando `goto`

- O comando `goto` permite **desviar a execução do programa para um ponto específico identificado por um rótulo** (label).

---

### 📌 Forma geral

```c
rotulo:
    // comandos

goto rotulo;  // desvia a execução para o rótulo
```

- **Observações importantes:**
    - Não é recomendável o uso do `goto` na maioria dos casos, pois **dificulta a leitura e manutenção do código**.
    - Pode ser útil para **sair de múltiplos laços aninhados** rapidamente, quando não há outra solução prática.

---

### ✅ Exemplo 1 – Sair de vários laços aninhados

```c
#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 5; k++) {
                if (i == 2 && j == 3 && k == 1)
                    goto fim; // desvia para o rótulo "fim"
                else
                    printf("Pos[%d, %d, %d] \n", i, j, k);
            }
        }
    }

fim: // rótulo que marca o destino do goto
    printf("Fim do programa! \n");

    return 0;
}

```

🔎 Nesse exemplo:

- Quando a condição `i == 2 && j == 3 && k == 1` é verdadeira, o programa **salta imediatamente para o rótulo `fim`**, encerrando os laços.
- Sem o `goto`, seria necessário criar **uma lógica extra com flags ou múltiplas condições** para sair de todos os loops.

---

### ⚠️ Dicas de boas práticas

- Prefira **estruturas de controle normais** (`break`, `continue`, funções) em vez de `goto`.
- Use `goto` **apenas em situações excepcionais**, como sair rapidamente de **vários loops aninhados** ou lidar com **erros em inicialização de recursos**.
- Nunca crie rótulos em locais que possam **confundir a execução**, como dentro de condições complexas, pois isso gera **“código spaghetti”**.

---

# Práticas:

1. Desenvolva um algoritmo que exiba uma sequência de números de 0 a 4. O programa deve utilizar o comando `goto` para criar uma repetição, incrementando um contador a cada iteração e exibindo seu valor na tela, sem solicitar nenhuma entrada do usuário.
2. Desenvolva um algoritmo que percorra todas as combinações de índices de três laços aninhados de 0 a 4 e exiba cada posição na tela. O programa deve utilizar o comando `goto` para interromper a execução quando os índices atingirem um valor específico (i = 2, j = 3, k = 1) e, em seguida, exibir uma mensagem de fim de programa, sem solicitar entradas do usuário.