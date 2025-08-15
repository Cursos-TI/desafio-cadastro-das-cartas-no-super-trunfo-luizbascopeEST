#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// O arquivo README não impõe a necessidade de NOME da cidade, mas me baseei no enunciado da aula do portal.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, 
    // número de pontos turísticos.
    int populacao1, populacao2, pontosT1, pontosT2;
    char estado1, estado2; 
    char cidade1[50], cidade2[50], codigo1[4], codigo2[4]; 
    float area1, area2, pib1, pib2; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Carta 1:
    printf("SUPER TRUNFO\n\n");
    printf("Cadastro da carta 1:\n\n");
    printf("Digite o código do Estado 1 (uma letra de A a H): ");
    scanf("%c", &estado1);
    getchar();

    printf("Digite o código da carta 1 (3 dígitos, incluindo a letra do Estado: ex: A01, B02): ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade 1: ");
    // De acordo com a dica de aula, a função fgets é mais indicada para armazenar nomes, pois aceita a inclusão de espaços
    fgets(cidade1, 50, stdin);
    // função fgets inclui um \n na string, então é necessário remove-lo, utilizando o comando abaixo:
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosT1);

    // Carta 2:
    printf("\n\n\nCadastro da carta 2:\n\n");
    getchar();
    printf("Digite o código do Estado 2 (uma letra de A a H): ");
    scanf("%c", &estado2);
    getchar();

    printf("Digite o código da carta 2 (3 dígitos, incluindo a letra do Estado: ex: A01, B02): ");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o nome da cidade 2: ");
    // De acordo com a dica de aula, a função fgets é mais indicada para armazenar nomes, pois aceita a inclusão de espaços
    fgets(cidade2, 50, stdin);
    // função fgets inclui um \n na string, então é necessário remove-lo, utilizando o comando abaixo:
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosT2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Cartas cadastradas

    printf("\n\nDados da Carta 1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosT1);

    printf("\n\nDados da Carta 2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n\n\n", pontosT2);

    return 0;
}
