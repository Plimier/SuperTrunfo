#include <stdio.h>

int main(){

    // Estado(letra de A a H) e Código(letra do estado + um número de 01 à 04)
    char estado1, estado2, cod1[9], cod2[9];

    // nome da cidade
    char cidade1[30], cidade2[30];

    // população e número de pontos turisticos
    int pont_tur1, pont_tur2;

    unsigned long int pop1, pop2;

    // Área da cidade(em Km quadrados) e PIB
    float area_cid1, area_cid2, pib1, pib2;

    // Densidade Populacional e PIB
    float densidade1, densidade2, pib_per1, pib_per2;

    // Atributos comparativos
    float inverso1, inverso2, super_poder1, super_poder2;

    int comparacao_pop, comparacao_pont_tur, comparacao_area_cid, comparacao_pib, comparacao_densidade, comparacao_pib_per, comparacao_super_poder;





    printf("Digite os dados da primeira carta: \n");
    printf("Estado(letra A a H): ");
    scanf(" %c", &estado1);

    printf("\nCódigo de estado(Letra + Número de 01 a 04): ");
    scanf(" %s", cod1);

    printf("\nNome da cidade: ");
    scanf(" %s", cidade1);

    printf("\nPopulação da cidade: ");
    scanf(" %u", &pop1); 

    printf("\nNúmero de pontos turísticos: ");
    scanf(" %d", &pont_tur1);

    printf("\nÁrea da cidade: ");
    scanf(" %f", &area_cid1);

    printf("\nPIB: ");
    scanf(" %f", &pib1);


    // Regitro da segunda carta

    printf("\n\nDigite os dados da segunda carta: \n");
    printf("Estado(letra A a H): ");
    scanf(" %c", &estado2);

    printf("\nCódigo de estado(Letra + Número de 01 a 04): ");
    scanf(" %s", cod2);

    printf("\nNome da cidade: ");
    scanf(" %s", cidade2);

    printf("\nPopulação da cidade: ");
    scanf(" %u", &pop2);

    printf("\nNúmero de pontos turísticos: ");
    scanf(" %d", &pont_tur2);

    printf("\nÁrea da cidade: ");
    scanf(" %f", &area_cid2);

    printf("\nPIB: ");
    scanf(" %f", &pib2);

    // Calculos Básicos



    densidade1 = (float) pop1 / area_cid1;
    densidade2 = (float) pop2 / area_cid2;

    inverso1 = (float) area_cid1 / pop1;
    inverso2 = (float) area_cid2 / pop2;

    pib_per1 = (float) pib1 / pop1;
    pib_per2 = (float) pib2 / pop2;

    super_poder1 = (float) pop1 + pib1 + pib_per1 + pont_tur1 + inverso1;
    super_poder2 = (float) pop2 + pib2 + pib_per2 + pont_tur2 + inverso2;



    // Comparando atribudos das cartas

    comparacao_pop = pop1 > pop2;
    comparacao_area_cid = area_cid1 > area_cid2;
    comparacao_pont_tur = pont_tur1 > pont_tur2;

    comparacao_pib = pib1 > pib2;
    comparacao_pib_per = pib_per1 > pib_per2;

    comparacao_densidade = densidade1 < densidade2;
    comparacao_super_poder = super_poder1 > super_poder2;

    



    // "Mostrando a cartas"


    printf("\n\nPrimeira Carta\n\n");

    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da cidade: %u\nNúmero de Pontos Turísticos: %d\nÁrea da Cidade: %.2fKm²\nPIB: %.2f Bilhões de Reais\n", estado1, cod1, cidade1, pop1, pont_tur1, area_cid1, pib1);

    printf("Densidade Populacional: %.2f Hab/Km²\nPIB per Capita: %.2f Reais", densidade1, pib_per1);


    printf("\n\nSegunda Carta\n\n");

    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da cidade: %u\nNúmero de Pontos Turísticos: %d\nÁrea da Cidade: %.2fKm²\nPIB: %.2f Bilhões de Reais\n", estado2, cod2, cidade2, pop2, pont_tur2, area_cid2, pib2);

    printf("Densidade Populacional: %.2f Hab/Km²\nPIB Per Capita: %.2f Reais", densidade2, pib_per2);


    // Mostrando a Comparação

    printf("\n\n<< Mostrando o Resultado de Comparar as Cartas >>");
    
    printf("\n\nA Carta 1 tem a maior população: (%d)", comparacao_pop);
    printf("\nA Carta 1 tem a maior Área da cidade: (%d)", comparacao_area_cid);
    printf("\nA Carta 1 tem a maior quantidade de pontos turísticos: (%d)", comparacao_pont_tur);

    printf("\nA Carta 1 tem o maior pib: (%d)", comparacao_pib);
    printf("\nA Carta 1 tem o maior pib per capita: (%d)", comparacao_pib_per);
    printf("\nA Carta 1 tem o maior poder: (%d)", comparacao_super_poder);

    printf("\nA Carta1 tem a menor densidade populacional: (%d)", comparacao_densidade);



    comparacao_pop = pop2 > pop1;
    comparacao_area_cid = area_cid2 > area_cid1;
    comparacao_pont_tur = pont_tur2 > pont_tur1;

    comparacao_pib = pib2 > pib1;
    comparacao_pib_per = pib_per2 > pib_per1;

    comparacao_densidade = densidade2 < densidade1;
    comparacao_super_poder = super_poder2 > super_poder1;



printf("\n\nA Carta 2 tem a maior população: (%d)", comparacao_pop);
printf("\nA Carta 2 tem a maior Área da cidade: (%d)", comparacao_area_cid);
printf("\nA Carta 2 tem a maior quantidade de pontos turísticos: (%d)", comparacao_pont_tur);

printf("\nA Carta 2 tem o maior pib: (%d)", comparacao_pib);
printf("\nA Carta 2 tem o maior pib per capita: (%d)", comparacao_pib_per);
printf("\nA Carta 2 tem o maior poder: (%d)", comparacao_super_poder);

printf("\nA Carta 2 tem a menor densidade populacional: (%d)", comparacao_densidade);







}
