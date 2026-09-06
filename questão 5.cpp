#include <stdio.h>
#include <stdlib.h>

main (){
	
	int numero,resultado;
	
	printf("Digite o numero");
	scanf("%d",&numero);
	
	if(numero>=0){
	resultado= numero*2;
	printf("\n O numero e positivo.Resultado e o dobro e:%d\n",resultado);
	}else{
		resultado=numero*3;
		printf("\n O numero e negativo.Resultado e o triplo e:%d\n",resultado);
		
	}
	
	return 0;
	
}
