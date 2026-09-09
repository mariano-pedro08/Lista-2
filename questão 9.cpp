#include <stdio.h>

main (){
	
	char sexo;
	 float peso, altura;
	
	printf("Digite altura do homem");
	scanf("%f",&altura);
	
	printf("Digite a altura da mulher");
	scanf("%f",&altura);
	
	printf("Digite o peso do homem");
	scanf("%f",&peso);
	
	printf("Digite o peso da mulher");
	scanf("%f",&peso);
	
	if  (sexo == 'M') {
        peso = (72.7 * altura) - 58;
        printf("\nO peso ideal para um homem de %.2fm e: %.2f kg\n", altura, peso);
    }





	
}
