#include <stdio.h>

int main() {
    char pais [50];
    char codigo [50];
    unsigned int pop;
    int pontos;
    float area;
    float PIB;

    char pais2 [50];
    char codigo2 [50];
    unsigned int pop2;
    int pontos2;
    float area2;
    float PIB2;

    printf("Digite o nome do país 1:\n");
    scanf ("%s", &pais);

    printf("Digite o código da carta 1 conforme o modelo A01:\n");
    scanf ("%s", &codigo);

    printf("Digite o número de habitantes do país 1:\n");
    scanf ("%d", &pop);

    printf("Digite a área do país 1:\n");
    scanf ("%f", &area);

    printf ("Digite o valor do PIB do país 1:\n");
    scanf ("%f", &PIB);

    printf("Digite o número de pontos turísticos do país 1:\n");
    scanf ("%d", &pontos);

    printf("Digite o nome do país 2:\n");
    scanf ("%s", &pais2);

    printf("Digite o código da carta 2 conforme o modelo A01:\n");
    scanf ("%s", &codigo2);

    printf("Digite o número de habitantes do país 2:\n");
    scanf ("%d", &pop2);

    printf("Digite a área do país 2:\n");
    scanf ("%f", &area2);

    printf ("Digite o valor do PIB do país 2:\n");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turísticos do país 2:\n");
    scanf ("%d", &pontos2);

    float densidadeD = (float) pop / area;
    float densidadeD2 = (float) pop2 / area2;
    short int opcao; 

    printf("Digite o número do atributo que você deseja comparar.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (pop>pop2)
        {
            printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
            printf("Atributo escolhido: População\n");
            printf("O país 1 tem um total de %d habitantes, já o país 2 tem %d habitantes\n", pop, pop2);
            printf("O vencedor da comparação foi %s\n", pais);
        } else if (pop == pop2)
         {
            printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
            printf("Atributo escolhido: População\n");
            printf("O país 1 tem um total de %d habitantes, já o país 2 tem %d habitantes\n", pop, pop2);
            printf("O resultado foi um empate\n");
            }
        else {
            printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
            printf("Atributo escolhido: População\n");
            printf("O país 1 tem um total de %d habitantes, já o país 2 tem %d habitantes\n", pop, pop2);
            printf("O vencedor da comparação foi %s\n", pais2);
        }
        
        break;
    case 2:
    if (area > area2)
    {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Área\n");
        printf("O país 1 tem uma área total de: %d, já o país 2: %d\n", area, area2);
        printf("O vencedor da comparação foi %s\n", pais);
    } else if (area == area2)
     {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Área\n");
        printf("O país 1 tem uma área total de: %d, já o país 2: %d\n", area, area2);
        printf("O resultado foi um empate\n");
        }
    else {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Área\n");
        printf("O país 1 tem uma área total de: %d, já o país 2: %d\n", area, area2);
        printf("O vencedor da comparação foi %s\n", pais2);
    }
        break;
    case 3:
    if (PIB > PIB2)
    {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: PIB\n");
        printf("O país 1 tem um  PIB total de: %d, já o país 2 tem: %d\n", PIB, PIB2);
        printf("O vencedor da comparação foi %s\n", pais);
    } else if (PIB == PIB2)
     {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: PIB\n");
        printf("O país 1 tem um  PIB total de: %f, já o país 2 tem: %f\n", PIB, PIB2);
        printf("O resultado foi um empate\n");
        }
    else {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: PIB\n");
        printf("O país 1 tem um  PIB total de: %f, já o país 2 tem: %f\n", PIB, PIB2);
        printf("O vencedor da comparação foi %s\n", pais2);
    }
        break;
    case 4:
    if (pontos > pontos2)
    {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Pontos turísticos\n");
        printf("O país 1 tem %d pontos turísticos, já o país 2 tem: %d\n", pontos, pontos2);
        printf("O vencedor da comparação foi %s\n", pais);
    } else if (pontos == pontos2)
     {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Pontos turísticos\n");
        printf("O país 1 tem %d pontos turísticos, já o país 2 tem: %d\n", pontos, pontos2);
        printf("O resultado foi um empate\n");
        }
    else {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Pontos turísticos\n");
        printf("O país 1 tem %d pontos turísticos, já o país 2 tem: %d\n", pontos, pontos2);
        printf("O vencedor da comparação foi %s\n", pais2);
    }
        break;
    case 5:
    if (densidadeD < densidadeD2)
    {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Densidade Demográfica\n");
        printf("A densidade do país 1 é: %f, já a do país 2: %f\n", densidadeD, densidadeD2);
        printf("O vencedor da comparação foi %s\n", pais);
    } else if (densidadeD == densidadeD2)
     {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Densidade Demográfica\n");
        printf("A densidade do país 1 é: %f, já a do país 2: %f\n", densidadeD, densidadeD2);
        printf("O resultado foi um empate\n");
        }
    else {
        printf("A comparação será feita entre os seguintes países: %s e %s\n", pais, pais2);
        printf("Atributo escolhido: Densidade Demográfica\n");
        printf("A densidade do país 1 é: %f, já a do país 2: %f\n", densidadeD, densidadeD2);
        printf("O vencedor da comparação foi %s\n", pais2);
        break;
    }
    default:
        printf("Erro! Número inválido!");
        break;
    }
}
