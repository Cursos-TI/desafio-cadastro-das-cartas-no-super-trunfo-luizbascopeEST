#include <stdio.h>
#include <string.h> //biblioteca para a função strcspn

// Desafio Super Trunfo - Países
// Este código finalizado contém o desenvolvimento da atividade de SUPER TRUNFO, o qual envolve:
// Cadastro de duas cartas de cidades, cálculo de novas variáveis a partir dos dados e a comparação final.

// O arquivo README não impõe a necessidade de NOME da cidade, mas me baseei no enunciado da aula do portal.

int main() {
    // Declaração de variáveis para a utilização no código

    unsigned long int populacao1, populacao2; // alterado o tipo para nível MESTRE
    int pontosT1, pontosT2;
    char estado1, estado2; 
    char cidade1[50], cidade2[50], codigo1[4], codigo2[4]; 
    float area1, area2, pib1, pib2; 
    float densidade1, densidade2; // População / Área - nível aventureiro
    float PIBperCapita1, PIBperCapita2; // PIB / População - nível aventureiro
    float superP1, superP2; // nível mestre

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
    cidade1[strcspn(cidade1, "\n")] = '\0'; // chamada da biblioteca string.h para executar o strcspn de limpeza
    printf("Digite a população da cidade 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosT1);
    // Densidade Populacional: População / Área(km²)
    // PIB per Capita: PIB(bilhões) / População
    densidade1 = populacao1/area1;
    PIBperCapita1 = (pib1*1000000000)/populacao1;

    // Carta 2:
    printf("\nCadastro da carta 2:\n\n");
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
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosT2);
    // Densidade Populacional: População / Área(km²)
    // PIB per Capita: PIB(bilhões) / População
    densidade2 = populacao2/area2;
    PIBperCapita2 = (pib2*1000000000)/populacao2;
    
    /*Cálculo do "Super Poder" somando todos os atributos numéricos:
    (população, área, PIB, número de pontos turísticos, PIB per capita e o 
    inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    Armazene o Super Poder como float. 
    utilizada a divisão da densidade para considerar que, quando a divisão for feita, quem for menor gerará o maior número no quociente.
    
    Utilizado o tipo FLOAT antes dos atributos int para considerar a conversão necessária*/

    superP1 = (float)populacao1 + area1 + pib1 + (float)pontosT1 + PIBperCapita1 + (1/densidade1);
    superP2 = (float)populacao2 + area2 + pib2 + (float)pontosT2 + PIBperCapita2 + (1/densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Cartas cadastradas
    // Carta 1
    printf("\n\n\nDados da Carta 1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosT1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("SUPER PODER: %.2f", superP1);

    //Carta 2
    printf("\n\n\nDados da Carta 2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosT2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("SUPER PODER: %.2f", superP1);

    //Comparação das cartas

    printf("\n\n\n\n############ COMPARAÇÃO DE CARTAS ############\n\n");

    // Declaração de variáveis nesta parte pois achei que ficou melhor organizado
    int maiorPopulacao = populacao1 > populacao2;
    int maiorArea = area1 > area2;
    int maiorPIB = pib1 > pib2;
    int maiorPontosT = pontosT1 > pontosT2;
    int menorDensidade = densidade1 < densidade2;
    int maiorPIBpCap = PIBperCapita1 > PIBperCapita2;
    int maiorSuper = superP1 > superP2;

    printf("População: Carta %d venceu!\n", maiorPopulacao);
    printf("Área: Carta %d venceu!\n", maiorArea);
    printf("PIB: Carta %d venceu!\n", maiorPIB);
    printf("Pontos Turísticos: Carta %d venceu!\n", maiorPontosT);
    printf("Densidade Populacional: Carta %d venceu!\n", menorDensidade);
    printf("PIB per Capita: Carta %d venceu!\n", maiorPIBpCap);
    printf("Super Poder: Carta %d venceu!\n\n\n\n", maiorSuper);
    
    return 0;
}
