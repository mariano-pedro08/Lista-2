#include <stdio.h>
#include <stdbool.h>

main (){
   
    int entradaA, entradaB;
    bool A, B;

    printf("Digite o primeiro valor logico (1 para VERDADEIRO, 0 para FALSO): ");
    scanf("%d", &entradaA);

    printf("Digite o segundo valor logico (1 para VERDADEIRO, 0 para FALSO): ");
    scanf("%d", &entradaB);
    
    A = entradaA;
    B = entradaB;

    if (A && B) {
        printf("\nAmbos os valores sao VERDADEIROS.\n");
    } else if (!A && !B) {
        printf("\nAmbos os valores sao FALSOS.\n");
    } else {
        printf("\nOs valores sao MISTOS (um e VERDADEIRO e o outro e FALSO).\n");
    }

    return 0;
    

}
