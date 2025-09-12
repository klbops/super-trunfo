#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado [50];
  char codigo [50];
  char cidade [50];
  int populacao;
  float area;
  float pib;
  int turisticos;


  // Área para entrada de dados

  printf(" Digite o nome do estado: ");
  scanf("%s", estado);

  printf("Digite aqui o codigo: ");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade );

  printf("Digite o numero da população: ");
  scanf("%d", &populacao);

  printf("Digite a area da cidade: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite os pontos turisticos: ");
  scanf("%d", &turisticos);

  // Área para exibição dos dados da cidade
  printf(" Nome do estado: %s - codigo da cidade: %s - nome da cidade: %s - Numero da populacao: %d - area da cidade: %f - digite o pib: %f - pontos turisticos: %d", estado, codigo, cidade, populacao, area, pib, turisticos );

return 0;
} 
