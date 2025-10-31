#include <stdio.h>

int main(void) {
    // --- Variáveis da Carta 1 (País 1) ---
    char nome1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // --- Variáveis da Carta 2 (País 2) ---
    char nome2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // --- Variáveis Calculadas ---
    float densidade1;
    float densidade2;

    // --- Variável de Controle do Menu ---
    int opcao;

    // --- Leitura dos dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome do pais: ");
    scanf(" %99[^\n]", nome1);
    printf("Populacao (numero inteiro): ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // --- Leitura dos dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome do pais: ");
    scanf(" %99[^\n]", nome2);
    printf("Populacao (numero inteiro): ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // --- Cálculos (apenas o necessário para o menu) ---
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // --- Menu Interativo (Loop) ---
    do {
        printf("\n--- SUPER TRUNFO - HORA DA BATALHA! ---\n");
        printf("Cartas na mesa: %s vs %s\n", nome1, nome2);
        printf("Escolha o atributo para comparar:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Demografica (menor vence!)\n");
        printf("6. Sair do Jogo\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Estrutura switch para lidar com a escolha do jogador
        switch (opcao) {
            case 1: // Comparação de População (Maior vence)
                printf("\n--- Comparando: Populacao ---\n");
                printf("%s: %lu habitantes\n", nome1, populacao1);
                printf("%s: %lu habitantes\n", nome2, populacao2);
                
                if (populacao1 > populacao2) {
                    printf("Resultado: %s vence!\n", nome1);
                } else if (populacao2 > populacao1) {
                    printf("Resultado: %s vence!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 2: // Comparação de Área (Maior vence)
                printf("\n--- Comparando: Area ---\n");
                printf("%s: %.2f km2\n", nome1, area1);
                printf("%s: %.2f km2\n", nome2, area2);

                if (area1 > area2) {
                    printf("Resultado: %s vence!\n", nome1);
                } else if (area2 > area1) {
                    printf("Resultado: %s vence!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 3: // Comparação de PIB (Maior vence)
                printf("\n--- Comparando: PIB ---\n");
                printf("%s: %.2f (bilhoes)\n", nome1, pib1);
                printf("%s: %.2f (bilhoes)\n", nome2, pib2);

                if (pib1 > pib2) {
                    printf("Resultado: %s vence!\n", nome1);
                } else if (pib2 > pib1) {
                    printf("Resultado: %s vence!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 4: // Comparação de Pontos Turísticos (Maior vence)
                printf("\n--- Comparando: Pontos Turisticos ---\n");
                printf("%s: %d pontos\n", nome1, pontos1);
                printf("%s: %d pontos\n", nome2, pontos2);

                if (pontos1 > pontos2) {
                    printf("Resultado: %s vence!\n", nome1);
                } else if (pontos2 > pontos1) {
                    printf("Resultado: %s vence!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 5: // Comparação de Densidade (MENOR vence)
                printf("\n--- Comparando: Densidade Demografica (Menor vence) ---\n");
                printf("%s: %.2f hab/km2\n", nome1, densidade1);
                printf("%s: %.2f hab/km2\n", nome2, densidade2);

                // Regra invertida: menor valor ganha
                if (densidade1 < densidade2) {
                    printf("Resultado: %s vence!\n", nome1);
                } else if (densidade2 < densidade1) {
                    printf("Resultado: %s vence!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 6: // Sair
                printf("\nSaindo do jogo... Obrigado por jogar!\n");
                break;

            default: // Opção Inválida
                printf("\nOpcao invalida! Por favor, escolha um numero entre 1 e 6.\n");
        }
    // O loop continua enquanto a opção do usuário não for 6 (Sair)
    } while (opcao != 6);

    return 0;
}