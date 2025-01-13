# CapacitacaoMinervaSats
# Repositório de Exercícios - Processo Seletivo da Equipe Aeroespacial da UFRJ

Este repositório contém soluções para quatro exercícios desenvolvidos em linguagem C, como parte do processo seletivo para a equipe aeroespacial da UFRJ.

Exercicios:

```
/

|-- Exercicio 1: Cálculo de Média e Aprovação (correspondenbdo ao arquivo Exercicio1.c)

Dadas duas notas de um aluno, sendo elas obtidas como preferir. Certifique-se de
utilizar o tipo de dado apropriado. Calcule a média das notas. Imprima o tamanho
em bytes do tipo de dado utilizado para armazenar as notas. Verifique se o aluno foi
aprovado ou reprovado, considerando que a média mínima para aprovação é 5.0.
Exiba a média e o status do aluno (Aprovado ou Reprovado).
|

|-- Exercício 2: Impressão de Pirâmide de Asteriscos (correspondenbdo ao arquivo Exercicio2.c)

Dada uma macro N que corresponde a um número inteiro (definida usando a diretiva
define) que representará o número de linhas da figura. Imprima uma pirâmide de
asteriscos conforme o exemplo abaixo.
|

|-- Exercício 3: Manipulação de Bits (correspondenbdo ao arquivo Exercicio3.c)

A partir de dois números arbitrários, de sua preferência, representados em binário 8
bits e realize as seguintes operações:
● Comparação bit a bit: Compare cada bit dos dois números e exiba um
resultado onde 1 indica que os bits nas respectivas posições são iguais e 0
indica que são diferentes.
● Deslocamento à esquerda: Realize um shift à esquerda de um bit no
primeiro número e exiba o novo valor em binário.
● Deslocamento à direita: Realize um shift à direita de um bit no primeiro
número e exiba o novo valor em binário.
● Verificação do bit menos significativo (LSB - Least Significant Bit):
○ Se o último bit do número original (antes dos deslocamentos) for 1,
imprima uma mensagem indicando que o bit menos significativo está
ativo e faça uma operação específica, como inverter todos os bits do
número.
○ Caso contrário, apenas exiba uma mensagem indicando que o bit
menos significativo está inativo.

Este exercício ajudará no entendimento de operações fundamentais para
manipulação de registradores.

|-- Exercício 4: Leitura de Sensor e Armazenamento em uint32_t (correspondenbdo ao arquivo Exercicio4.c)

● Crie um tipo de dado chamado SENSOR, que contém os seguintes campos:
endereço (representa o endereço do sensor temperatura) e um vetor que
armazena 5 leituras de temperatura.
● Os sensores possuem endereços fixos, sendo: Sensor 1 no endereço 0x19
Sensor 2 no endereço 0x76.
● As leituras de temperatura são inicialmente fornecidas em dois vetores de
double, um para cada sensor (gere esses números de forma arbitrária). O
programa deve:
○ Transferir os valores das leituras dos vetores para dentro das structs
SENSOR.
○ Os nomes das instâncias das structs do tipo SENSOR deverão se
chamar sensor1 e sensor2, respectivamente.
○ Calcular a média da temperatura para cada sensor e armazenar da
forma que preferir.
○ Imprimir a situação térmica de cada sensor, seguindo a regra: "Calor"
se a temperatura média for ≥ 30.0°C e "Temperatura normal" caso
contrário. Seja criativo(a).
○ Exibir os endereços de memória em hexadecimal de cada campo da
struct SENSOR.
○ Utilizar #define para definir os endereços dos sensores.
○ Implementar funções separadas para calcular a média e exibir os
dados dos sensores.


