#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    char codigo1[4], nome1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1, superPoder1;

    // Declaração das variáveis da carta 2
    char codigo2[4], nome2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2, superPoder2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População (em habitantes): ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População (em habitantes): ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos dos atributos extras
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1.0 / densidade1) + pibPerCapita1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1.0 / densidade2) + pibPerCapita2;

    // Exibição dos dados cadastrados
    printf("\n=====================================\n");
    printf("         CARTAS CADASTRADAS          \n");
    printf("=====================================\n");

    printf("\n>>> Carta 1 <<<\n");
    printf("Código:               %s\n", codigo1);
    printf("Nome:                 %s\n", nome1);
    printf("População:            %lu habitantes\n", populacao1);
    printf("Área:                 %.2f km²\n", area1);
    printf("PIB:                  %.2f bilhões\n", pib1);
    printf("Pontos turísticos:    %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita:         %.8f bilhões/hab\n", pibPerCapita1);
    printf("Super Poder:            %.2f\n", superPoder1);

    printf("\n>>> Carta 2 <<<\n");
    printf("Código:               %s\n", codigo2);
    printf("Nome:                 %s\n", nome2);
    printf("População:            %lu habitantes\n", populacao2);
    printf("Área:                 %.2f km²\n", area2);
    printf("PIB:                  %.2f bilhões\n", pib2);
    printf("Pontos turísticos:    %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita:         %.8f bilhões/hab\n", pibPerCapita2);
    printf("Super Poder:            %.2f\n", superPoder2);

    // Comparação dos atributos (1 = Carta 1 vence, 0 = Carta 2 vence)
    printf("\n=====================================\n");
    printf("         RESULTADO DAS COMPARAÇÕES          \n");
    printf("=====================================\n");

    printf("População:            %d\n", (populacao1 > populacao2));
    printf("Área:                 %d\n", (area1 > area2));
    printf("PIB:                  %d\n", (pib1 > pib2));
    printf("Pontos turísticos:    %d\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade populacional: %d\n", (densidade1 < densidade2)); // menor vence!
    printf("PIB per capita:         %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder:            %d\n", (superPoder1 > superPoder2));

    return 0;
}
