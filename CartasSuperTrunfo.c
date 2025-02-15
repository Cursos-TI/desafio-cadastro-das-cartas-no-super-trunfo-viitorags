#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Variaveis:
    int codigoCidade;
    char cidade[100];
    float populacao;
    float area;
    float PIB;
    int pontosTuristicos;

    // Cadastro das Cartas:
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o codigo da cidade: \n");
    scanf("%i", &codigoCidade);

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%i", &pontosTuristicos);

    printf("\n");

    // Exibição dos Dados das Cartas:
    printf("Cidade: %s\n", cidade);
    printf("Código da cidade: %d\n", codigoCidade);
    printf("População: %.2f milhões\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("Quantidade de pontos turísticos: %d\n", pontosTuristicos);


    return 0;
}
