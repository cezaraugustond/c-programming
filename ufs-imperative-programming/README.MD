# Programação Imperativa (UFS)

- Este repositório contém as **práticas de aula** e os **exercícios desenvolvidos** durante a disciplina de **Programação Imperativa**.
- Aqui estão apenas implementações práticas em C, organizadas por assunto, seguindo o paradigma imperativo.
- Diferente do repositório `independent-studies`, aqui não há anotações teóricas — apenas **implementações práticas em C**, focadas no paradigma imperativo.


## [1- Basics:](./1-basics/) Operações básicas, entrada/saída, variáveis e expressões

* [ex01](./basics/ex01.c) Desenvolva um algoritmo que calcule o produto entre dois números inteiros. O programa deve solicitar ao usuário a digitação de dois valores, realizar a multiplicação e exibir o resultado da operação no formato “Produto: número1 * número2 = resultado”.
* [ex02](./basics/ex02.c) Desenvolva um algoritmo que calcule o troco a ser devolvido em uma compra. O programa deve solicitar ao usuário o valor da compra e o valor pago pelo cliente, calcular a diferença entre eles e exibir o troco formatado com duas casas decimais.
* [ex03](./basics/ex03.c) Desenvolva um algoritmo que calcule o ano de nascimento de uma pessoa. O programa deve solicitar ao usuário o ano atual e a idade da pessoa, calcular o ano de nascimento subtraindo a idade do ano atual, e exibir o resultado no console.
* [ex04](./basics/ex04.c) O Governo planeja, em 2020, atribuir 2 aumentos no salário mínimo, um em janeiro (de 20%) e outro em julho (de 35%) em relação ao salário de 2019.  Escrever programa para ler o valor do mínimo em 2019 e exibir os valores dos dois novos salários.
* [ex05](./basics/ex05.c) É orientação dos educadores financeiros que todos mantenhamos reservas de dinheiro em poupança. Escrever programa para ler o valor depositado por mês e a quantidade de meses em que uma pessoa efetuou depósito; e exibir, desconsiderando juros e taxas, o valor total que haverá poupado ao final destes meses.
* [ex06](./basics/ex06.c) Na Padaria "PãoBão" é necessário manter o estoque sempre com mantimentos em quantidade ideal, para atender a freguesia no horário de costume. Escrever programa para ler a quantidade de um produto em estoque e a quantidade ideal deste (produto); e exibir o quanto comprar deste produto.
* [ex07](./basics/ex07.c) No "ColégioBão" as disciplinas têm três notas e o resultado final é obtido por média aritmética simples. Escrever programa para ler as três notas de um aluno, e exibir o resultado (média) obtido pelo aluno.
* [ex08](./basics/ex08.c) Para atrair fregueses, o gerente da mercearia "TemDiTudo" fez diferentes promoções para os diferentes produtos de seu estabelecimento. Escrever programa para, dado o valor do produto e o percentual do desconto (exemplo, dado 10, é 10%); exibir o valor do produto.
* [ex09](./basics/ex09.c) Na organização de uma festa é preciso saber a quantidade aproximada de docinhos e salgadinhos a serem preparados para cada convidado. Escrever programa para ler: quantidade (inteiro) aproximada de docinhos por convidado, quantidade (inteiro) aproximada de salgadinhos por convidados e número de convidados; e exibir quantidade total de docinhos e a de salgadinhos a comprar para a realização da festa. 
* [ex10](./basics/ex10.c) Na floricultura "Rosas" são feitos buquês com 3 tipos de rosas: amarelas, vermelhas e brancas. Escrever programa para ler os preços das unidades de cada tipo de rosa, e quantidade de cada rosa que o cliente deseja no buquê; e exibir o valor do buquê.
* [ex11](./basics/ex11.c)  Uma escada pode ser composta por uma sequencia de blocos idênticos, como a que segue. Esta escada é composta o 1, 2, 3, 4, 5, 6, 7, 8, 9 blocos em sequência, e cada degrau tem altura de 1 bloco. Mas poderia haver uma escada composta por 2, 7, 12 e 17 blocos em sequência, sendo a altura de cada degrau igual a 5. E ainda poderia haver outra escada formada por 3, 14, 25 e 36 blocos em sequência, sendo a altura de cada degrau igual a 11. Escrever um programa para: ler a quantidade de blocos do 1° degrau, e a altura do degrau, exibir o quantitativo de blocos de cada degrau de uma escada formada por 4 degraus.
* [ex12](./basics/ex12.c) Os colegas do filho de Sr. Zé estão sentindo dificuldade para alugar um ônibus para leválos ao “Museu da Gente Sergipana”. Então Sr. Zé resolveu disponibilizar sua Kombi, mas a depender do número de inscritos, serão necessárias muitas viagens, e alguns passageiros deverão ir de coletivo. Considerando que a Kombi tem capacidade para transportar 11 pessoas (fora o motorista – Sr. Zé), escrever um programa em C, para, dado o número de inscritos no passeio ao Museu, exibir o número de viagens que devem ser necessárias e o número de passagens de coletivo. Exemplos: se 22 pessoas – 2 viagens de kombi e 0 passagem em coletivo; se 37 pessoas – 3 viagens e 4 passagens em coletivo.
* [ex13](./basics/ex13.c) Num caixa eletrônico bancário, para o saque de R$175 reais é composto por: 1 cédula de R$100 + 1 cédula de R$50 + 2 cédulas de R$20 + 0 cédula de R$10, 1 cédula de R$5 e 0 cédulas de R$2. Considerando que no cache há cédulas de R$100, R$50, R$20, R$10, R$5 e R$2. Escrever um programa que, dado um valor monetário, exibir a composição deste conforme as cédulas disponíveis, usando o menor número de cédulas.
* [ex14](./basics/ex14.c) Na escola "DuSaber" em cada semestre o aluno faz 3 provas. A primeira tem peso 1, a segunda tem peso 2 e a terceira tem peso 3. A média (ponderada) para aprovação é sete. Escrever programa em C para ler a primeira e a segunda notas obtidas por um aluno X e escrever qual nota X precisa obter na terceira prova para obter aprovação com média sete.
* [ex15](./basics/ex15.c) Para conter o crescimento da quantidade de gatos abandonados na UFS, e seus consequentes prejuízos, surgiu o projeto "CastraçãoSolidária", a partir do qual 4 veterinários experientes e 1 recém formado decidiram efetuar capturas e castrações todos os dias úteis, sendo os animais capturados divididos igualitariamente entre os veterinários experientes, e havendo sobras (não sendo possível uma divisão exata), o restante fica sob a responsabilidade do 5° veterinário – recém formado. Por exemplo, se capturados 22 gatos, cada veterinário experiente fica com 5 castrações, e o recém formado fica com 2. Se capturados 19, os experientes ficam com 4 e o formado recentemente fica com 3. Escrever programa em C para ler número de gatos capturados e exibir a distribuição das castrações entre os veterinários.
* [ex16](./basics/ex16.c)  Em C, a função ceil, pertencente à biblioteca math, efetua o arredondamento de um número dado N para o “inteiro” maior ou igual a N. Por exemplo, se usada: Y=ceil(X); e X contiver 12.2, Y conterá 13.0. Para cada castração citada na questão anterior são usados 25.5 ml do limpador de instrumental cirúrgico, o qual é vendido em vasilhames de 500 ml e custa 60 reais, cada vasilhame. Escrever programa em C para ler quantidade de castrações e exibir quantos vasilhames do referido produto serão necessários, e de quanto os médicos precisarão dispor para comprá-los.
* [ex17](./basics/ex17.c) É alto o número de pessoas que, para manter a saúde, precisa fazer uso contínuo do medicamento "PróSaúde". Escrever programa para ler: quantidade de comprimidos a ser usada diariamente e quantidade de comprimidos por caixa (do medicamento); e exibir quantas caixas a pessoa deve comprar mensalmente.
* [ex18](./basics/ex18.c) Para a manutenção da saúde é indispensável que as pessoas mantenham o peso ideal e, assim, evitem a obesidade. Escrever programa para ler: peso atual, peso ideal e perda mensal; e exibir em quantos dias a pessoa alcançará o peso ideal.
* [ex19](./basics/ex19.c) Periodicamente as crianças brasileiras devem tomar vacinas que as protegem de diversas doenças. Escrever um programa para ler o ano em que a criança toma a 1° dose e a periodicidade (intervalo em anos) da vacina e exibir em que outros anos a criança deve tomar as próximas doses desta vacina, sabendo que são 4 (quatro) doses ao total.

---

## [2- Conditionals:](./2-conditionals/) Estruturas de decisão (`if`, `else`, lógica condicional)

* [ex20](./conditionals/ex20.c) Escrever um programa em C para ler um número inteiro N e exibir se N é PAR ou ÍMPAR.
* [ex21](./conditionals/ex21.c) Escrever um programa em C para ler o valor de um salário e atribuir aumento de R$1.000,00 caso este seja igual ou inferior a R$850,00.
* [ex22](./conditionals/ex22.c) Numa loja web os valores dos fretes são calculados em conformidade com os totais das compras.  Se valor da compra é até R$300,00 (inclusive), o frete corresponde a 35% desta; para valores maiores, o frete é de 20% do valor desta.  Escrever programa para ler valor da compra e exibir valor final, com frete.
* [ex23](./conditionals/ex23.c) Escrever programa para ler as três notas de um aluno, calcular a média deste (média ponderada: primeira nota com peso 1, segunda nota com peso 2 e terceira nota com peso 3) e determinar a situação do aluno: APROVADO – se média igual ou superior a 7; EM RECUPERAÇÃO – se não aprovado e com média igual ou superior a 5; REPROVADO – quando média inferior a 5.
* [ex24](./conditionals/ex24.c) Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro número formado pelos dígitos invertidos do número lido.  (Ex: Numero Lido = 123; Numero Gerado = 321) Em seguida informar: NÚMERO GERADO MAIOR QUE NÚMERO LIDO ou NÚMERO LIDO MAIOR QUE NÚMERO GERADO, ou ainda, NÚMERO GERADO IGUAL AO NÚMERO LIDO.
* [ex25](./conditionals/ex25.c)  Faça um programa para verificar se determinado número inteiro lido N é divisível por A ou B, mas não simultaneamente pelos dois valores dados.  São A e B, bem como N, dados pelo usuário.  Atendendo a condição estabelecida, emitir mensagem “ATENDE CONDIÇÃO”; caso contrário, exibir: “NÃO ATENDE CONDIÇÃO”.
* [ex26](./conditionals/ex26.c)Desenvolva um algoritmo que calcule o Índice de Massa Corporal (IMC) de uma pessoa. O programa deve solicitar ao usuário o peso (em kg) e a altura (em metros), calcular o IMC utilizando a fórmula `IMC = peso / (altura * altura)` e exibir o valor obtido juntamente com a classificação correspondente, de acordo com os seguintes intervalos:
	- IMC < 18,5 → Magreza
    - 18,5 ≤ IMC < 25 → Saudável
   	- 25 ≤ IMC < 30 → Sobrepeso
    - 30 ≤ IMC < 35 → Obesidade Grau I
    - 35 ≤ IMC < 40 → Obesidade Grau II (severa)
   	- IMC ≥ 40 → Obesidade Grau III (mórbida)
* [ex27](./conditionals/ex27.c) Escrever programa para:
    	1. Ler medida de lado de um quadrado;
    	2. Exibir menu:
        	1. Área;
        	2. Perímetro;
        	3. diagonal;
    	3. Exibir a informação solicitada pelo usuário conforme opção de menu selecionada.
* [ex28](./conditionals/ex28.c) Escrever programa para:
    	1. Ler um número de 0 a 99.999;
    	2.  Exibir menu:
        	1. U – unidade;
        	2. D – dezena;
        	3. C – centena;
        	4. M – unidade de milhar; 
        	5. Z – dezena de milhar; 
    	3. Exibir a informação solicitada pelo usuário conforme opção de menu selecionada.
* [ex52](./conditionals/ex52.c) [Adaptado do The Huxley] Nos parques de diversão, para que um usuário possa fazer uso de alguns brinquedos deve atender idade e altura mínimas. O parque Ambrolândia possui 5 brinquedos que possuem essas limitações:
    	- Barca Viking: 1,5m de altura e 12 anos.
    	- Elevator of Death: 1,4m de altura e 14 anos.
    	- Final Killer: 1,7m de altura ou 16 anos.
    	- Trem Fantasma: 1,35m de altura e 8 anos.
    	- Montanha Russa: 1,6m ou 12 anos
Dada a altura e a idade de uma pessoa P, faça um programa que identifique em quantos brinquedos P pode brincar.


---

## [3- Loops:](./3-loops/) Estruturas de repetição (`for`, `while`, `do-while`)

* [ex29](./loops/ex29.c) Escrever programa, aplicando estrutura de repetição, para exibir a tabuada de multiplicar (de 0 a 10) de um dado número.
* [ex30](./loops/ex30.c) Escrever programa para ler N números e identificar quantos estão dentro do intervalo entre 10 e 20, e quantos estão fora deste mesmo intervalo.
* [ex31](./loops/ex31.c) Escrever programa para exibir os 25 primeiros números pares a partir de 2, e a soma desses.
* [ex32](./loops/ex32.c) Escrever programa para efetuar a exibição dos 30 primeiros números ímpares a partir de 51.
* [ex33](./loops/ex33.c) Escrever programa para exibir a soma de 10 números dados pelo usuário.
* [ex34](./loops/ex34.c) Escrever programa para ler 15 números (dados pelo usuário) e exibir a soma dos múltiplos de 3 lidos.
* [ex35](./loops/ex35.c) Escrever programa para calcular: \sum_{n=0}^{5} 9^n Os termos do somatório devem ser exibidos, além do resultado final.
* [ex36](./loops/ex36.c) Numa loja de departamentos há 5 departamentos. Do total de vendas diárias de cada departamento a loja destina 13,5% a uma ONG se esta (venda) ultrapassar R$1750,00.  Escrever programa para ler a venda diária de cada departamento e exibir o montante destinado à citada ONG.
* [ex37](./loops/ex37.c) Escrever programa para exibir números inteiros de A até B, sendo B maior que A, e A e B dados pelo usuário.
* [ex38](./loops/ex38.c)  Escrever programa  para exibir termos de uma PA (progressão aritmética). Ler valor inicial, razão desta e quantidade de termos desejados.
* [ex39](./loops/ex39.c) Escrever programa para ler N números, sendo N dado pelo usuário. E desses identificar o menor, a média (aritmética simples) e a soma.
* [ex40](./loops/ex40.c) Desenvolva um algoritmo que calcule o fatorial de um número inteiro. O programa deve solicitar ao usuário um valor inteiro positivo e exibir, além do resultado final, o processo de multiplicação que compõe o cálculo do fatorial.
* [ex41](./loops/ex41.c) Escrever programa para ler um número inteiro qualquer, e exibir o sucessor deste.  Em seguida, perguntar ao usuário se desejar continuar.  Em caso afirmativo (S), apresentar o sucessor do número exibido.  E novamente perguntar  o desejo do usuário, e continuar até que ele responda não (N).
* [ex42](./loops/ex42.c) Escrever programa , sem aplicar resto de divisão (%) e valor do quociente (/), para calcular a quantidade de meses contidos numa dada quantidade de dias.  Considerar que todos os meses são compostos por 30 dias e desprezar o montante de dias que não formam pelo menos um mês completo (resto).
* [ex43](./loops/ex43.c) Desenvolva um algoritmo que gerencie o limite de um cartão de crédito. O programa deve solicitar ao usuário o limite disponível no cartão e, em seguida, permitir que sejam informados valores de compras sucessivas. Para cada compra, o programa deve verificar se há limite suficiente: se não houver, exibir uma mensagem informando que a compra estouraria o cartão; se houver, debitar o valor do limite e informar que a compra é possível. A cada compra, exibir o limite restante. O programa deve encerrar quando o limite chegar a zero, exibindo uma mensagem final indicando que não há mais limite disponível.
* [ex44](./loops/ex44.c) Desenvolva um algoritmo que some doações para alcançar uma meta de arrecadação. O programa deve solicitar ao usuário o valor da meta da vaquinha e, em seguida, solicitar sucessivamente os valores das doações. A cada doação, o programa deve exibir o total parcial arrecadado. Quando o total atingir ou ultrapassar a meta, o programa deve informar se a meta foi alcançada ou ultrapassada, exibindo o valor final arrecadado.
* [ex45](./loops/ex45.c) Desenvolva um algoritmo que exiba um padrão numérico crescente. O programa deve solicitar ao usuário a digitação de um valor inteiro positivo e, em seguida, imprimir linhas de números de 1 até o valor da linha correspondente, formando um triângulo numérico. A primeira linha deve conter apenas o número 1, a segunda linha os números de 1 a 2, a terceira de 1 a 3, e assim sucessivamente, até alcançar o valor informado pelo usuário. Cada linha deve ser exibida separadamente.
* [ex57](./loops/ex57.c) Implementar programa para ler números até que o usuário tenha inserido (digitado) valores cuja soma seja igual ou superior a S; sendo S dado pelo usuário.  Ao final, exibir todos os números que foram considerados para compor a soma S.  No máximo pode haver 20 valores.  Este pode ser usado, por exemplo, para organizar uma caixa com até 20 itens, a qual tem um peso limite S, correspondente à soma dos itens.
* [ex58](./loops/ex58.c) Implementar programa para ler números até que o usuário tenha inserido (digitado) 25 números divisíveis por 7. Concluída a leitura, limpar a tela e exibir os 25 números considerados.

---

## [4- Strings:](./4-strings/) Manipulação de strings

* [ex46](./strings/ex46.c) Escrever programa para ler uma string S com até 20 caracteres e escrever cada letra de composição de S numa linha distinta da tela.
* [ex47](./strings/ex47.c) Escrever programa para ler uma string S com até 15 caracteres e um caractere C, e exibir a posição da primeira ocorrência de C em S.  Exemplo, se dado ROSANA e A, exibir 4. IMPORTANTE: Para implementação desta não pode ser usada função pré-definida de definição de primeira ocorrência de um caractere numa string.
* [ex48](./strings/ex48.c) Escrever programa para ler nome e sobrenome de um autor, compor e exibir uma string composta por: SOBRENOME, Nome. Exemplo, dado: pedro cabral, dever ser composta a string e exibida: CABRAL, Pedro.
* [ex49](./strings/ex49.c) Escrever programa para ler três palavras distintas entre si com até 20 caracteres e exibi-las ordenadas alfabeticamente. Usando a função strcmp() da biblioteca <string.h>.
* [ex50](./strings/ex50.c) Escrever programa para ler uma palavra com até 20 caracteres e exibi-la com letras maiúsculas, sem fazer uso de função pré-definida que efetua tal conversão (das letras de uma palavra).
* [ex51](./strings/ex51.c) Escrever programa para ler um nome e, independente de como este foi escrito, exibir a inicial maiúscula e o restante minúscula.
* [ex53](./strings/ex53.c) Escrever programa para ler uma palavra P qualquer com até 20 caracteres e identificar quantas vogais P apresenta.
* [ex54](./strings/ex54.c) Escrever programa para ler uma palavra P qualquer com até 20 caracteres e identificar quantas não-vogais P apresenta.
* [ex55](./strings/ex55.c) Escrever programa para ler o nome de uma pessoa, composto por nome e sobrenome (entre nome e sobrenome há um espaço em branco).  E exibir, sobrenome em maiúsculo, seguido de vírgula e do nome da pessoa.

---

## [5- Arrays:](./5-arrays/) Vetores e manipulação de dados em memória

* [ex56](./arrays/ex56.c) Na universidade “DuSabiTudu” os alunos são identificados por matrículas compostas por 10 dígitos.  Os 4 primeiros dígitos correspondem ao ano em que o aluno entrou na instituição.  Assim, todos os alunos cujas matriculas iniciam por 2012 ingressaram no curso superior no ano de 2012.  Os dígitos 5 e 6 da matrícula correspondem ao curso; sendo: 97 para agroecologia e 99 para gerontologia.  Escrever programa para ler a matricula de 100 alunos inscritos no programa “CienciasAlémDasFronteiras” e identificar quantos alunos ingressaram de 2015  no curso de agroecologia.
* [ex59](./arrays/ex59.c) Implementar programa para ler 20 números e em seguida exibir menu: 
  	1. Maior Número; 
    2. Menor Número; 
    3. Média Aritmética; 
   	4. Soma; 
    5. Sair.  
Exibir para o usuário o resultado conforme a opção de menu selecionado, considerando o 20 números lidos.  Somente interromper a execução do programa quando o usuário selecionar a opção 5 – Sair.  Nas exibições apresentar o resultado precedido pelos 20 números lidos inicialmente.  Efetuar a limpeza de tela entre cada  exibição distinta (de resultados ou de menu).
* [ex61](./arrays/ex61.c) Na cidade TemQueFazerNão? as crianças costumam brincar com um jogo (de dois jogadores) onde:
    	1. Um jogador A define uma sequência de 10 letras usando: G ou R ou B 
        	- Exemplo: G – G – G – R – B – R – B – B – B – R;
    	2. Um jogador B pode ler a sequência quantas vezes quiser;
    	3. O jogador B também pode dizer uma das letras e obter em quais posições a letra dada se encontra na sequência;
    	4. O jogador B também pode dar uma posição e saber qual letra ocupa a posição na sequência;
    	5. Para finalizar, o jogador B deve dizer a sequência de letras, obtendo um ponto para cada acerto.
Escrever programa para “automatizar” o jogo.
* [ex62](./arrays/ex62.c) Implementar programa para ler total de vendas, de um determinado mês, dos 10 vendedores da “Matura”, calcular a média de vendas do grupo de vendedores, e exibir quantos vendedores apresentaram desempenho (vendas) abaixo da média.
* [ex63](./arrays/ex63.c)  Construir programa para ler o gabarito de uma prova objetiva com 5 questões, ler as respostas dadas por 5 alunos da turma e armazenar (para posterior exibição) as notas destes. Cada questão vale 0,5 ponto.

---

## [6- Advanced:](./6-advanced/) Problemas mais completos envolvendo múltiplos conceitos (menus, simulações, sistemas)

* [ex60](./advanced/ex60.c) [ADAPTADO DO THE HUXLEY] Escreva um programa que transforme o computador numa urna eletrônica, em segundo turno, para presidente de um país chamado Ambrolândia. Nessas eleições concorrem os candidatos 83-Alibabá e 93-Alcapone. Cada voto deve ser dado pelo número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos já citados é considerado nulo. No final da eleição o programa deve emitir um relatório contendo a votação de cada candidato, a quantidade votos em branco, a quantidade de votos nulos e o candidato eleito.
    	- A entrada consiste de um conjunto de números inteiros, um por linha. A eleição termina quando o número digitado é -1.
    	- A saída é composta de: quantidade de votos do candidato Alibabá, quantidade de votos do candidato Alcapone, quantidade de votos em branco, quantidade de votos nulos, e qual foi o candidato vencedor.
* [ex64](./advanced/ex64.c) Considerando a necessidade de construir um programa para definir o valor a pagar por uma vaga de estacionamento, por tempo de uso.
    	1. As vagas são numeradas.
    	2. O cliente escolhe a vaga em que deseja estacionar seu carro.
    	3. É registrado no sistema a hora de chegada no estacionamento e a placa..
    	4. Cada 15min custa R$ 2.30.
MENU:
	1. Mostrar vagas disponíveis.
	2. Mostrar detalhes das vagas
	3. Adicionar carro.
	4. Remover carro e mostrar valor total a ser pago.
	5. Sair.



