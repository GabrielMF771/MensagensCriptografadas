#include <stdio.h>
#include <stdlib.h>

int main () {

    float n1 = 0, n2 = 0, n3 = 0, ppd = 0, eu = 0, notaFinal = 0;
    int euflag, n3flag;

    printf("\nInsira a nota da N1: ");
    scanf("%f", &n1);

    if(n1 < 0 || n1 > 4.5){
        exit(3);
    }
    
    printf("\nInsira a nota da N2: ");
    scanf("%f", &n2);

    if(n1 < 0 || n1 > 4.5){
        exit(3);
    }

    printf("\nInsira a nota do PPD: ");
    scanf("%f", &ppd);

    if(ppd < 0 || ppd > 1){
        exit(3);
    }

    printf("\nFoi realizado o Exame Unificado? (1: SIM) (0:NAO): ");
    scanf("%d", &euflag);

    if(euflag < 0 || euflag > 1){
        exit(3);
    }

    if(euflag == 1){
        printf("\nQual foi a nota do EU?: ");
        scanf("%f", &eu);
    }
    
    printf("\nFoi realizado a N3? (1: SIM) (0:NAO): ");
    scanf("%d", &n3flag);
    
    if(n3flag < 0 || n3flag > 4.5){
        exit(3);
    }

    if (n3flag == 1){
        printf("\nQual foi a nota da N3? ");
        scanf("%f", &n3);
        
        if (n1 < n2){
            n1 = n3;
        }

        if (n2 < n1){
            n2 = n3;
        }

        if (n1 == n2){
            n2 = n3;
        }
    }


    notaFinal = n1 + n2 + ppd + eu;
    
    printf("\na nota final sera: %.2f", notaFinal);
    
    
    return 0;
}
