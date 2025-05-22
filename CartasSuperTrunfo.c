#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    char codigo1[4], nome1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis da carta 2
    char codigo2[4], nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População (em milhares): ");
    scanf("%d", &populacao1);
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
    printf("População (em milhares): ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // 🔽 Aqui entra a exibição final organizada
    printf("\n=====================================\n");
    printf("         CARTAS CADASTRADAS          \n");
    printf("=====================================\n");

    printf("\n>>> Carta 1 <<<\n");
    printf("Código:               %s\n", codigo1);
    printf("Nome:                 %s\n", nome1);
    printf("População:            %d mil habitantes\n", populacao1);
    printf("Área:                 %.2f km²\n", area1);
    printf("PIB:                  %.2f bilhões\n", pib1);
    printf("Pontos turísticos:    %d\n", pontosTuristicos1);

    printf("\n>>> Carta 2 <<<\n");
    printf("Código:               %s\n", codigo2);
    printf("Nome:                 %s\n", nome2);
    printf("População:            %d mil habitantes\n", populacao2);
    printf("Área:                 %.2f km²\n", area2);
    printf("PIB:                  %.2f bilhões\n", pib2);
    printf("Pontos turísticos:    %d\n", pontosTuristicos2);

    return 0;
}
