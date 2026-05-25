#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    int nCarta, populacao, pontoTuristico;
    char cod[100];
    char nome[100];
    float area;
    float pib;

  // Área para entrada de dados

    printf("Digite o numero da carta: ");
    scanf(" %d", &nCarta);
    
    printf("Digite o codigo da carta: ");
    scanf(" %s", cod);
    
    printf("Digite o nome da Cidade: ");
    scanf(" %s", nome);
    
    printf("Digite a populacao da Cidade: ");
    scanf(" %d", &populacao);
    
    printf("Digite a area da Cidade: ");
    scanf(" %f", &area);
    
    while(getchar() != '\n'); //Utilizei para limpar o buffer do teclado, evitando que o scanf anterior deixe um \n para o próximo scanf ler.
    
    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &pib);
    printf("Digite o numero de pontos turisticos da Cidade: ");
    scanf(" %d", &pontoTuristico);

  // Área para exibição dos dados da cidade

  printf("\nNumero da carta: %d", nCarta);
  printf("\nCodigo da carta: %s", cod);
  printf("\nNome da Cidade: %s", nome);
  printf("\nPopulacao da Cidade: %d", populacao);
  printf("\nArea da Cidade: %.2f", area);
  printf("\nPIB da Cidade: %.2f", pib);
  printf("\nNumero de pontos turisticos da Cidade: %d\n", pontoTuristico);

  return 0;
} 
