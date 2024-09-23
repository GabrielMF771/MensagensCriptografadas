#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("+--------------------------+------------------------------+------------------------------+\n");
    printf("| Tipo                     | Mínimo                       | Máximo                       |\n");
    printf("+--------------------------+------------------------------+------------------------------+\n");
    printf("| char                     | %28d | %28d |\n", CHAR_MIN, CHAR_MAX);
    printf("| int                      | %28d | %28d |\n", INT_MIN, INT_MAX);
    printf("| short int                | %28d | %28d |\n", SHRT_MIN, SHRT_MAX);
    printf("| unsigned int             | %28u | %28u |\n", 0, UINT_MAX);
    printf("| long int                 | %28ld | %28ld |\n", LONG_MIN, LONG_MAX);
    printf("| unsigned long int        | %28lu | %28lu |\n", 0UL, ULONG_MAX); // Corrigido para %lu
    printf("| long long int            | %28lld | %28lld |\n", LLONG_MIN, LLONG_MAX); // Corrigido para %lld
    printf("| unsigned long long int   | %28llu | %28llu |\n", 0ULL, ULLONG_MAX); // Corrigido para %llu
    printf("+--------------------------+------------------------------+------------------------------+\n");

    // Exemplo de ultrapassagem de limite
    int valor = INT_MAX; // Atribuindo o valor máximo
    printf("\nValor inicial (INT_MAX): %d\n", valor);
    valor += 1; // Tentativa de ultrapassar o limite
    printf("Valor após ultrapassagem: %d\n", valor);

    return 0;
}
