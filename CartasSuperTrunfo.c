#include <stdio.h>

int main() {
    // Carta 1: Fortaleza, Ceará
    char estado1 = 'C';
    char codigoCarta1[4] = "c01";
    char nomeCidade1[50] = "fortaleza";
    int populacao1 = 2687000;
    float area1 = 313.14;
    float pib1 = 110000.50;
    int pontosTuristicos1 = 15;

    // Carta 2: São Paulo
    char estado2 = 'B';
    char codigoCarta2[4] = "B02";
    char nomeCidade2[50] = "São Paulo";
    int populacao2 = 12300000;
    float area2 = 1521.11;
    float pib2 = 700000.50;
    int pontosTuristicos2 = 20;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: C01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Exibe Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta : ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); 

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}