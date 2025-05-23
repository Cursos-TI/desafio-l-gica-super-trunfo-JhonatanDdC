#include <stdio.h>

int main() {
    
    // Carta 1
    char estado, codigo[20], nome[50]; // Ex: K, K01, KONOHA
    unsigned long int populacao;
    float area, pib;
    int NumerodePontosTuristicos;
    float DensidadePopulacional, PibPerCapita;

    // Carta 2
    char estado2, codigo2[20], nome2[50]; // Ex: N, N02, NAMEKUSEI
    unsigned long int populacao2;
    float area2, pib2;
    int NumeroDePontosTuristicos2;
    float DensidadePopulacional2, PibPerCapita2;

    // Entradas de dados alternadas
    printf("Informe o estado da Carta1: ");
    scanf(" %c", &estado);
    printf("Informe o estado da Carta2: ");
    scanf(" %c", &estado2);

    printf("Informe o código da Carta1: ");
    scanf("%s", codigo);
    printf("Informe o código da Carta2: ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade da Carta1: ");
    scanf("%s", nome);  
    printf("Informe o nome da cidade da Carta2: ");
    scanf("%s", nome2);

    printf("Informe a população da Carta1: ");
    scanf("%lu", &populacao);
    printf("%lu habitantes da Carta1\n", populacao);
    printf("Informe a população da Carta2: ");
    scanf("%lu", &populacao2);
    printf("%lu habitantes da Carta2\n", populacao2);

    printf("Informe a área da Carta1: ");
    scanf("%f", &area);
    printf ("Área: %.0f km²\n", area);
    printf("Informe a área da Carta2: ");
    scanf("%f", &area2);
    printf ("Área: %.0f km²\n", area2);

    printf("Informe o PIB da Carta1: ");
    scanf("%f", &pib);
    printf ("PIB Carta1: %.1f Bilhões de reais\n", pib);
    printf("Informe o PIB da Carta2: ");
    scanf("%f", &pib2);
    printf ("PIB Carta2: %.1f Bilhões de reais\n", pib2);

    printf("Informe o número de pontos turísticos da Carta1: ");
    scanf("%d", &NumerodePontosTuristicos);
    printf("Informe o número de pontos turísticos da Carta2: ");
    scanf("%d", &NumeroDePontosTuristicos2);

    // Cálculos alternados
    DensidadePopulacional = populacao / area;
    printf ("A densidade populacional da Carta1 é: %.2f habitantes por km²\n", DensidadePopulacional);
    DensidadePopulacional2 = populacao2 / area2;
    printf ("A densidade populacional da Carta2 é: %.2f habitantes por km²\n", DensidadePopulacional2);

    PibPerCapita = pib * 1000000000 / populacao; // Convertendo PIB de bilhões para reais
    printf ("O PIB per capita da Carta1 é: %.2f reais por habitante\n", PibPerCapita);
    PibPerCapita2 = pib2 * 1000000000 / populacao2; // Convertendo PIB de bilhões para reais
    printf ("O PIB per capita da Carta2 é: %.2f reais por habitante\n", PibPerCapita2);

    // Comparação das cartas (Atributos: População e Densidade Populacional)
    if (populacao > populacao2){
        printf("Carta1 venceu!\n");
    } else {
        printf("Carta2 venceu!\n");
    }

    if (DensidadePopulacional < DensidadePopulacional2){
        printf("Carta1 venceu!\n");
    } else {
        printf("Carta2 venceu!\n");
    }
    
    return 0;
}
