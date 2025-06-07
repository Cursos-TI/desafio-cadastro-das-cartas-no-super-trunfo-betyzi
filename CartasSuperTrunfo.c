#include <stdio.h>

int main() {
    
//Primeiro começo definindo as veriáveis do codigo para armazenar os dados das cartas.

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosturisticos1;
    float densidade1, pibpercapita1, superpoder1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidade2, pibpercapita2, superpoder2;

// Depo,is uso as funções certas para a entrada de dados das cartas.

    // Pegando os ndados da carata 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Coletando dados da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

//Agora uso as funções para calcular a densidade e o pib per capta das cartas 

    // Cálculando 
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidade1);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidade2);

//Agora faço as comparações das informações das cartas e exibo os resultados de qual ganhou em cada requisito

     // Comparações e resultados
    printf("\n--- Resultados das Comparações ---\n");

    printf("População: %s\n", populacao1 > populacao2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Área: %s\n", area1 > area2? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %s\n", pib1 > pib2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Pontos Turísticos: %s\n", pontosturisticos1 > pontosturisticos2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional: %s\n", densidade1 < densidade2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per Capita: %s\n", pibpercapita1 > pibpercapita2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder: %s\n", superpoder1 > superpoder2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    printf("Novo commit");
    printf("Novo commit3");

    return 0;
}