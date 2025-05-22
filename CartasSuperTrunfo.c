#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacaoCarta1,pontosTuristicosCarta1;
    char estadoCarta1, codigoCarta1[4] = {'0','0','0','\0'}, nomeCidadeCarta1[50];
    float areaCarta1, pibCarta1;

    int populacaoCarta2,pontosTuristicosCarta2;
    char estadoCarta2, codigoCarta2[4] = {'0','0','0','\0'}, nomeCidadeCarta2[50];
    float areaCarta2, pibCarta2;

    // Inicio Jogo
    printf("                            Bem vindo ao Super Trunfo(CIDADES)!                       \n");
    printf("Nesse Jogo você digita informações referentes a duas cartas, nesse caso duas cidades, \n"
           "e no fim nós vamos simplesmente mostrar as informações dessas scartas.\n");
    printf("Mas só que com um layout bonito.");
    //comando abaixo só para pular muitas linhas
    printf("\n\n\n\n\n\n");
    printf("Obs: Este jogo de Super Trunfo! é o Super Trunfo! CIDADES, não confunda com qualquer um dos outros milhões de Super Trunfo! disponivel no mercado.");

    printf("\n\n\n\n\n\n\n");

    printf("Vamos começar o jogo:\n");

    // inicio receber dados carta 1
    printf("Primeiro digite os dados referentes a primeira carta:\n\n");

    printf("Digite uma letra entre A e H representando o estado: \n");
    fflush(stdin);
    scanf("%c", &estadoCarta1);

    /*Pega os dados referentes ao código da carta
     *Pega somente os dados referentes ao último número do código
     * O segundo carácter é sempre 0 */
    printf("Digite um número entre 1 e 4 representando o último caracter do código: \n");
    fflush(stdin);
    scanf("%c", &codigoCarta1[2]);
    //O primeiro carácter é o estado da carta então só cópia ele para a posição 0 do código
    codigoCarta1[0] = estadoCarta1;

    printf("Digite o nome da cidade: \n");
    fflush(stdin);
    fgets(nomeCidadeCarta1, 50, stdin);

    printf("Digite o tamanho da população da cidade: \n");
    fflush(stdin);
    scanf("%d", &populacaoCarta1);


    printf("Digite a área total da cidade em km²: \n");
    fflush(stdin);
    scanf("%f", &areaCarta1);

    printf("Digite o PIB da cidade: \n");
    fflush(stdin);
    scanf("%f", &pibCarta1);

    printf("Digite o numero de pontos Turisticos na cidade: \n");
    fflush(stdin);
    scanf("%d", &pontosTuristicosCarta1);
    // Fim receber dados carta1

// Dá espaço entre as cartas
    printf("\n\n");

    // inicio receber dados carta 2
    printf("Agora digite os dados referentes a segunda carta:\n\n");

    printf("Digite uma letra entre A e H representando o estado: \n");
    fflush(stdin);
    scanf("%c", &estadoCarta2);

    /*Pega os dados referentes ao código da carta
     *Pega somente os dados referentes ao último número do código
     * O segundo carácter é sempre 0 */
    printf("Digite um número entre 1 e 4 representando o último caracter do código: \n");
    fflush(stdin);
    scanf("%c", &codigoCarta1[2]);
    //O primeiro carácter é o estado da carta então só cópia ele para a posição 0 do código
    codigoCarta1[0] = estadoCarta2;

    printf("Digite o nome da cidade: \n");
    fflush(stdin);
    fgets(nomeCidadeCarta2, 50, stdin);

    printf("Digite o tamanho da população da cidade: \n");
    fflush(stdin);
    scanf("%d", &populacaoCarta2);


    printf("Digite a área total da cidade em km²: \n");
    fflush(stdin);
    scanf("%f", &areaCarta2);

    printf("Digite o PIB da cidade: \n");
    fflush(stdin);
    scanf("%f", &pibCarta2);

    printf("Digite o numero de pontos Turisticos na cidade: \n");
    fflush(stdin);
    scanf("%d", &pontosTuristicosCarta2);
    // Fim receber dados carta2
// Fim Recebimento de cartas


    // Dá espaço entre o recebimento de cartas e a impressão
    printf("\n\n");


// Inicio Impressão
    printf("Agora vamos imprimir as Cartas com um layout bonito.\n\n");

    // inicio imprimir carta 1
    printf("Carta1:\n");
    printf("Estado: %c\n",estadoCarta1);
    printf("Código: %s\n",codigoCarta1);
    printf("Nome da Cidade: %s",nomeCidadeCarta1);
    printf("População: %d\n",populacaoCarta1);
    printf("Área: %f km²\n",areaCarta1);
    printf("PIB: %f bilhões de reais\n",pibCarta1);
    printf("Número de Pontos Turísticos: %d",pontosTuristicosCarta1);
    //Fim imprimir carta 1

    // Dá espaço entre as cartas
    printf("\n\n");

    // inicio imprimir carta 2
    printf("Carta2:\n");
    printf("Estado: %c\n",estadoCarta2);
    printf("Código: %s\n",codigoCarta2);
    printf("Nome da Cidade: %s",nomeCidadeCarta2);
    printf("População: %d\n",populacaoCarta2);
    printf("Área: %f km²\n",areaCarta2);
    printf("PIB: %f bilhões de reais\n",pibCarta2);
    printf("Número de Pontos Turísticos: %d",pontosTuristicosCarta2);
    //Fim imprimir carta 2
// Fim Impressão
    printf("\n\n");

    printf("Fim do jogo:\n");
    printf("Foi um jogo divertido.");

    return 0;

}
