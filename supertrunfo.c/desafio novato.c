#include <stdio.h>

   int main (){
   char estado1, estado2;
   char cidade1[30], cidade2[30];
   char codigo1[4], codigo2[4];
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontos_turisticos1, pontos_turisticos2;
    
   // Cadastro das cartas
   printf ("*** cadastro das cartas super trunfo - tema: Países ***\n");

   // CARTA 1
    printf("\nCartas1 \n");
    printf("Digite o estado (A-H): ");
    scanf("%c", &estado1);   // O espaço antes do %c consome o \n do buller

    printf("Digite o nome da cidade: ");
    scanf("%29s", &cidade1); // Limita a leitura a 29 caracteres

    printf(" Digite o código da carta (ex: A01, B03): ");
    scanf(" %3s", &codigo1); // Limita a leitura a 3 caracteres

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", pontos_turisticos1);

    // CARTA 2
    
    printf("\nCartas2 \n");
    printf("Digite o estado (A-H): ");
    scanf("%c", &estado2);   // O espaço antes do %c consome o \n do buller

    printf("Digite o nome da cidade: ");
    scanf("%29s", &cidade2);   // Limita a leitura a 29 caracteres

    printf(" Digite o código da carta (ex: A01, B03): ");
    scanf(" %3s", &codigo2); // Limita a leitura a 3 caracteres

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", pontos_turisticos2);

   // Exibir os dados cadastrados da Carta 1
   printf("\nDados da Carta 1: \n");
   printf("Estado: %c\n", estado1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("Código da carta: %s\n", codigo1);
   printf("Área: %.2f km²\n", area1);
   printf("População: %d\n", populacao1);
   printf("Pontos Turísticos: %d\n", pontos_turisticos1);
   printf("PIB: %.2f\n", pib1);

   // Exibir os dados cadastrados da Carta 2
   printf("\nDados da Carta 1: \n");
   printf("Estado: %c\n", estado2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("Código da carta: %s\n", codigo2);
   printf("Área: %.2f km²\n", area2);
   printf("População: %d\n", populacao2);
   printf("Pontos Turísticos: %d\n", pontos_turisticos2);
   printf("PIB: %.2f\n", pib2);





return 0;

}