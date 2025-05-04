#include <stdio.h>

int main()
{
    // Definindo as variaveis
    char estadoUm, estadoDois, codigoCartaUm[4], codigoCartaDois[4], nomeCidadeUm[35], nomeCidadeDois[35];
    int populacaoUm, populacaoDois, pontosTuristicosUm, pontosTuristicosDois;
    float areaUm, areaDois, pibUm, pibDois, densidadeUm, densidadeDois, pibcapUm, pibcapDois;

    // Coletando os dados pelo usuário

    printf("Inserção de dados para o jogo Super Trunfo \n \n");

    printf("Insira o primeiro estado da carta 1 (Uma letra entre A - H):");
    scanf("%c", &estadoUm);

    printf("Insira o código da carta 1 (Sendo a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", &codigoCartaUm);

    printf("Insira o nome da Cidade da carta 1: ");
    scanf("%s", &nomeCidadeUm);

    printf("Insira a quantidade da população da carta 1: ");
    scanf("%d", &populacaoUm);

    printf("Insira a area da carta 1: ");
    scanf("%f", &areaUm);

    printf("Insira o PIB da carta 1: ");
    scanf("%f", &pibUm);

    printf("Insira o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicosUm);

    printf("\n\nAgora vamos inserir os dados da Carta 2 \n\nInsira o primeiro estado da carta 2: ");
    // não sei porque ele pula pro proximo então arrumei o erro dessa forma...
    scanf("%c", &estadoDois);
    scanf("%c", &estadoDois);

    printf("Insira o código da carta 2: ");
    scanf("%s", &codigoCartaDois);

    printf("Insira o nome da Cidade da carta 2: ");
    scanf("%s", &nomeCidadeDois);

    printf("Insira a quantidade da população da carta 2: ");
    scanf("%d", &populacaoDois);

    printf("Insira a area da carta 2: ");
    scanf("%f", &areaDois);

    printf("Insira o PIB da carta 2: ");
    scanf("%f", &pibDois);

    printf("Insira o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicosDois);

    // Mostrando as informações inseridas nas cartas.

    printf("Informações da cartas \n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estadoUm);
    printf("Codigo: %s \n", codigoCartaUm);
    printf("Cidade: %s \n", nomeCidadeUm);
    printf("População: %d \n", populacaoUm);
    printf("Área: %.2f km² \n", areaUm);
    printf("PIB: %.2f bilhões de reais \n", pibUm);
    printf("Número de pontos turisticos: %d \n", pontosTuristicosUm);
    // Adicionando nivel aventureiro
    float quociente = (float)populacaoUm / areaUm;
    printf("Densidade populacional 1: %.2f hab/km²\n", quociente);
    float quociente2 = (float)pibUm / populacaoUm;
    printf("PIB per capita 1: %.2f reais\n \n", quociente2);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estadoDois);
    printf("Codigo: %s \n", codigoCartaDois);
    printf("Cidade: %s \n", nomeCidadeDois);
    printf("População: %.2d \n", populacaoDois);
    printf("Área: %.2f km² \n", areaDois);
    printf("PIB: %.2f bilhões de reais \n", pibDois);
    printf("Número de pontos turisticos: %d \n", pontosTuristicosDois);
    // Nível aventureiro
    float quociente3 = (float)populacaoDois / areaDois;
    printf("Densidade populacional 2: %.2f hab/km²\n", quociente3);
    float quociente4 = (float)pibDois / populacaoDois;
    printf("PIB per capita 2: %.2f reais\n", quociente4);

    // Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!

    // Calculando o inverso da densidade

    float inversoDensidadeUm = (densidadeUm > 0) * (1 / densidadeUm);
    float inversoDensidadeDois = (densidadeDois > 0) * (1 / densidadeDois);

    // Calculando super poder das cartas 1 e 2

    float superPoderUm = (float)populacaoUm + areaUm + pibUm + pontosTuristicosUm + pibcapUm + inversoDensidadeUm;
    float superPoderDois = (float)populacaoDois + areaDois + pibDois + pontosTuristicosDois + pibcapDois + inversoDensidadeDois;

    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("Populacao: %d x %d\n", populacaoUm, populacaoDois);
    if (populacaoUm > populacaoDois) {
        printf("A cidade vencedora é: %s\n", nomeCidadeUm);
    } else if (populacaoDois > populacaoUm) {
        printf("A cidade vencedora é: %s\n", nomeCidadeDois);
    }

    printf("Area: %.2f km2 x %.2f km2\n", areaUm, areaDois);
    if (areaUm > areaDois){
        printf("A cidade vencedora é: %s\n", nomeCidadeUm);
    } else if (areaDois > areaUm){ 
        printf("A cidade vencedora é: %s\n", nomeCidadeDois);
    }

    printf("PIB: %.2f bi x %.2f bi\n", pibUm, pibDois);
    if (pibUm > pibDois){ 
        printf("A cidade vencedora é: %s\n", nomeCidadeUm);
    } else if (pibDois > pibUm) {
        printf("A cidade vencedora é: %s\n", nomeCidadeDois);
    }

    printf("Pontos Turisticos: %d x %d\n", pontosTuristicosUm, pontosTuristicosDois);
    if (pontosTuristicosUm > pontosTuristicosDois) { 
        printf("A cidade vencedora é: %s\n", nomeCidadeUm);
    } else if (pontosTuristicosDois > pontosTuristicosUm){ 
        printf("A cidade vencedora é: %s\n", nomeCidadeDois);
    } 
    
    printf("Densidade Demografica: %.2f hab/km2 x %.2f hab/km2\n", densidadeUm, densidadeDois);
    if (densidadeUm < densidadeDois) { 
        printf("A cidade vencedora é: %s\n", nomeCidadeUm);
    } else if (densidadeDois < densidadeUm) { 
        printf("A cidade vencedora é: %s\n", nomeCidadeDois);
    }

    printf("Super Poder: %.2d \n", superPoderUm, superPoderDois);
    if (superPoderUm > superPoderDois) { 
        printf("A cidade vencedora é: %s\n", nomeCidadeUm);
    } else if (superPoderDois > superPoderUm) { 
        printf("A cidade vencedora é: %s\n", nomeCidadeDois);
    }
    
        return 0;
}
