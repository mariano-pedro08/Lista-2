
#include <stdio.h>

int main() {
    float preco_etiqueta, valor_final;
    int codigo_pagamento;


    printf("Digite o preco normal de etiqueta do produto (R$): ");
    scanf("%f", &preco_etiqueta);

    
    printf("\n--- CONDICOES DE PAGAMENTO ---\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (15%% de desconto)\n");
    printf("3 - Em 2x sem juros (preco normal)\n");
    printf("4 - Em 2x com juros (10%% de acrescimo)\n");
    printf("Escolha o codigo da condicao de pagamento (1 a 4): ");
    scanf("%d", &codigo_pagamento);

    
    if (codigo_pagamento == 1) {
        
        valor_final = preco_etiqueta * 0.90;
        printf("\nOpcao 1 Selecionada: 10%% de desconto.");
        printf("\nValor final a ser pago: R$ %.2f\n", valor_final);
    } 
    else if (codigo_pagamento == 2) {
        // 15% de desconto
        valor_final = preco_etiqueta * 0.85;
        printf("\nOpcao 2 Selecionada: 15%% de desconto.");
        printf("\nValor final a ser pago: R$ %.2f\n", valor_final);
    } 
    else if (codigo_pagamento == 3) {
        // Preço normal sem juros
        valor_final = preco_etiqueta;
        printf("\nOpcao 3 Selecionada: 2x de R$ %.2f (sem juros).", valor_final / 2);
        printf("\nValor total a ser pago: R$ %.2f\n", valor_final);
    } 
    else if (codigo_pagamento == 4) {
        
        valor_final = preco_etiqueta * 1.10;
        printf("\nOpcao 4 Selecionada: 10%% de acrescimo.");
        printf("\nValor de cada parcela (2x): R$ %.2f", valor_final / 2);
        printf("\nValor total a ser pago: R$ %.2f\n", valor_final);
    } 
    else {

        printf("\nCodigo de pagamento invalido! Digite um valor entre 1 e 4.\n");
    }

    return 0;
}
