#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[2];
    char estado2[2];
    char codigo1[3];
    char codigo2[3];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int turismo1;
    int turismo2;

  // Área para entrada de dados
    printf("Digite o estado: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Digite a cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o pib: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo1);

    printf("Digite o estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Digite a cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d \n", &turismo2);

  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", turismo1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);

    
return 0;
} 
