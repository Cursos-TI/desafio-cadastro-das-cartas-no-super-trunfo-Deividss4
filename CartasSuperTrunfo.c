#include <stdio.h>

struct CartaSuperTrunfo {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;


    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados das cartas
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;

    
}