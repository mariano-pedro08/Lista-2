#include <stdio.h>
#include <stdlib.h>
main (){
	
	int numero_inteiro,resultado;
	
	printf("Digite o numero inteiro");
	scanf("%i",&numero_inteiro);
	
if (numero_inteiro % 2 == 0) {
        resultado = numero_inteiro + 5;
        printf("\nO numero %d e par. Resultado (+5): %d\n", numero_inteiro, resultado);
    } else {
        resultado = numero_inteiro + 8;
        printf("\nO numero %d e impar. Resultado (+8): %d\n", numero_inteiro, resultado);
    }

     
  return 0;
}
