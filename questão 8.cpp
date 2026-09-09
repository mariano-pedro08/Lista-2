#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[3];
    int aux;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &numeros[0]);

    printf("Digite o segundo numero: ");
    scanf("%d", &numeros [1]);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numeros [2]);

    
    if (numeros[1] > numeros[0]) {
        aux = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = aux;
    }

    
    if (numeros[2] > numeros[0]) {
        aux = numeros[0];
        numeros[0] = numeros[2];
        numeros[2] = aux;
}
    if (numeros[2] > numeros[1]) {
        aux = numeros[1];
        numeros[1] = numeros[2];
        numeros[2] = aux;
    }


    printf("\nNumeros em ordem decrescente: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]);

    return 0;
}
	
	
	
