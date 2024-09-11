    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    #include <string.h>

    // Função que verifica a se um caractere faz parte ou não da mensagem

    int func_val(int x, int b) {
        long double resultado;

        long double a0 = 186.752, a1 = -148.235, a2 = 34.5049, a3 = -3.5091, a4 = 0.183166, a5 = -0.00513554, a6 = 0.0000735464, a7 = -4.22038e-7;

        resultado = a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7);

        return round(resultado);
    }

    // Função principal

    int main(){

        int i, j, numMsg, b;
        char msgCodificada[101];

        printf("Quantas mensagens deseja decodificar? ");
        scanf("%d", &numMsg);
        fflush(stdin);

        for(i = 0; i < numMsg; i++){
            printf("\nDigite o valor do coeficiente ""b"": ");
            scanf("%d", &b);
            fflush(stdin);

            printf("Digite a mensagem codificada: ");
            scanf("%s", msgCodificada);
            fflush(stdin);

            int tamanhoString = strlen(msgCodificada);
            printf("\nMensagem decodificada: ");

            // Converte um par de caracteres hexadecimal em decimal
            for(j = 0 ; j < tamanhoString; j += 2){
                int x = j / 2 + 1;
                int valorDecimal;
                sscanf(&msgCodificada[j], "%2x", &valorDecimal);
                fflush(stdin);

                //printf(" Posicao: %d, Valor hexadecimal: %c%c, Valor decimal: %d\n", x, msgCodificada[j], msgCodificada[j + 1], valorDecimal);

                if (func_val(x, b) != 0){
                    printf("%c", valorDecimal);
                }

                // Verificação que interrompe a leitura
                if(valorDecimal == 0){
                    break;
                }
            }

            // Pula linha a cada mensagem decodificada
            printf("\n\n"); 
        }

        getchar();
        getchar();
        return 0;
    }

