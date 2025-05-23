#include <stdio.h>




void imprimeTexto(char  descricao[]) {
    printf(descricao);
    printf("\n");
};

int pegaInt(char descricao[]) {
    int valor;
    imprimeTexto(descricao);
    fflush(stdin);
    scanf("%d", &valor);
    return valor;
}

float pegaFloat(char descricao[]) {
    float valor;
    imprimeTexto(descricao);
    fflush(stdin);
    scanf("%f", &valor);
    return valor;
}

char pegaChar(char descricao[]) {
    char valor;
    imprimeTexto(descricao);
    fflush(stdin);
    scanf("%c", &valor);
    return valor;
}



void inicio_jogo(void) {

    printf("Obs: Este jogo de Super Trunfo! é o Super Trunfo! CIDADES, não confunda com qualquer um dos outros milhões de Super Trunfo! disponivel no mercado.");
    printf("\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n");
    printf("                            Bem vindo ao Super Trunfo(CIDADES)!                       \n");
    printf("Nesse Jogo você digita informações referentes a duas cartas, nesse caso duas cidades, \n"
        "e no fim nós vamos simplesmente mostrar as informações dessas scartas.\n");
    printf("Mas só que com um layout bonito.");

}

void pulaDuasLinhas() {
    printf("\n\n");
}


void fimJogo(void) {
    pulaDuasLinhas();
    printf("Fim do jogo:\n");
    printf("Foi um jogo divertido.");
};

int main() {

    // Inicio Jogo
    inicio_jogo();

    printf("Vamos começar o jogo:\n");

    // inicio receber dados carta 1
    printf("Primeiro digite os dados referentes a primeira carta:\n\n");

    char estadoCarta1 = pegaChar("Digite uma letra entre A e H representando o estado:");
    /*Pega os dados referentes ao código da carta
     *Pega somente os dados referentes ao último número do código
     * O segundo carácter é sempre 0 */
    char codigoCarta1[4] = {'0','0','0','\0'};
    codigoCarta1[3] = pegaChar("Digite um número entre 1 e 4 representando o último caracter do código:");
    //O primeiro carácter é o estado da carta então só cópia ele para a posição 0 do código
    codigoCarta1[0] = estadoCarta1;
    char  nomeCidadeCarta1[50];
    printf("Digite o nome da cidade: \n");
    fflush(stdin);
    fgets(nomeCidadeCarta1, 50, stdin);
    int populacaoCarta1 = pegaInt("Digite o tamanho da população da cidade:");
    float areaCarta1 = pegaFloat("Digite a área total da cidade em km²: ");
    float pibCarta1 = pegaFloat("Digite o PIB da cidade: ");
    int pontosTuristicosCarta1 = pegaInt("Digite o numero de pontos Turisticos na cidade:");
    float densidadePopulacionalCarta1 = ((float)populacaoCarta1)/areaCarta1;
    float pibPerCapitaCarta1 = pibCarta1/((float)populacaoCarta1);
    // Fim receber dados carta1

// Dá espaço entre as cartas
    pulaDuasLinhas();

    // inicio receber dados carta 2
    printf("Agora digite os dados referentes a segunda carta:\n\n");


    char estadoCarta2 = pegaChar("Digite uma letra entre A e H representando o estado:");
    /*Pega os dados referentes ao código da carta
     *Pega somente os dados referentes ao último número do código
     * O segundo carácter é sempre 0 */
    char codigoCarta2[4] = {'0','0','0','\0'};
    codigoCarta1[3] = pegaChar("Digite um número entre 1 e 4 representando o último caracter do código:");
    //O primeiro carácter é o estado da carta então só cópia ele para a posição 0 do código
    codigoCarta1[0] = estadoCarta1;
    char  nomeCidadeCarta2[50];
    printf("Digite o nome da cidade: \n");
    fflush(stdin);
    fgets(nomeCidadeCarta2, 50, stdin);
    int populacaoCarta2 = pegaInt("Digite o tamanho da população da cidade:");
    float areaCarta2 = pegaFloat("Digite a área total da cidade em km²: ");
    float pibCarta2 = pegaFloat("Digite o PIB da cidade: ");
    int pontosTuristicosCarta2 = pegaInt("Digite o numero de pontos Turisticos na cidade:");
    float densidadePopulacionalCarta2 = ((float)populacaoCarta2)/areaCarta2;
    float pibPerCapitaCarta2 = pibCarta2/((float)populacaoCarta2);
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
    printf("Área: %.2f km²\n",areaCarta1);
    printf("PIB: %.2f bilhões de reais\n",pibCarta1);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidadePopulacionalCarta1);
    printf("PIB per Capita: %.2f reais",pibPerCapitaCarta1);
    //Fim imprimir carta 1

    // Dá espaço entre as cartas
pulaDuasLinhas();

    // inicio imprimir carta 2
    printf("Carta2:\n");
    printf("Estado: %c\n",estadoCarta2);
    printf("Código: %s\n",codigoCarta2);
    printf("Nome da Cidade: %s",nomeCidadeCarta2);
    printf("População: %d\n",populacaoCarta2);
    printf("Área: %f km²\n",areaCarta2);
    printf("PIB: %f bilhões de reais\n",pibCarta2);
    printf("Número de Pontos Turísticos: %d \n",pontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km² \n",densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f reais",pibPerCapitaCarta2);

    //Fim imprimir carta 2
// Fim Impressão
    fimJogo();

    return 0;

}
