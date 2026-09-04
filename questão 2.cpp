

	
#include <stdio.h>
#include <string.h> 
#include <ctype.h>  

int main() {
    #include <stdio.h>
    #include <string.h>

    char nome[20], sexo, estadocivil;
    int casamento;


    printf("Digite seu nome: ");
    scanf("%s", nome); 

    
    printf("Digite seu sexo (F/M): ");
    scanf(" %c", &sexo);

    
    printf("Digite o seu estado civil (C/S): ");
    scanf(" %c", &estadocivil);

    if ((sexo == 'F' || sexo == 'f') && (estadocivil == 'C' || estadocivil == 'c')) {
        printf("Digite o total de anos do casamento: ");
        scanf("%d", &casamento);
        
        printf("\n--- Dados Cadastrados ---\n");
        printf("Nome: %s\n", nome);
        printf("Sexo: %c\n", sexo);
        printf("Estado Civil: %c\n", estadocivil);
        printf("Anos de Casamento: %d anos\n", casamento);
    } else {
        printf("\n--- Dados Cadastrados ---\n");
        printf("Nome: %s\n", nome);
        printf("Sexo: %c\n", sexo);
        printf("Estado Civil: %c\n", estadocivil);
    }



    return 0;
}
		
		
		
	
		
		
		
		
	
	

