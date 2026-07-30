#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades

    // Cidade A

    char estado_A = 'A';
    char codigoCarta_A[4] = "A01";
    char nomeCidade_A[50] = "São Paulo";
    unsigned long int populacao_A = 12325000;
    float area_A = 1521.11;
    float pib_A = 699.28;
    int numeroPontosTuristicos_A = 50;
    float densidadePopulacional_A = populacao_A / area_A;

    // Cidade B

    char estado_B = 'B';
    char codigoCarta_B[4] = "B02";
    char nomeCidade_B[50] = "Rio de Janeiro";
    unsigned long int populacao_B = 6748000;
    float area_B = 1200.25;
    float pib_B = 300.50;
    int numeroPontosTuristicos_B = 30;
    float densidadePopulacional_B = populacao_B / area_B;

    int numeroDigitadoInicial;
    int numeroDigitadoAtributo;
    char cidadeDigitada[50];

    printf("\nDigite 1 para exibir informações das cartas\n");
    printf("Digite 2 para iniciar o jogo\n");
    scanf(" %d", &numeroDigitadoInicial);

    switch (numeroDigitadoInicial)
    {
    case 1:
        printf("Digite São Paulo ou Rio de Janeiro para exibir as inforações!\n");

        getchar();
        fgets(cidadeDigitada, sizeof(cidadeDigitada), stdin);
        cidadeDigitada[strcspn(cidadeDigitada, "\n")] = '\0';

        if (strcmp(cidadeDigitada, "São Paulo") == 0)
        {
            printf("\n  Carta 1: \n");
            printf("Estado: %c\n", estado_A);
            printf("Código: %s\n", codigoCarta_A);
            printf("Nome da cidade: %s\n", nomeCidade_A);
            printf("População: %lu\n", populacao_A);
            printf("Área: %.2f\n", area_A);
            printf("PIB: %.2f\n", pib_A);
            printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos_A);
        }
        else if (strcmp(cidadeDigitada, "Rio de Janeiro") == 0)
        {
            printf("\n  Carta 2:  \n");
            printf("Estado: %c\n", estado_B);
            printf("Código: %s\n", codigoCarta_B);
            printf("Nome da cidade: %s\n", nomeCidade_B);
            printf("População: %lu\n", populacao_B);
            printf("Área: %.2f\n", area_B);
            printf("PIB: %.2f\n", pib_B);
            printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos_B);
        }
        else
        {
            printf("Cidade invalida!!! tente novamente\n");
        }
        break;

    case 2:
        printf("\niniciando o jogo ....\n\n");
        printf("===== SUPER TRUNFO =====\n\n");
        printf("Digite o número do atibuto escolhido\n\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísiticos\n");
        printf("5 - Desidade demográfica\n");

        scanf(" %d", &numeroDigitadoAtributo);

        printf("\n===== RESULTADO =====\n\n");

        switch (numeroDigitadoAtributo)
        {
        case 1:

            printf("Nome das cidades: %s e %s\n", nomeCidade_A, nomeCidade_B);
            printf("Atributo comparado: População\n");
            printf("Valores do atributo para cada carta: ");
            printf("%s - %lu / %s - %lu\n", nomeCidade_A, populacao_A, nomeCidade_B, populacao_B);

            if (populacao_A > populacao_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_A);
            }
            else if (populacao_A < populacao_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_B);
            }
            else
            {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:

            printf("Nome das cidades: %s e %s\n", nomeCidade_A, nomeCidade_B);
            printf("Atributo comparado: Área\n");
            printf("Valores do atributo para cada carta: ");
            printf("%s - %.2f / %s - %.2f\n", nomeCidade_A, area_A, nomeCidade_B, area_B);

            if (area_A > area_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_A);
            }
            else if (area_A < area_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_B);
            }
            else
            {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:

            printf("Nome das cidades: %s e %s\n", nomeCidade_A, nomeCidade_B);
            printf("Atributo comparado: PIB\n");
            printf("Valores do atributo para cada carta: ");
            printf("%s - %.2f e %s - %.2f\n", nomeCidade_A, pib_A, nomeCidade_B, pib_B);

            if (pib_A > pib_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_A);
            }
            else if (pib_A < pib_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_B);
            }
            else
            {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:

            printf("Nome das cidades: %s e %s\n", nomeCidade_A, nomeCidade_B);
            printf("Atributo comparado: Numero Pontos Turisticos\n");
            printf("Valores do atributo para cada carta: ");
            printf("%s: %d e %s: %d\n", nomeCidade_A, numeroPontosTuristicos_A, nomeCidade_B, numeroPontosTuristicos_B);

            if (numeroPontosTuristicos_A > numeroPontosTuristicos_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_A);
            }
            else if (numeroPontosTuristicos_A < numeroPontosTuristicos_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_B);
            }
            else
            {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:

            printf("Nome das cidades: %s e %s\n", nomeCidade_A, nomeCidade_B);
            printf("Atributo comparado: Densidade Populacional\n");
            printf("Valores do atributo para cada carta: ");
            printf("%s: %.2f e %s: %.2f\n", nomeCidade_A, densidadePopulacional_A, nomeCidade_B, densidadePopulacional_B);

            if (densidadePopulacional_A < densidadePopulacional_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_A);
            }
            else if (densidadePopulacional_A > densidadePopulacional_B)
            {
                printf("A carta vencedora: %s\n", nomeCidade_B);
            }
            else
            {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Número inválido\n");
            break;
        }
        break;

    default:
        printf("Número inválido\n");
        break;
    }

    printf("\n\n----------- FIM -----------\n");

    return 0;
}
