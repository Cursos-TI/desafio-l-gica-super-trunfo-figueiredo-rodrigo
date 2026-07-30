#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cidade A

    char estado_A;
    char codigoCarta_A[4];
    char nomeCidade_A[50];
    unsigned long int populacao_A;
    float area_A;
    float pib_A;
    int numeropontosTuristicos_A;
    float densidadePopulacional_A;
    float pibPerCapita_A;

    // Cidade B

    char estado_B;
    char codigoCarta_B[4];
    char nomeCidade_B[50];
    unsigned long int populacao_B;
    float area_B;
    float pib_B;
    int numeropontosTuristicos_B;
    float densidadePopulacional_B;
    float pibPerCapita_B;

    // Resultado

    float superPoder_A;
    float superPoder_B;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // # --- Primeira cidade ---#

    printf("--- Digite as informações da Carta 1 --- \n\n");

    printf("Digite a letra do primeiro Estado: ");
    scanf(" %c", &estado_A);

    printf("Digite o código da primeira carta: ");
    scanf("%3s", codigoCarta_A);

    getchar();

    printf("Digite o nome da primeira cidade: ");
    fgets(nomeCidade_A, sizeof(nomeCidade_A), stdin);

    nomeCidade_A[strcspn(nomeCidade_A, "\n")] = '\0';

    printf("Digite o total de habitantes da primeira cidade: ");
    scanf(" %lu", &populacao_A);

    printf("Digite o total da área da primeira cidade: ");
    scanf(" %f", &area_A);

    printf("Digite o PIB da primeira cidade: ");
    scanf(" %f", &pib_A);

    printf("Digite o total de pontos turísticos da primeira cidade: ");
    scanf(" %d", &numeropontosTuristicos_A);

    // # --- Segunda cidade ---#

    printf("\n--- Digite as informações da Carta 2 --- \n\n");

    printf("Digite a letra do segundo Estado: ");
    scanf(" %c", &estado_B);

    printf("Digite o código da segunda carta: ");
    scanf("%3s", codigoCarta_B);

    getchar();

    printf("Digite o nome da segunda cidade: ");
    fgets(nomeCidade_B, sizeof(nomeCidade_B), stdin);

    nomeCidade_B[strcspn(nomeCidade_B, "\n")] = '\0';

    printf("Digite o total de habitantes da segunda cidade: ");
    scanf(" %lu", &populacao_B);

    printf("Digite o total da área da segunda cidade: ");
    scanf(" %f", &area_B);

    printf("Digite o PIB da segunda cidade: ");
    scanf(" %f", &pib_B);

    printf("Digite o total de pontos turísticos da segunda cidade: ");
    scanf(" %d", &numeropontosTuristicos_B);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("\n  Comparação de cartas (Atributo: População)  \n");
    printf("Carta 1 - %s: %d\n", nomeCidade_A, populacao_A);
    printf("Carta 2 - %s: %d\n", nomeCidade_B, populacao_B);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    if (populacao_A > populacao_B)
    {
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidade_A);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!", nomeCidade_B);
    }

    printf("\n----------- FIM -----------\n");
    
    return 0;
}

/*
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
*/