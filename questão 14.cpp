#include <stdio.h>

int main() {
    int codigo;

    
    printf("==================================================\n");
    printf("               CARDAPIO DO RESTAURANTE            \n");
    printf("==================================================\n");
    printf(" Codigo | Prato                   | Valor         \n");
    printf("--------------------------------------------------\n");
    printf("   1    | Hamburguer com fritas   | R$ 28,00      \n");
    printf("   2    | File de frango grelhado | R$ 32,00      \n");
    printf("   3    | Lasanha a bolonhesa     | R$ 35,00      \n");
    printf("   4    | File de peixe com arroz | R$ 42,00      \n");
    printf("   5    | Salada especial         | R$ 25,00      \n");
    printf("==================================================\n");

    
    printf("Informe o codigo do prato desejado (1 a 5): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("\nPrato escolhido: Hamburguer com fritas\n");
        printf("Valor: R$ 28,00\n");
    } 
    else if (codigo == 2) {
        printf("\nPrato escolhido: File de frango grelhado\n");
        printf("Valor: R$ 32,00\n");
    } 
    else if (codigo == 3) {
        printf("\nPrato escolhido: Lasanha a bolonhesa\n");
        printf("Valor: R$ 35,00\n");
    } 
    else if (codigo == 4) {
        printf("\nPrato escolhido: File de peixe com arroz\n");
        printf("Valor: R$ 42,00\n");
    } 
    else if (codigo == 5) {
        printf("\nPrato escolhido: Salada especial\n");
        printf("Valor: R$ 25,00\n");
    } 
    else {
        printf("\nOpcao invalida\n");
    }

    return 0;
}
