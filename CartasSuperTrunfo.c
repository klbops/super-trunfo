/* inclui as funções de entrada e saída (printf, scanf) */
#include <stdio.h>

/* inclui funções para manipular strings quando necessário */
#include <string.h>

/* declara um novo tipo struct chamado Cidade que agrupa todos os campos */
typedef struct {
    /* armazena o nome da cidade */
    char nome[100];
    /* armazena a população como inteiro */
    int populacao;
    /* armazena a área em km2 como float */
    float area;
    /* armazena o PIB como float */
    float pib;
    /* armazena o número de pontos turísticos como inteiro */
    int pontos;
    /* armazena a densidade populacional calculada */
    float densidade;
    /* armazena o PIB per capita calculado */
    float pibPerCapita;
} Cidade;

/* função que lê interativamente os dados de uma cidade */
void read_city(const char *label, Cidade *c) {
    /* imprime o rótulo/etiqueta (ex.: "Carta 1") */
    printf("%s\n", label);
    /* solicita ao usuário o nome da cidade */
    printf("Nome da cidade: ");
    /* lê uma linha com espaços até '\n' e salva em c->nome */
    scanf(" %99[^\n]", c->nome);
    /* solicita ao usuário a população */
    printf("Populacao (numero inteiro): ");
    /* lê a população e armazena em c->populacao */
    scanf("%d", &c->populacao);
    /* solicita ao usuário a área */
    printf("Area (km2): ");
    /* lê a área e armazena em c->area */
    scanf("%f", &c->area);
    /* solicita ao usuário o PIB */
    printf("PIB: ");
    /* lê o PIB e armazena em c->pib */
    scanf("%f", &c->pib);
    /* solicita ao usuário o número de pontos turísticos */
    printf("Numero de pontos turisticos: ");
    /* lê e armazena o número de pontos turísticos em c->pontos */
    scanf("%d", &c->pontos);
}

/* função que calcula propriedades derivadas da cidade */
void calculate_metrics(Cidade *c) {
    /* calcula densidade populacional como populacao / area e armazena em c->densidade */
    c->densidade = (float)c->populacao / c->area;
    /* calcula PIB per capita como pib / populacao e armazena em c->pibPerCapita */
    c->pibPerCapita = c->pib / (float)c->populacao;
}

/* função que imprime os dados completos da cidade */
void print_city(const char *label, const Cidade *c) {
    /* imprime uma linha em branco seguida do rótulo (ex.: "Carta 1:") */
    printf("\n%s\n", label);
    /* exibe o nome da cidade */
    printf("Nome da Cidade: %s\n", c->nome);
    /* exibe a população */
    printf("Populacao: %d\n", c->populacao);
    /* exibe a área com duas casas decimais */
    printf("Area: %.2f km2\n", c->area);
    /* exibe o PIB com duas casas decimais */
    printf("PIB: %.2f\n", c->pib);
    /* exibe a densidade populacional com duas casas decimais */
    printf("Densidade Populacional: %.2f hab/km2\n", c->densidade);
    /* exibe o PIB per capita com duas casas decimais */
    printf("PIB per Capita: %.2f\n", c->pibPerCapita);
    /* exibe o número de pontos turísticos */
    printf("Numero de Pontos Turisticos: %d\n", c->pontos);
}

/* função principal do programa */
int main(void) {
    /* declara variável cidade1 do tipo Cidade */
    Cidade cidade1;
    /* declara variável cidade2 do tipo Cidade */
    Cidade cidade2;

    /* chama read_city para preencher os dados de cidade1 */
    read_city("Carta 1", &cidade1);
    /* chama read_city para preencher os dados de cidade2 */
    read_city("\nCarta 2", &cidade2);

    /* calcula densidade e PIB per capita para cidade1 */
    calculate_metrics(&cidade1);
    /* calcula densidade e PIB per capita para cidade2 */
    calculate_metrics(&cidade2);

    /* imprime todos os dados calculados e informados de cidade1 */
    print_city("Carta 1:", &cidade1);
    /* imprime todos os dados calculados e informados de cidade2 */
    print_city("Carta 2:", &cidade2);

    /* retorna 0 para indicar execução bem sucedida ao sistema operacional */
    return 0;
}
