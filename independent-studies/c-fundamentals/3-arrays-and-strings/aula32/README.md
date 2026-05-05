# AULA 32

# Biblioteca `<string.h>`

| Função | Descrição | Exemplo |
| --- | --- | --- |
| `strlen(s)` | Retorna o **tamanho da string** (sem contar `\0`). | `int tam = strlen("Olá"); // tam = 3` |
| `strcpy(dest, src)` | **Copia** a string `src` para `dest`. | `char a[10]; strcpy(a, "Oi"); // a = "Oi"` |
| `strncpy(dest, src, n)` | Copia até `n` caracteres de `src` para `dest`. | `char a[5]; strncpy(a, "OláMundo", 4); // a = "OláM"` |
| `strcat(dest, src)` | **Concatena** `src` no final de `dest`. | `char a[20]="Olá "; strcat(a,"Mundo"); // a = "Olá Mundo"` |
| `strncat(dest, src, n)` | Concatena até `n` caracteres de `src` ao final de `dest`. | `char a[20]="Olá "; strncat(a,"Mundo",3); // a = "Olá Mun"` |
| `strcmp(s1, s2)` | **Compara** `s1` e `s2`. Retorna: 0 (iguais), <0 (`s1<s2`), >0 (`s1>s2`). | `strcmp("a","b") < 0` |
| `strncmp(s1, s2, n)` | Compara os primeiros `n` caracteres de `s1` e `s2`. | `strncmp("abc","abd",2) == 0` |
| `strchr(s, c)` | Retorna **ponteiro** para a primeira ocorrência do caractere `c` em `s`. | `char *p = strchr("abc","b"); // p aponta para 'b'` |
| `strrchr(s, c)` | Retorna **ponteiro** para a última ocorrência de `c` em `s`. | `char *p = strrchr("abcb","b"); // p aponta para último 'b'` |
| `strstr(s, t)` | Retorna **ponteiro** para a primeira ocorrência da substring `t` em `s`. | `char *p = strstr("abcdef","cd"); // p aponta para "cdef"` |
| `sprintf(dest, format, ...)` | Escreve **formatação** em uma string. | `char a[20]; sprintf(a,"%d-%s",10,"abc"); // a = "10-abc"` |
| `sscanf(str, format, ...)` | Lê valores de uma string formatada. | `int x; char s[10]; sscanf("10-abc","%d-%s",&x,s); // x=10, s="abc"` |

---

## 🔹 Dicas práticas

1. Sempre **garanta espaço suficiente** no array para copiar ou concatenar strings.
2. Lembre-se de que strings em C **terminam com `\0`**.
3. Use `strncpy` e `strncat` quando quiser **prevenir estouro de memória**.
4. Comparações com `strcmp` nunca use `==` direto entre strings, sempre use a função.

---

# Práticas:

1. Desenvolva um algoritmo que copie manualmente o conteúdo de uma string para outra. O programa deve armazenar uma palavra ou frase em uma variável, percorrer cada caractere da string original para copiá-la em uma segunda string, adicionar o caractere nulo (`'\0'`) ao final da cópia e exibir ambas as strings na tela.
2. Desenvolva um algoritmo que demonstre o uso da biblioteca `<string.h>` para manipulação de strings. O programa deve calcular o tamanho de uma string, copiar seu conteúdo para outra string, concatenar duas strings diferentes e comparar duas strings, exibindo os resultados de cada operação na tela.