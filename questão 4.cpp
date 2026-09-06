#include<stdio.h>
#include<stdlib.h>

main (){
	
	int A,B, resultado;
	
	printf("Digite o valor de A");
	scanf("%i",&A);
	printf("Digite o valor de B");
	scanf("%i",&B);
	

	
	if(A==B){
	resultado= A+B;
	printf("\nOs valores sao iguais.Resultado da soma (A+B):%d\n");
	
   }else{
   
   resultado=A*B;
   
   printf("\n o valor e diferente.Resultado da multiplicação (A*B):%d\n");
   
}


	return 0;
		
