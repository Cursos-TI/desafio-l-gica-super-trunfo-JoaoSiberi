#include <stdio.h>

int main() {
    char estado [50];
    char codigo [50];
    char cidade [50];
    int pop;
    int pontos;
    float area;
    float PIB;

    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];
    int pop2;
    int pontos2;
    float area2;
    float PIB2;

    printf("Digite o nome do estado 1:\n");
    scanf ("%s", &estado);

    printf("Digite o código da carta 1 conforme o modelo A01:\n");
    scanf ("%s", &codigo);

    printf("Digite o nome da cidade 1:\n");
    scanf ("%s", &cidade);

    printf("Digite o número de habitantes da cidade 1:\n");
    scanf ("%d", &pop);

    printf("Digite a área da cidade 1:\n");
    scanf ("%f", &area);

    printf ("Digite o valor do PIB da cidade 1:\n");
    scanf ("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade 1:\n");
    scanf ("%d", &pontos);

    printf("Digite o nome do estado2:\n");
    scanf ("%s", &estado2);

    printf("Digite o código da carta 2 conforme o modelo A01:\n");
    scanf ("%s", &codigo2);

    printf("Digite o nome da cidade 2:\n");
    scanf ("%s", &cidade2);

    printf("Digite o número de habitantes da cidade 2:\n");
    scanf ("%d", &pop2);

    printf("Digite a área da cidade 2:\n");
    scanf ("%f", &area2);

    printf ("Digite o valor do PIB da cidade 2:\n");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf ("%d", &pontos2);

    float densidadeP;
    float densidadeP2;
    float PIBC;
    float PIBC2;

    densidadeP = (float)pop / area;
    densidadeP2 = (float)pop2 / area2;
    PIBC = PIB / (float) pop;
    PIBC2 = PIB2 / (float) pop2;


    printf ("Comparação de cartas (Atributo: PIB):\n");
 
    printf ("Carta 1 - %s: %f\n", cidade, PIB);
    printf ("Carta 2 - %s: %f\n", cidade2, PIB2);

    if (PIB > PIB2) {
        printf("O PIB da cidade 1 é maior que o da cidade 2\n");
    }
    else {
    
        printf("O PIB da cidade 2 é maior que o da cidade 1\n");
    }
    
    return 0;
}
