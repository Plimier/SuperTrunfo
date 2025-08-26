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

    // Atributos comparativos de operadores relacionais
    float inverso1, inverso2, super_poder1, super_poder2;



    // Registro da Primeira Carta

    printf("Digite os dados da primeira carta: \n");
    printf("Estado(letra A a H): ");
    scanf(" %c", &estado1);

    printf("\nCódigo de estado(Letra + Número de 01 a 04): ");
    scanf(" %s", cod1);

    printf("\nNome da cidade: ");
    scanf(" %s", cidade1);

    printf("\nPopulação da cidade: ");
    scanf(" %lu", &pop1); 

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
    scanf(" %lu", &pop2);

    printf("\nNúmero de pontos turísticos: ");
    scanf(" %d", &pont_tur2);

    printf("\nÁrea da cidade: ");
    scanf(" %f", &area_cid2);

    printf("\nPIB: ");
    scanf(" %f", &pib2);

    // Calculos Básicos - Aqui é realizado o cálculo de densidade populacional, seu inverso, PIB per capita e super poder da carta.



    densidade1 = (float) pop1 / area_cid1;
    densidade2 = (float) pop2 / area_cid2;

    inverso1 = (float) area_cid1 / pop1;
    inverso2 = (float) area_cid2 / pop2;

    pib_per1 = (float) pib1 / pop1;
    pib_per2 = (float) pib2 / pop2;

    super_poder1 = (float) pop1 + pib1 + pib_per1 + pont_tur1 + inverso1;
    super_poder2 = (float) pop2 + pib2 + pib_per2 + pont_tur2 + inverso2;

    


    // "Mostrando a cartas"


    printf("\n\nPrimeira Carta\n\n");

    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da cidade: %lu\nNúmero de Pontos Turísticos: %d\nÁrea da Cidade: %.2fKm²\nPIB: %.2f Bilhões de Reais\n", estado1, cod1, cidade1, pop1, pont_tur1, area_cid1, pib1);

    printf("Densidade Populacional: %.2f Hab/Km²\nPIB per Capita: %.2f Reais", densidade1, pib_per1);


    printf("\n\nSegunda Carta\n\n");

    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da cidade: %lu\nNúmero de Pontos Turísticos: %d\nÁrea da Cidade: %.2fKm²\nPIB: %.2f Bilhões de Reais\n", estado2, cod2, cidade2, pop2, pont_tur2, area_cid2, pib2);

    printf("Densidade Populacional: %.2f Hab/Km²\nPIB Per Capita: %.2f Reais", densidade2, pib_per2);




    // Comparando atributos das cartas

    float soma_carta1, soma_carta2;

    int entrada_usuario1, entrada_usuario2;
    unsigned long int soma;

    int resultado1, resultado2; // variável é usada para exibir o resultado de vitória ou empate.

    char populacao_n[50] = "População", area_n[50] = "Área", pib_n[50] = "PIB", pontos_turisticos_n[50] = "Pontos_Turísticos", densidade_n[50] = "Densidade_Demográfica" ;



    // NOTA: melhorar a estrutura disso no futuro.
    
    printf("\n\n<< Hora de realizar a Comparação dos Atributos>>");

    printf("\n\n1. Nome do cidade");
    printf("\n2. População");
    printf("\n3. Área");
    printf("\n4. PIB");
    printf("\n5. Número de Pontos Turísticos");
    printf("\n6. Densidade Demográfica");

    printf("\n\nEntre com a Opção: ");
    scanf("%d", &entrada_usuario1);

    printf("\n\nDigite o segundo valor a ser comparado: ");
    scanf("%d", entrada_usuario2);

    entrada_usuario2 == entrada_usuario1 ? entrada_usuario1 = 0, entrada_usuario2 = 0, printf("\n\nvalor é o mesmo.") : printf("\n\nProcessando...");



    switch(entrada_usuario1){
        case 1:
            printf("\n\nAs cidades em competição são %s VS %s.", cidade1, cidade2);


            
            break;

        case 2:

            if (pop1 > pop2){
                resultado1 = 1;

            }else if (pop1 == pop2){
                resultado1 = 2;

            }else{
                resultado1 = 0;
            }

            printf("\n\nO primeiro atributo em comparação é %s.", populacao_n);
            printf("\nO valor do atributo é %lu - carta 1 | %lu - carta 2", pop1, pop2);
            
            soma_carta1 = (float) pop1;
            soma_carta2 = (float) pop2;

            break;

        case 3:

            if (area_cid1 > area_cid2){
                resultado1 = 1;

            }else if (area_cid1 == area_cid2){
                resultado1 = 2;

            }else{
                resultado1 = 0;
            }

            
            printf("\n\nO primeiro atributo em comparação é %s.", area_n);
            printf("\nO valor do atributo é %.2f - carta 1 | %.2f - carta 2", area_cid1, area_cid2);

            soma_carta1 = (float) area_cid1;
            soma_carta2 = (float) area_cid2;
            

            break;

        case 4:

            if (pib1 > pib2){
                resultado1 = 1;

            }else if (pib1 == pib2){
                resultado1 = 2;

            }else{
                resultado1 = 0;
            }

            printf("\n\nO primeiro atributo em comparação é %s.", pib_n);
            printf("\nO valor do atributo é %.2f - carta 1 | %.2f - carta 2", pib1, pib2);

            soma_carta1 = (float) pib1;
            soma_carta2 = (float) pib2;

            break;

        case 5:

            if (pont_tur1 > pont_tur2){
                resultado1 = 1;

            }else if (pont_tur1 == pont_tur2){
                resultado1 = 2;

            }else{
                resultado1 = 0;
            }

            printf("\n\nO primeiro atributo em comparação é %.", pontos_turisticos_n);
            printf("\nO valor do atributo é %d - carta 1 | %d - carta 2", pont_tur1, pont_tur2);

            soma_carta1 = (float) pont_tur1;
            soma_carta2 = (float) pont_tur2;

            break;

        case 6:

            if (densidade1 < densidade2){
                resultado1 = 1;

            }else if (densidade1 == densidade2){
                resultado1 = 2;

            }else{
                resultado1 = 0;
            }

            printf("\n\nO primeiro atributo em comparação é %.", densidade_n);
            printf("\nO valor do atributo é %.3f - carta 1 | %.3f - carta 2", densidade1, densidade2);

            soma_carta1 = (float) densidade1;
            soma_carta2 = (float) densidade2;

            break;


        default:
            printf("\n\nO valor digitado está errado.");
    }

    printf("\nAs cidades desafiantes são %s Vs %s", cidade1, cidade2);

    printf("\n< Primeira comparação >");

    // qual carta venceu primeira comparação


    if (resultado1 == 1){
        printf("\nA carta %s venceu", cidade1);
        
    }else if(resultado1 == 2){
        printf("\nHouve um empate");

    }else{
        printf("\nA carta %s Venceu", cidade2);

    }



    // Segunda etapa de verificação.


    switch(entrada_usuario2){
        case 1:
            printf("\n\nAs cidades em competição são %s VS %s.", cidade1, cidade2);


            
            break;

        case 2:

            if (pop1 > pop2){
                resultado2 = 1;

            }else if (pop1 == pop2){
                resultado2 = 2;

            }else{
                resultado2 = 0;
            }

            printf("\n\nO segundo atributo em comparação é %s.", populacao_n);
            printf("\nO valor do atributo é %lu - carta 1 | %lu - carta 2", pop1, pop2);

            soma_carta1 += (float) pop1;
            soma_carta2 += (float) pop2;
            
            break;

        case 3:

            if (area_cid1 > area_cid2){
                resultado2 = 1;

            }else if (area_cid1 == area_cid2){
                resultado2 = 2;

            }else{
                resultado2 = 0;
            }

            
            printf("\n\nO segundo atributo em comparação é %s.", area_n);
            printf("\nO valor do atributo é %.2f - carta 1 | %.2f - carta 2", area_cid1, area_cid2);

            soma_carta1 += (float) area_cid1;
            soma_carta2 += (float) area_cid2;
            

            break;

        case 4:

            if (pib1 > pib2){
                resultado2 = 1;

            }else if (pib1 == pib2){
                resultado2 = 2;

            }else{
                resultado2 = 0;
            }

            printf("\n\nO segundo atributo em comparação é %s.", pib_n);
            printf("\nO valor do atributo é %.2f - carta 1 | %.2f - carta 2", pib1, pib2);

            soma_carta1 += (float) pib1;
            soma_carta2 += (float) pib2;

            break;

        case 5:

            if (pont_tur1 > pont_tur2){
                resultado2 = 1;

            }else if (pont_tur1 == pont_tur2){
                resultado2 = 2;

            }else{
                resultado2 = 0;
            }

            printf("\n\nO segundo atributo em comparação é %.", pontos_turisticos_n);
            printf("\nO valor do atributo é %d - carta 1 | %d - carta 2", pont_tur1, pont_tur2);

            soma_carta1 += (float) pont_tur1;
            soma_carta2 += (float) pont_tur2;

            break;

        case 6:

            if (densidade1 < densidade2){
                resultado2 = 1;

            }else if (densidade1 == densidade2){
                resultado2 = 2;

            }else{
                resultado2 = 0;
            }

            printf("\n\nO segundo atributo em comparação é %.", densidade_n);
            printf("\nO valor do atributo é %.3f - carta 1 | %.3f - carta 2", densidade1, densidade2);

            soma_carta1 += (float) densidade1;
            soma_carta2 += (float) densidade2;

            break;


        default:
            printf("\n\nO valor digitado está errado.");
    }

    printf("\n< A segunda comparação >");


    if (resultado2 == 1){
        printf("\nA carta %s venceu", cidade1);
        
    }else if(resultado2 == 2){
        printf("\nHouve um empate");

    }else{
        printf("\nA carta %s Venceu", cidade2);

    }


    printf("\n\n<< Agora vamos definir qual venceu baseado na soma dos atributos comparados >>");

    if (soma_carta1 > soma_carta2){
        printf("\nCarta 1 - cidade %s Venceu o jogo com %.2f em comparação com a perdedora %.2f", cidade1, soma_carta1, soma_carta2);

    }else if (soma_carta1 == soma_carta2){
        printf("\nhouve um empate. valor de ambas deu %.2f", soma_carta1);

    }else{
        printf("\nCarta 2 - cidade %s venceu o jogo com %.2f em comparação com a perdedora %.2f", cidade2, soma_carta2, soma_carta1);
    }












    return 0;



}
