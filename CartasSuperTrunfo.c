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
    float densidade1, pibpercapita1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidade2, pibpercapita2;

// Depois uso as funções certas para a entrada de dados das cartas.


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

    //Pegando os ndados da carata 2
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

   // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

//Por fim, exibo a informações e o resultado dos calculoas no terminal

    // Exibindo as cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
   
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    
    printf("Novo comit\n");

    return 0;
}
    // Obs: Sempre devo deixar o código organizado para facilitar a compreenção do código e arrumar possíveis erros.

