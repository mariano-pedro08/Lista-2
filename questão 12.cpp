#include <stdio.h>

int main() {
    int id_aluno;
    float nota1, nota2, nota3, me, ma;
    char conceito;

    /*
    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d", &id_aluno);
 
    printf("Digite a Primeira Nota: ");
    scanf("%f", &nota1);

    printf("Digite a Segunda Nota: ");
    scanf("%f", &nota2);

    printf("Digite a Terceira Nota: ");
    scanf("%f", &nota3);

    printf("Digite a Media dos Exercicios (ME): ");
    scanf("%f", &me);

    
    ma = (nota1 + (nota2 * 2.0) + (nota3 * 3.0) + me) / 7.0;

    
    if (ma >= 90.0) {
        conceito = 'A';
    } 
    else if (ma >= 75.0) {
        conceito = 'B';
    } 
    else if (ma >= 60.0) {
        conceito = 'C';
    } 
    else if (ma >= 40.0) {
        conceito = 'D';
    } 
    else {
        conceito = 'E';
    }

    
    printf("\n=========================================");
    printf("\n            BOLETIM DO ALUNO             ");
    printf("\n=========================================");
    printf("\nID do Aluno:               %d", id_aluno);
    printf("\nNota 1:                    %.2f", nota1);
    printf("\nNota 2:                    %.2f", nota2);
    printf("\nNota 3:                    %.2f", nota3);
    printf("\nMedia dos Exercicios (ME): %.2f", me);
    printf("\nMedia de Aproveitamento:   %.2f", ma);
    printf("\nConceito Obtido:           %c", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("\nSituacao Final:            APROVADO\n");
    } else {
        printf("\nSituacao Final:            REPROVADO\n");
    }
    printf("=========================================\n");

    return 0;
}
