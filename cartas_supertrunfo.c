#include <stdio.h>

int main(void) {
    char nome1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("Carta 1\n");
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome1);
    printf("Populacao (numero inteiro): ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCarta 2\n");
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome2);
    printf("Populacao (numero inteiro): ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 / (float)populacao1;

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / (float)populacao2;

    printf("\nCarta 1:\n");
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
