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

Sua miss˜ao ´e criar um algoritmo que decifre as mensagens intercepadas.

A mensagem está codificada em hexadecimal, em que cada 2 caracteres da mensagem representam um caractere da mensagem, ou seja, cada mensagem pode ter até 50 caracteres.
O texto é encerrado se encontrado o caractere nulo, representado pelo valor 00. O valor 00 encerrará o texto independente do resultado da função. 

Imprima a mensagem decodificada.

Utilize o cmd do Windows (Prompt de Comando), deve ser um terminal que utiliza a codificação *CP437* (também conhecida como *OEM 437* ou *DOS Latin US*).

## 3.1 Exemplo de caso de teste

### 3.1.1 Entrada

O número de mensagens interceptadas ([1, 10000]). Cada mensagem interceptada é dada por um número que representa a variável $b$ ([−100, 100]). Em seguida, a mensagem é codificada em hexadecimal, com 100 caracteres, onde cada 2 caracteres representam um número.

### 3.1.2 Saída
A mensagem decodificada.

