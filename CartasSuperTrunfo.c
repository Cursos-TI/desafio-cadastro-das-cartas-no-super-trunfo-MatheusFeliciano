#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade[20];
    char codigo;
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Informe o nome da sua cidade: \n");
    scanf(" %s", cidade);

    printf("Atribua um código a sua cidade: \n");
    scanf(" %s", &codigo);

    printf("Informe a população da sua cidade: \n");
    scanf(" %f", &populacao);
    
    printf("Informe a área da sua cidade: \n");
    scanf(" %f", &area);
    
    printf("Informe o PIB: \n");
    scanf(" %f", &pib);

    printf("Informe o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos);

    printf("\n--- Dados da Cidade 1---\n");
    printf("Cidade: %s\n", cidade);
    printf("Código: %c\n", codigo);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // -----------------------------------------------------

    char cidade2[20];
    char codigo2;
    float populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("Informe o nome da sua segunda cidade: \n");
    scanf(" %s", cidade2);

    printf("Atribua um código a sua segunda cidade: \n");
    scanf(" %s", &codigo2);

    printf("Informe a população da sua segunda cidade: \n");
    scanf(" %f", &populacao2);
    
    printf("Informe a área da sua segunda cidade: \n");
    scanf(" %f", &area2);
    
    printf("Informe o PIB: \n");
    scanf(" %f", &pib2);

    printf("Informe o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos2);

    printf("\n--- Dados da Cidade 2---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Código: %c\n", codigo2);
    printf("População: %f\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
