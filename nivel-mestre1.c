#include <stdio.h>

int main(void) {
    // --- Variáveis da Carta 1 ---
    char nome1[100];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontos1;

    // --- Variáveis da Carta 2 ---
    char nome2[100];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontos2;

    // --- Leitura dos dados da Carta 1 ---
    printf("Carta 1\n");
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome1);
    printf("Populacao (numero inteiro): ");
    scanf("%lu", &populacao1); // Alterado para %lu para ler unsigned long int
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // --- Leitura dos dados da Carta 2 ---
    printf("\nCarta 2\n");
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome2);
    printf("Populacao (numero inteiro): ");
    scanf("%lu", &populacao2); // Alterado para %lu para ler unsigned long int
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // --- Cálculos para a Carta 1 ---
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 / (float)populacao1;
    // NOVO: Cálculo do Super Poder 1
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1 / densidade1);


    // --- Cálculos para a Carta 2 ---
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / (float)populacao2;
    // NOVO: Cálculo do Super Poder 2
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1 / densidade2);


    // --- Exibição dos dados das cartas ---
    printf("\n--- DADOS DAS CARTAS ---\n");
    printf("Carta 1:\n");
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1); // Alterado para %lu
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Super Poder: %.2f\n", superPoder1); // Mostrando o super poder

    printf("\nCarta 2:\n");
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2); // Alterado para %lu
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Super Poder: %.2f\n", superPoder2); // Mostrando o super poder


    // --- NOVO: Seção de Comparação ---
    printf("\n--- COMPARACAO DAS CARTAS ---\n");

    // Comparação de População (maior vence)
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    // Comparação de Área (maior vence)
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }

    // Comparação de PIB (maior vence)
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // Comparação de Pontos Turísticos (maior vence)
    if (pontos1 > pontos2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    // Comparação de Densidade Populacional (MENOR vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // Comparação de PIB per Capita (maior vence)
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Comparação de Super Poder (maior vence)
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }


    return 0;
}