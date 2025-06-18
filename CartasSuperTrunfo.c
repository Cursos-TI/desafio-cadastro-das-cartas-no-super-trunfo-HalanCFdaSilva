#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>

char estadoCarta1, codigoCarta1[4] = {'0','0','0','\0'}, nomeCidadeCarta1[]={'\0'};
int populacaoCarta1, pontosTuristicosCarta1;
float areaCarta1, pibCarta1, densidadePopulacionalCarta1, pibPerCapitaCarta1, superPoderCarta1;

char estadoCarta2, codigoCarta2[4] = {'0','0','0','\0'}, nomeCidadeCarta2[]={'\0'};
int populacaoCarta2, pontosTuristicosCarta2;
float areaCarta2, pibCarta2, densidadePopulacionalCarta2, pibPerCapitaCarta2, superPoderCarta2;

// função definida junto as funções de impressão
void imprimeTexto();

// funções abaixo servem para receber as informações do usuário

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

char pega_estado_carta() {
    char valor = pegaChar("Digite uma letra maiúscula entre A e H representando o estado:");
    if (valor >= 'A' && valor <= 'H')
        return valor;

    imprimeTexto("Valor invalido.");
    // mantem o loop se valor digitado não for entre A e H
    return pega_estado_carta();
}

char pegaCodigoCarta() {
    char valor = pegaChar("Digite um número entre 1 e 4 representando o último caracter do código:");
    if (valor >= '1' && valor <= '4')
        return valor;
    imprimeTexto("Valor invalido.");
    // mantem o loop se valor digitado não for entre 1 e 4
    return pegaCodigoCarta();
}

void generateSuperPoderCarta1() {
    float superPoderPositivoInt = (float) (populacaoCarta1 + pontosTuristicosCarta1);
    float superPoderPositivoFloat = areaCarta1 + pibCarta1 + pibPerCapitaCarta1;
    superPoderCarta1 =superPoderPositivoInt + superPoderPositivoFloat - densidadePopulacionalCarta1;
}

void pegaCarta1() {
    estadoCarta1 = pega_estado_carta();

    /*Pega os dados referentes ao código da carta
     *Pega somente os dados referentes ao último número do código
     * O segundo carácter é sempre 0 */
    codigoCarta1[2] = pegaCodigoCarta();
    //O primeiro carácter é o estado da carta então só cópia ele para a posição 0 do código
    codigoCarta1[0] = estadoCarta1;

    printf("Digite o nome da cidade: \n");
    fflush(stdin);
    fgets(nomeCidadeCarta1, 50, stdin);
    nomeCidadeCarta1[strcspn(nomeCidadeCarta1,"\n")] = '\0';

    populacaoCarta1 = pegaInt("Digite o tamanho da população da cidade:");

    areaCarta1 = pegaFloat("Digite a área total da cidade em km²: ");

    pibCarta1 = pegaFloat("Digite o PIB da cidade: ");

    pontosTuristicosCarta1 = pegaInt("Digite o numero de pontos Turisticos na cidade:");

    densidadePopulacionalCarta1 = ((float)populacaoCarta1)/areaCarta1;

    pibPerCapitaCarta1 = pibCarta1/((float)populacaoCarta1);

    generateSuperPoderCarta1();
}


void generateSuperPoderCarta2() {
    float superPoderPositivoInt = (float) (populacaoCarta2 + pontosTuristicosCarta2);
    float superPoderPositivoFloat = areaCarta2 + pibCarta2 + pibPerCapitaCarta2;
    superPoderCarta2 =superPoderPositivoInt + superPoderPositivoFloat - densidadePopulacionalCarta2;
}

void pegaCarta2() {
    estadoCarta2 = pega_estado_carta();

    /*Pega os dados referentes ao código da carta
     *Pega somente os dados referentes ao último número do código
     * O segundo carácter é sempre 0 */
    codigoCarta2[2] = pegaChar("Digite um número entre 1 e 4 representando o último caracter do código:");
    //O primeiro carácter é o estado da carta então só cópia ele para a posição 0 do código
    codigoCarta2[0] = estadoCarta2;

    printf("Digite o nome da cidade: \n");
    fflush(stdin);
    fgets(nomeCidadeCarta2, 50, stdin);
    nomeCidadeCarta2[strcspn(nomeCidadeCarta2,"\n")] = '\0';

    populacaoCarta2 = pegaInt("Digite o tamanho da população da cidade:");

    areaCarta2 = pegaFloat("Digite a área total da cidade em km²: ");

    pibCarta2 = pegaFloat("Digite o PIB da cidade: ");

    pontosTuristicosCarta2 = pegaInt("Digite o numero de pontos Turisticos na cidade:");

    densidadePopulacionalCarta2 = ((float)populacaoCarta2)/areaCarta2;

    pibPerCapitaCarta2 = pibCarta2/((float)populacaoCarta2);
    generateSuperPoderCarta2();
}

void pegaCartas() {

    // inicio receber dados carta 1
    printf("Primeiro digite os dados referentes a primeira carta:\n\n");
    pegaCarta1();
    // Fim receber dados carta1

    // Dá espaço entre as cartas
    printf("\n\n");

    // inicio receber dados carta 2
    printf("Agora digite os dados referentes a segunda carta:\n\n");
    pegaCarta2();
    // Fim receber dados carta2
    // Fim Recebimento de cartas
}
// Função acima é a última usada para pegar informações do usuário

// funções abaixo servem para imprimir dados do jogo
void imprimeTexto(char  descricao[]) {
    printf(descricao);
    printf("\n");
}

void pulaDuasLinhas() {
    printf("\n\n");
}

void inicio_jogo(void) {

    printf("Obs: Este jogo de Super Trunfo! é o Super Trunfo! CIDADES, não confunda com qualquer um dos outros milhões de Super Trunfo! disponivel no mercado.");
    printf("\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n");
    printf("                            Bem vindo ao Super Trunfo(CIDADES)!                       \n");
    printf("Nesse Jogo você digita informações referentes a duas cartas, nesse caso duas cidades, \n"
        "e no fim nós vamos simplesmente mostrar as informações dessas scartas.\n");
    printf("Mas só que com um layout bonito.");
    pulaDuasLinhas();
    printf("Update: Agora o jogo vai comparar as duas cartas e dizer qual carta venceu em cada uma \n"
           " das categorias numéricas, mas calcular quem fez mais pontos, isso é com vocês.");

}


void imprimeCarta1() {
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
}
void imprimeCarta2() {
    printf("Carta2:\n");
    printf("Estado: %c\n",estadoCarta2);
    printf("Código: %s\n",codigoCarta2);
    printf("Nome da Cidade: %s",nomeCidadeCarta2);
    printf("População: %d\n",populacaoCarta2);
    printf("Área: %.2f km²\n",areaCarta2);
    printf("PIB: %.2f bilhões de reais\n",pibCarta2);
    printf("Número de Pontos Turísticos: %d \n",pontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km² \n",densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f reais",pibPerCapitaCarta2);
}


void fimJogo(void) {
    pulaDuasLinhas();
    printf("Fim do jogo:\n");
    printf("Foi um jogo divertido.");
}
// fim das funções para imprimir informações na tela

//inicio funções de comparação
void imprime_vencedor(unsigned short int vencedor) {
    if (vencedor == 0)
        printf("Resultado: Carta 1 (%s) venceu!\n",nomeCidadeCarta1);
    else {
        if (vencedor == 2)
            printf("Empate!\n");
        else
            printf("Resultado: Carta 2 (%s) venceu!\n",nomeCidadeCarta2);
    }

}

void compara_categoria(char categoria[], float valorCarta1,float valorCarta2) {
    unsigned short int vencedor = valorCarta1>valorCarta2;
    if (categoria == "Densidade Populacional")
        vencedor = valorCarta1<valorCarta2;

    if (valorCarta1 == valorCarta2)
        vencedor = 2;

    printf("Comparação de Cartas (Atributo: %s):\n",categoria);
    printf("Carta1- %s: %.2f km\n",nomeCidadeCarta1,valorCarta1);
    printf("Carta2- %s: %.2f km\n",nomeCidadeCarta2,valorCarta2);

    imprime_vencedor(vencedor);

}

int selecionaCategoriaComparacao() {
    int categoriaEscolhida = 0, selecionouErrada;
    do {
        printf("Selecione uma das categorias abaixo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n");
        printf("Digite a opcao deseja:\n");
        fflush(stdin);
        scanf("%d",&categoriaEscolhida);
        selecionouErrada = (categoriaEscolhida< 1 || categoriaEscolhida > 7);
        if (selecionouErrada)
            printf("Opcao invalida!\n");
    }while (selecionouErrada);

    return categoriaEscolhida;
}

void selecionarCartas(int categoriaEscolhida, int *valorCarta1, int *valorCarta2, char *categoria) {

    switch (categoriaEscolhida) {
        case 1: {
            *valorCarta1 = populacaoCarta1;
            *valorCarta2 = populacaoCarta2;
            *categoria = "População";
            break;
        }
        case 2:{
            *valorCarta1 = areaCarta1;
            *valorCarta2 = areaCarta2;
            *categoria = "Área";
            break;
        }
        case 3:{
            *valorCarta1 = pibCarta1;
            *valorCarta2 = pibCarta2;
            *categoria = "PIB";
            break;
        }
        case 4:{
            *valorCarta1 = pontosTuristicosCarta1;
            *valorCarta2 = pontosTuristicosCarta2;
            *categoria = "Pontos Turísticos";
            break;
        }
        case 5:{
            *valorCarta1 = densidadePopulacionalCarta1;
            *valorCarta2 = densidadePopulacionalCarta2;
            *categoria = "Densidade Populacional";
            break;
        }
        case 6:{
            *valorCarta1 = pibPerCapitaCarta1;
            *valorCarta2 = pibPerCapitaCarta2;
            *categoria = "PIB per Capita";
            break;
        }
        case 7:{
            *valorCarta1 = superPoderCarta1;
            *valorCarta2 = superPoderCarta2;
            *categoria = "Super Poder";
            break;
        }

    }
}

void compararCartas() {
    int categoriaEscolhida1, valor1Carta1, valor1Carta2;
    char categoria1[20],categoria2[20];
    int categoriaEscolhida2, valor2Carta1, valor2Carta2;
    
    categoriaEscolhida1 = selecionaCategoriaComparacao();
    pulaDuasLinhas();
    selecionarCartas(categoriaEscolhida1, &valor1Carta1, &valor1Carta2, &categoria1);
    compara_categoria(categoria1,valor1Carta1, valor1Carta2);

    pulaDuasLinhas();

    categoriaEscolhida2 = selecionaCategoriaComparacao();
    pulaDuasLinhas();
    selecionarCartas(categoriaEscolhida2, &valor2Carta1, &valor2Carta2, &categoria2);
    compara_categoria(categoria2,valor2Carta1, valor2Carta2);
    pulaDuasLinhas();
    
    printf("Iniciando categoria maluca: \n");
    sleep(2);
    compara_categoria("Categoria Maluca",valor1Carta1+valor2Carta1,valor1Carta2+valor2Carta2);

}
int main() {


    setlocale(LC_ALL, ".UTF-8");
    // Inicio Jogo
    inicio_jogo();

    printf("Vamos começar o jogo:\n");
    pegaCartas();//PegaDadosCartas.c

    // Dá espaço entre o recebimento de cartas e a impressão
    pulaDuasLinhas();

// Inicio Impressão
    printf("Agora vamos imprimir as Cartas com um layout bonito.\n\n");
    imprimeCarta1();
    // Dá espaço entre as cartas
    pulaDuasLinhas();
    imprimeCarta2();
// Fim Impressão

    pulaDuasLinhas();
    imprimeTexto("Agora vamos comparar as cartas:");
    compararCartas();

    fimJogo();

    system("pause");
    return 0;

}



