# Maior e Menor Valor em Arrays em C

- Um **array** pode armazenar vários elementos do mesmo tipo.
- Para encontrar o **maior** e o **menor valor**, percorremos todos os elementos e comparamos cada valor com os atuais **maior** e **menor**.

---

## 🔹 Código Exemplo

```c
#include <stdio.h>

int main() {
    int lista[7] = {3, 18, -4, 0, -13, 96, 4}; // array com 7 elementos
    int maior = lista[0]; // inicializa maior com o primeiro elemento
    int menor = lista[0]; // inicializa menor com o primeiro elemento

    // Percorre todos os elementos do array
    for (int i = 1; i < 7; i++){
        if (lista[i] > maior){
            maior = lista[i]; // atualiza maior valor
        }
        if (lista[i] < menor){
            menor = lista[i]; // atualiza menor valor
        }
    }

    printf("Maior valor: %d \n", maior);
    printf("Menor valor: %d \n", menor);
    return 0;
}

```

---

## 🔹 Explicação detalhada

1. `maior = lista[0]` e `menor = lista[0]` → iniciamos assumindo que o primeiro elemento é o maior e o menor.
2. `for (int i = 1; i < 7; i++)` → percorre o restante do array.
3. `if (lista[i] > maior)` → se o elemento atual for maior que o maior, atualizamos `maior`.
4. `if (lista[i] < menor)` → se o elemento atual for menor que o menor, atualizamos `menor`.
5. Ao final, `maior` e `menor` guardam os valores corretos.

---

## 🔹 Observações importantes

- Sempre inicialize `maior` e `menor` com **o primeiro elemento do array**, para garantir comparações corretas.
- Esse método funciona para arrays de **qualquer tamanho**.
- Pode ser adaptado para **matrizes 2D**, usando **laços aninhados**.

---

## 🔹 Otimização Avançada: Comparando em Pares

- Quando o array é muito grande, podemos **reduzir o número de comparações** usando a estratégia de **comparação em pares**. A ideia é:
    1. **Comparar dois elementos de cada vez** entre si.
    2. Determinar **localmente qual é maior e menor** dentro do par.
    3. Comparar o maior do par com o `maior` global e o menor do par com o `menor` global.
- Isso diminui o número total de comparações de aproximadamente `2*(n-1)` para cerca de `3n/2`, economizando operações.

```c
int maior, menor;
if (lista[0] > lista[1]){
    maior = lista[0];
    menor = lista[1];
} else {
    maior = lista[1];
    menor = lista[0];
}

for (int i = 2; i < n; i += 2){
    int a = lista[i];
    int b = lista[i+1];
    if (a > b){
        if (a > maior) maior = a;
        if (b < menor) menor = b;
    } else {
        if (b > maior) maior = b;
        if (a < menor) menor = a;
    }
}

```

---

### Passo a Passo do Algoritmo

1. **Inicialize maior e menor usando os dois primeiros elementos** do array:

```c
if (lista[0] > lista[1]) {
    maior = lista[0];
    menor = lista[1];
} else {
    maior = lista[1];
    menor = lista[0];
}

```

1. **Percorra o array em pares a partir do índice 2**:

```c
for (int i = 2; i < n; i += 2) {
    int a = lista[i];
    int b = lista[i+1];

```

1. **Compare os elementos do par entre si**:

```c
    if (a > b) {
        if (a > maior) maior = a; // maior do par x maior global
        if (b < menor) menor = b; // menor do par x menor global
    } else {
        if (b > maior) maior = b;
        if (a < menor) menor = a;
    }

```

1. **Se o array tiver tamanho ímpar**, o último elemento pode ser comparado separadamente após o loop.

---

### 🔹 Vantagens do método

- **Menos comparações**: em vez de sempre duas comparações por elemento (`2*(n-1)`), fazemos cerca de `3n/2`.
- **Mais eficiente em arrays grandes**.
- **Raciocínio interessante**: ensina a pensar em otimização de algoritmos, não apenas em implementações básicas.

---

### 🔹 Observações

- Para arrays pequenos, a diferença é mínima; a clareza do código é mais importante.
- Para arrays grandes, especialmente em sistemas críticos ou com milhões de elementos, essa otimização faz diferença.
- É um bom exercício de **pensamento algorítmico** e **redução de operações**.

---

# Práticas:

1. Desenvolva um algoritmo que identifique o maior e o menor valor em um array de números inteiros. O programa deve utilizar um array pré-definido com 7 elementos, percorrer todos os elementos para determinar o maior e o menor valor, e exibir ambos os resultados na tela.