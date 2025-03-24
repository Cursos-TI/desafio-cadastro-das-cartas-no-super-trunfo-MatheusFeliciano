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

    printf("Informe os pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos);

    printf("\n--- Dados da Cidade ---\n");
    printf("Cidade: %s\n", cidade);
    printf("Código: %c\n", codigo);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;

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
