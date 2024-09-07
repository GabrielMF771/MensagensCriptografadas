# 3 Desafio

O ano é 1944 e o Brasil está na Segunda Guerra Mundial. Você está em uma equipe dos Aliados encarregada de decodificar mensagens do inimigo. O único dispositivo que sua equipe possui é uma antena que consegue captar ondas de rádio. Sua equipe recebe vários sinais na antena mas não consegue entender nada do que se passa. Para sua sorte, a equipe de inteligência conseguiu relacionar o código recebido conforme tabela ascii. Contudo, percebeu-se que, além da cifra, alguns caracteres não eram válidos e precisavam ser ignorados. Uma pessoa da equipe de inteligência conseguiu relacionar a posição desses valores com a seguinte função:

$$f(x, b) = a0 + (a1 + b)x + a2x^2 + a3x^3 + a4x^4 + a5x^5 + a6x^6 + a7x^7$$

Em que,

• $a0$ = 186, 752

• $a1$ = −148, 235

• $a2$ = 34, 5049

• $a3$ = −3, 5091

• $a4$ = 0, 183166

• $a5$ = −0, 00513554

• $a6$ = 0, 0000735464

• $a7$ = −4, 22038 × 10−7

• $b$ é uma variável que será dada pelo agente da inteligência a cada interceptação.

• $x$ é a posição atual do caractere, começando por 1.

Sua missão é criar um algoritmo que decifre as mensagens intercepadas.

A mensagem está codificada em hexadecimal, em que cada 2 caracteres da mensagem representam um caractere da mensagem, ou seja, cada mensagem pode ter até 50 caracteres.
O texto é encerrado se encontrado o caractere nulo, representado pelo valor 00. O valor 00 encerrará o texto independente do resultado da função. 

Imprima a mensagem decodificada.

Utilize o cmd do Windows (Prompt de Comando), deve ser um terminal que utiliza a codificação *CP437* (também conhecida como *OEM 437* ou *DOS Latin US*).

## 3.1 Exemplo de caso de teste

### 3.1.1 Entrada

O número de mensagens interceptadas ([1, 10000]). Cada mensagem interceptada é dada por um número que representa a variável $b$ ([−100, 100]). Em seguida, a mensagem é codificada em hexadecimal, com 100 caracteres, onde cada 2 caracteres representam um número.

### 3.1.2 Saída
A mensagem decodificada.

## 3.2 Atividades

### 3.2.1 An´alise dos limites suportados pelos tipos de arquivos

Uma causa importante de erros em programação em C é ultrapassar os limites numéricos estabelecidos para cada tipo de variável. O objetivo desse exercício é mostrar como e por que ocorrem esses erros. Os limites numéricos de cada tipo inteiro estão definidos na biblioteca da linguagem *LIMITS.H*, na forma de constantes. Escreva um programa que use essa biblioteca e imprima os limites mínimos e máximos que podem ser assumidos por variáveis dos tipos **char, int, short int, unsigned int, long int, unsigned long int, long long int, unsigned long long int**. Apresente os resultados em uma tabela. Faça um pequeno programa, usando uma variável à qual é atribuído um valor maior do que seu tipo permite, para demonstrar o problema que pode ocorrer. Explique o que acontece se você utilizar um valor fora dos limites dos tipos de variáveis. Em seu relatório, não esqueça de mencionar o porquê do uso de cada tipo para as variáveis utilizadas em sua implementação.

### 3.2.2 Função que invalida alguns caracteres
Implemente uma função que realize o cálculo da função proposta conforme *lib*:

```c
#ifndef REMOVE_H
#define REMOVE_H

int func_val(int x, int b);

#endif      /* REMOVE_H */
```

Implemente a função *func_val*, utilize a função *round* da biblioteca *MATH.H* para arredondar o valor do resultado
da função. Se a função retornar 0, o caractere deve ser ignorado.

# 4 Desafio Extra

<sup>Esse desafio é extra, não realizar ele não impede de conseguir todos os pontos do trabalho.</sup>

Construa um algoritmo em C que implemente o sistema de avaliação da UCB. O programa irá receber as três notas principais (N1, N2 e PPD), valide se:

* $N1 = [0; 4,5]$
* $N2 = [0; 4,5]$
* $PPD = [0; 1]$

Caso algum não esteja com valor válido, retorne código de erro 3.
Em seguida, receba uma flag que determinará se o estudante realizou o Exame Unificado (EU), 0 para não e 1 para sim.
Caso tenha feito, receba a nota do Exame Unificado, lembrando de validar se EU = [0; 1]. Também receba uma flag que defina se o estudante realizou a N3, 0 para não e 1 para sim. Caso tenha realizado, leia a N3 e também verifique se ela está no intervalo permitido, N3 = [0; 4,5] e substitua a menor nota na composição da nota final. Lembre-se que a nota final deve estar no intervalo [0; 10].
Apresente a nota final e se o estudante foi aprovado ou reprovado.