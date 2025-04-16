#include <stdio.h>


int main() {
    char estado1 = 'Minas';
    char estado2 = 'Ceará'; 
    char cidade[50];
    int populacao, numerodepontosturisticos;
    float pib, area; 

    printf("Estado 1: \n, estado1");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a área em km: \n");
    scanf("%f", &area);

    printf("Estado 2: \n", estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a área em km: \n");
    scanf("%f", &area);




    return 0;
}
