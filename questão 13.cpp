#include <stdio.h>

int main() {
    float vel_maxima, vel_registrada;
    float percentual_excedido;
    
    printf("Digite a velocidade maxima permitida na via (km/h): ");
    scanf("%f", &vel_maxima);

    printf("Digite a velocidade registrada do veiculo (km/h): ");
    scanf("%f", &vel_registrada);

    printf("\n=========================================\n");
    printf("         RELATORIO DE FISCALIZACAO       \n");
    printf("=========================================\n");
    printf("Limite da via:          %.1f km/h\n", vel_maxima);
    printf("Velocidade registrada:  %.1f km/h\n", vel_registrada);

    
    if (vel_registrada <= vel_maxima) {
        printf("Percentual excedido:    0.00%%\n");
        printf("Classificacao:          Nao houve infracao.\n");
    } 
    else {
        
        percentual_excedido = ((vel_registrada - vel_maxima) / vel_maxima) * 100.0;
        printf("Percentual excedido:    %.2f%%\n", percentual_excedido);

    }
      if (percentual_excedido <= 20.0) {
            printf("Classificacao:          Infracao MEDIA\n");
        } 
        else if (percentual_excedido <= 50.0) {
            printf("Classificacao:          Infracao GRAVE\n");
        } 
        else {
            printf("Classificacao:          Infracao GRAVISSIMA\n");
        }


        if (vel_registrada > 120.0) {
            printf("\nALERTA: Velocidade extremamente elevada! Risco alto de acidente.\n");
        }
    

    printf("=========================================\n");

    return 0;
}
