#include <stdio.h>


int main() {
  // carta 1
  char estado1 = 'A';
  char CodigoCarta1[4] = "A01";
  char NomeCidade1[50] = "riodejaneiro";
  int populacao1 = 6748000;
  float area1 = 1182.3;
float pib1 = 400000.75;
int pontoTuristico1 = 25;


// carta 2
char estado2 = 'B';
char codigoCarta2[4] = "B02";
char NomeCidade2[50] = "São paulo";
int populacao2 = 12300000;
float area2 = 1521.11;
float pib2 = 700000.50;
int pontoTuristico2 = 20;


// dados das cartas
printf("=== Dados das Cartas ===\n");

printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", CodigoCarta1);
printf("cidade: %s\n", NomeCidade1);
printf("Populaçao: %d\n", populacao1);
printf("area: %.2f km²\n", area1);
printf("pib: %.2f\n", pib1);
printf("pontos turistico: %d\n", pontoTuristico1);


printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigoCarta2);
printf("cidade: %s\n", NomeCidade2);
printf("Populaçao: %d\n", populacao2);
printf("area: %.2f km²\n", area2);
printf("pib: %.2f\n", pib2);
printf("pontos turistico: %d\n", pontoTuristico2);

return 0;
} 
