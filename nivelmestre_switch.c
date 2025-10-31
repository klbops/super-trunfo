#include <stdio.h>
#include <string.h> // Necessário para strcpy (copiar strings)

int main(void) {
    // --- Variáveis das Cartas (Países) ---
    char nome1[100], nome2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;

    // --- Variáveis de Lógica do Jogo ---
    int opcao1, opcao2;
    float val1_c1, val1_c2; // Valor do Atributo 1 para Carta 1 e 2
    float val2_c1, val2_c2; // Valor do Atributo 2 para Carta 1 e 2
    float soma_c1, soma_c2; // Soma final para cada carta
    char nome_attr1[30], nome_attr2[30]; // Nomes dos atributos escolhidos

    // --- 1. CADASTRO DAS CARTAS ---
    printf("--- Cadastro da Carta 1 (Pais 1) ---\n");
    printf("Nome do pais: ");
    scanf(" %99[^\n]", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\n--- Cadastro da Carta 2 (Pais 2) ---\n");
    printf("Nome do pais: ");
    scanf(" %99[^\n]", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // --- 2. CÁLCULOS INICIAIS ---
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // --- 3. LOOP PRINCIPAL DO JOGO ---
    do {
        // --- 4. MENU 1 (Escolha do Primeiro Atributo) ---
        printf("\n\n--- SUPER TRUNFO: ESCOLHA DUPLA ---");
        printf("\nCartas na mesa: %s vs %s\n", nome1, nome2);
        printf("\nEscolha o PRIMEIRO atributo (1-5) ou Sair (6):\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Demografica\n");
        printf("6. Sair do Jogo\n");
        printf("Opcao 1: ");
        scanf("%d", &opcao1);

        // --- 5. ESTRUTURA SWITCH PRINCIPAL ---
        // Usamos "case 1: case 2:... case 5:" para agrupar toda a lógica
        // de comparação em um só lugar, separando-a do "case 6: Sair".
        
        switch (opcao1) {
            case 1: // Populacao
            case 2: // Area
            case 3: // PIB
            case 4: // Pontos Turisticos
            case 5: // Densidade
                
                // --- 6. MENU 2 (Dinâmico) ---
                printf("\nEscolha o SEGUNDO atributo (diferente do 1):\n");
                // O menu é dinâmico: só mostra opções que NÃO foram a 'opcao1'
                if (opcao1 != 1) { printf("1. Populacao\n"); }
                if (opcao1 != 2) { printf("2. Area\n"); }
                if (opcao1 != 3) { printf("3. PIB\n"); }
                if (opcao1 != 4) { printf("4. Pontos Turisticos\n"); }
                if (opcao1 != 5) { printf("5. Densidade Demografica\n"); }
                printf("Opcao 2: ");
                scanf("%d", &opcao2);

                // --- 7. VALIDAÇÃO DAS ESCOLHAS ---
                if (opcao2 == opcao1) {
                    printf("\nErro! Voce nao pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
                    continue; // Reinicia o loop 'do-while'
                }
                if (opcao2 < 1 || opcao2 > 5) {
                    printf("\nErro! Opcao 2 invalida. Tente novamente.\n");
                    continue; // Reinicia o loop 'do-while'
                }

                // --- 8. EXTRAÇÃO DE DADOS (Atributo 1) ---
                // Pega os valores da 'opcao1' e guarda em 'val1_c1' e 'val1_c2'
                switch (opcao1) {
                    case 1:
                        val1_c1 = (float)populacao1;
                        val1_c2 = (float)populacao2;
                        strcpy(nome_attr1, "Populacao");
                        break;
                    case 2:
                        val1_c1 = area1;
                        val1_c2 = area2;
                        strcpy(nome_attr1, "Area");
                        break;
                    case 3:
                        val1_c1 = pib1;
                        val1_c2 = pib2;
                        strcpy(nome_attr1, "PIB");
                        break;
                    case 4:
                        val1_c1 = (float)pontos1;
                        val1_c2 = (float)pontos2;
                        strcpy(nome_attr1, "Pontos Turisticos");
                        break;
                    case 5:
                        val1_c1 = densidade1;
                        val1_c2 = densidade2;
                        strcpy(nome_attr1, "Densidade");
                        break;
                }

                // --- 9. EXTRAÇÃO DE DADOS (Atributo 2) ---
                // Pega os valores da 'opcao2' e guarda em 'val2_c1' e 'val2_c2'
                switch (opcao2) {
                    case 1:
                        val2_c1 = (float)populacao1;
                        val2_c2 = (float)populacao2;
                        strcpy(nome_attr2, "Populacao");
                        break;
                    case 2:
                        val2_c1 = area1;
                        val2_c2 = area2;
                        strcpy(nome_attr2, "Area");
                        break;
                    case 3:
                        val2_c1 = pib1;
                        val2_c2 = pib2;
                        strcpy(nome_attr2, "PIB");
                        break;
                    case 4:
                        val2_c1 = (float)pontos1;
                        val2_c2 = (float)pontos2;
                        strcpy(nome_attr2, "Pontos Turisticos");
                        break;
                    case 5:
                        val2_c1 = densidade1;
                        val2_c2 = densidade2;
                        strcpy(nome_attr2, "Densidade");
                        break;
                }

                // --- 10. CÁLCULO DA SOMA E EXIBIÇÃO ---
                soma_c1 = val1_c1 + val2_c1;
                soma_c2 = val1_c2 + val2_c2;

                printf("\n\n--- RESULTADO DA BATALHA ---");
                printf("\nAtributos comparados: %s + %s\n", nome_attr1, nome_attr2);
                printf("----------------------------------------\n");
                
                // Carta 1
                printf("Pais: %s\n", nome1);
                printf("  %s: %.2f\n", nome_attr1, val1_c1);
                printf("  %s: %.2f\n", nome_attr2, val2_c1);
                printf("  SOMA TOTAL: %.2f\n", soma_c1);
                printf("----------------------------------------\n");

                // Carta 2
                printf("Pais: %s\n", nome2);
                printf("  %s: %.2f\n", nome_attr1, val1_c2);
                printf("  %s: %.2f\n", nome_attr2, val2_c2);
                printf("  SOMA TOTAL: %.2f\n", soma_c2);
                printf("----------------------------------------\n");

                // --- 11. LÓGICA DO VENCEDOR (Maior Soma Vence) ---
                if (soma_c1 > soma_c2) {
                    printf("VENCEDOR: %s vence!\n", nome1);
                } else if (soma_c2 > soma_c1) {
                    printf("VENCEDOR: %s vence!\n", nome2);
                } else {
                    printf("VENCEDOR: Empate!\n");
                }

                break; // Fim do 'case 1 ... 5'

            case 6: // Sair
                printf("\nSaindo do jogo... Obrigado por jogar!\n");
                break;

            default: // Opção Inválida
                printf("\nOpcao invalida! Por favor, escolha um numero entre 1 e 6.\n");
        }
    } while (opcao1 != 6); // O loop continua enquanto a opção não for 6

    return 0;
}