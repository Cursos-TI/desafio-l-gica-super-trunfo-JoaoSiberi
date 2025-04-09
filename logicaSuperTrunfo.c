#include <stdio.h>

int main() {
    // Dados dos países
    char nome1[50], nome2[50];
    float populacao1, populacao2;
    float area1, area2;
    int pontosTuristicos1, pontosTuristicos2;
    float pib1, pib2;
    float densidade1, densidade2;

    // Entrada de dados do país 1
    printf("Digite o nome do primeiro país: ");
    scanf("%s", nome1);
    printf("Digite a população de %s: ", nome1);
    scanf("%f", &populacao1);
    printf("Digite a área de %s: ", nome1);
    scanf("%f", &area1);
    printf("Digite o número de pontos turísticos de %s: ", nome1);
    scanf("%d", &pontosTuristicos1);
    printf("Digite o PIB de %s: ", nome1);
    scanf("%f", &pib1);

    // Entrada de dados do país 2
    printf("\nDigite o nome do segundo país: ");
    scanf("%s", nome2);
    printf("Digite a população de %s: ", nome2);
    scanf("%f", &populacao2);
    printf("Digite a área de %s: ", nome2);
    scanf("%f", &area2);
    printf("Digite o número de pontos turísticos de %s: ", nome2);
    scanf("%d", &pontosTuristicos2);
    printf("Digite o PIB de %s: ", nome2);
    scanf("%f", &pib2);

    // Cálculo das densidades demográficas
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Menu de atributos para comparação
    int opcao1, opcao2;
    float valor1_p1 = 0, valor2_p1 = 0, valor1_p2 = 0, valor2_p2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pontos Turísticos\n");
    printf("4 - PIB\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número da primeira opção: ");
    scanf("%d", &opcao1);
    printf("Digite o número da segunda opção: ");
    scanf("%d", &opcao2);

    // Atribuição dos valores de acordo com as escolhas
    switch (opcao1) {
        case 1:
            valor1_p1 = populacao1;
            valor1_p2 = populacao2;
            break;
        case 2:
            valor1_p1 = area1;
            valor1_p2 = area2;
            break;
        case 3:
            valor1_p1 = pontosTuristicos1;
            valor1_p2 = pontosTuristicos2;
            break;
        case 4:
            valor1_p1 = pib1;
            valor1_p2 = pib2;
            break;
        case 5:
            valor1_p1 = densidade1;
            valor1_p2 = densidade2;
            break;
        default:
            printf("Erro! Informe um número no intervalo correto.\n");
            return 1;
    }

    switch (opcao2) {
        case 1:
            valor2_p1 = populacao1;
            valor2_p2 = populacao2;
            break;
        case 2:
            valor2_p1 = area1;
            valor2_p2 = area2;
            break;
        case 3:
            valor2_p1 = pontosTuristicos1;
            valor2_p2 = pontosTuristicos2;
            break;
        case 4:
            valor2_p1 = pib1;
            valor2_p2 = pib2;
            break;
        case 5:
            valor2_p1 = densidade1;
            valor2_p2 = densidade2;
            break;
        default:
            printf("Erro! Informe um número no intervalo correto.\n");
            return 1;
    }

    // Soma dos dois atributos escolhidos para cada país
    soma1 = valor1_p1 + valor2_p1;
    soma2 = valor1_p2 + valor2_p2;

    // Impressão dos resultados
    printf("\nComparação entre os países:\n");
    printf("País 1: %s\n", nome1);
    printf("País 2: %s\n", nome2);

    printf("\nAtributo 1 escolhido: %d\n", opcao1);
    printf("Atributo 2 escolhido: %d\n", opcao2);

    printf("\nValores do país %s:\n", nome1);
    printf("Atributo 1: %.2f\n", valor1_p1);
    printf("Atributo 2: %.2f\n", valor2_p1);
    printf("Soma: %.2f\n", soma1);

    printf("\nValores do país %s:\n", nome2);
    printf("Atributo 1: %.2f\n", valor1_p2);
    printf("Atributo 2: %.2f\n", valor2_p2);
    printf("Soma: %.2f\n", soma2);

    // Comparação individual dos atributos
    printf("\nResultado da comparação por atributo:\n");

    if (valor1_p1 > valor1_p2) {
        printf("No atributo 1 (%d), %s venceu.\n", opcao1, nome1);
    } else if (valor1_p2 > valor1_p1) {
        printf("No atributo 1 (%d), %s venceu.\n", opcao1, nome2);
    } else {
        printf("No atributo 1 (%d), houve empate.\n", opcao1);
    }

    if (valor2_p1 > valor2_p2) {
        printf("No atributo 2 (%d), %s venceu.\n", opcao2, nome1);
    } else if (valor2_p2 > valor2_p1) {
        printf("No atributo 2 (%d), %s venceu.\n", opcao2, nome2);
    } else {
        printf("No atributo 2 (%d), houve empate.\n", opcao2);
    }

    // Verificação de vencedor geral
    printf("\nResultado final da soma:\n");
    if (soma1 > soma2) {
        printf("%s venceu com a maior soma dos atributos!\n", nome1);
    } else if (soma2 > soma1) {
        printf("%s venceu com a maior soma dos atributos!\n", nome2);
    } else {
        printf("Houve um empate na soma dos atributos!\n");
    }

    return 0;
}