#include<stdio.h>
#include<stdlib.h>

main (){
	
	int numero_inteiro;
	
	printf("Digite o  numero inteiro:");
    scanf("%d",&numero_inteiro);

   if (numero_inteiro % 2 == 0) {
   printf("O numero %d e PAR.\n",numero_inteiro);
   	
   } else {
   	
   	 printf("\n O numero %d e IMPAR\n",numero_inteiro);
   	
   }

	return 0;
		
}
