#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    // Aqui, declaramos as variáveis que armazenarão os dados da primeira carta.
    // Cada variável representa um atributo da cidade, como código, nome, população, etc.
    char codigo1[4];             // Código da cidade (ex: A01), um array de caracteres com tamanho 4 (3 caracteres + '\0').
    char nome1[50];               // Nome da cidade, um array de caracteres com tamanho 50.
    unsigned long int populacao1; // População da cidade, um inteiro longo sem sinal.
    int pontosTuristicos1;        // Número de pontos turísticos na cidade, um inteiro.
    float area1, pib1;            // Área (km²) e PIB (em bilhões) da cidade, números de ponto flutuante.
    float densidade1, pibPerCapita1, superPoder1; // Variáveis para cálculos, também de ponto flutuante.

    // Declaração das variáveis da carta 2
    // Semelhante ao bloco anterior, mas para a segunda carta.
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2, superPoder2;

    // Cadastro da Carta 1
    // Esta seção é responsável por receber os dados da primeira carta do usuário.
    printf("Cadastro da Carta 1:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1); // Lê o código da cidade do usuário.
    printf("Nome da cidade: ");
    scanf("%s", nome1);   // Lê o nome da cidade.
    printf("População (em habitantes): ");
    scanf("%lu", &populacao1); // Lê a população.  O %lu é usado para ler unsigned long int.
    printf("Área (em km²): ");
    scanf("%f", &area1);   // Lê a área.
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);    // Lê o PIB.
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos.

    // Cadastro da Carta 2
    // Similar ao bloco anterior, mas para a segunda carta.
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
    // Nesta seção, calculamos a densidade populacional e o PIB per capita.
    densidade1 = populacao1 / area1;         // Calcula a densidade populacional da carta 1.
    pibPerCapita1 = pib1 / populacao1;       // Calcula o PIB per capita da carta 1.
    densidade2 = populacao2 / area2;         // Calcula a densidade populacional da carta 2.
    pibPerCapita2 = pib2 / populacao2;       // Calcula o PIB per capita da carta 2.

    // Cálculo do Super Poder
    // O "Super Poder" é calculado somando vários atributos da cidade.
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1.0 / densidade1) + pibPerCapita1; // Calcula o "Super Poder" da carta 1.
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1.0 / densidade2) + pibPerCapita2; // Calcula o "Super Poder" da carta 2.

    // Exibição dos dados cadastrados
    // Esta parte do código exibe os dados das duas cartas de forma organizada.
    printf("\n=====================================\n");
    printf("         CARTAS CADASTRADAS          \n");
    printf("=====================================\n");

    printf("\n>>> Carta 1 <<<\n");
    printf("Código:               %s\n", codigo1);                // Imprime o código da carta 1.
    printf("Nome:                 %s\n", nome1);                  // Imprime o nome da carta 1.
    printf("População:            %lu habitantes\n", populacao1);   // Imprime a população da carta 1.
    printf("Área:                 %.2f km²\n", area1);             // Imprime a área da carta 1 (com 2 casas decimais).
    printf("PIB:                  %.2f bilhões\n", pib1);          // Imprime o PIB da carta 1 (com 2 casas decimais).
    printf("Pontos turísticos:    %d\n", pontosTuristicos1);      // Imprime o número de pontos turísticos da carta 1.
    printf("Densidade populacional: %.2f hab/km²\n", densidade1); // Imprime a densidade populacional da carta 1.
    printf("PIB per capita:         %.8f bilhões/hab\n", pibPerCapita1); // Imprime o PIB per capita da carta 1 (com 8 casas decimais).
    printf("Super Poder:            %.2f\n", superPoder1);        // Imprime o "Super Poder" da carta 1 (com 2 casas decimais).

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
    // Esta seção compara os atributos das duas cartas e indica qual carta "vence" em cada atributo.
    printf("\n=====================================\n");
    printf("         RESULTADO DAS COMPARAÇÕES          \n");
    printf("=====================================\n");

    printf("População:            %d\n", (populacao1 > populacao2));            // Compara a população.
    printf("Área:                 %d\n", (area1 > area2));                      // Compara a área.
    printf("PIB:                  %d\n", (pib1 > pib2));                        // Compara o PIB.
    printf("Pontos turísticos:    %d\n", (pontosTuristicos1 > pontosTuristicos2)); // Compara o número de pontos turísticos.
    printf("Densidade populacional: %d\n", (densidade1 < densidade2));          // Compara a densidade populacional (menor vence).
    printf("PIB per capita:         %d\n", (pibPerCapita1 > pibPerCapita2));     // Compara o PIB per capita.
    printf("Super Poder:            %d\n", (superPoder1 > superPoder2));          // Compara o "Super Poder".

    return 0; // Indica que o programa foi executado com sucesso.
}
