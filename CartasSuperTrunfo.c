#include <stdio.h>

// Programa para cadastrar e exibir duas cartas do Super Trunfo

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4]; // Exemplo: A01
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4]; // Exemplo: B02
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01):\n");
    scanf("%c", codigo1);

    printf("Informe o Nome da Cidade:\n");
    scanf("%c", nomeCidade1); // Lê string com espaços

    printf("Informe a População:\n");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada de dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B03):\n");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade:\n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População:\n");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
