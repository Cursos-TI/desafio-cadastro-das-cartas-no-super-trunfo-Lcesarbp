#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

   //Declaração de variaveis do código
   //========================================================

   //Declaração de variaveis carta 1

    char Estado[5];
    char codigodacarta[10];
    char nomedacidade[60];
    int populacao;
    float area;
    float pib;
    int numpontoturistico;
    float denpopulacional;
    float pibpercapita;
    float superpoder;

    //Declaração de variaveis carta 2

    char Estado2[5];
    char codigodacarta2[10];
    char nomedacidade2[60];
    int populacao2;
    float area2;
    float pib2;
    int numpontoturistico2;
    float denpopulacional2;
    float pibpercapita2;
    float superpoder2;
    int resultadopop = 0;
    int resultadoarea = 0;
    int resultadopib = 0;
    int resultadonpt = 0;
    int resultadoden = 0;
    int resultadoppc = 0;
    int resultadosuper = 0;



    //cadastro dos atributos das cartas
    //==============================================================

    //cadastro dos atributos da carta 1

    printf("\n==========================================================\n");
    printf("          CADASTRANDO AS INFORMAÇÕES DA CARTA 1\n");
    printf("==========================================================\n\n");

    printf("Insira um estado: ");
    scanf("%s", Estado);
    printf("O Estado cadastrado é: %s \n\n", Estado);

    //Cadastro e exibição do código da carta

    printf("Insira o codigo da carta: ");
    scanf("%s", codigodacarta);
    printf("O código da carta cadastrado é: %s\n\n", codigodacarta);

    //Cadastro e exibição do nome da cidade

    printf("Insira o nome da cidade: ");
    scanf(" %s", nomedacidade);
    printf("O nome cadastrado para a cidade é: %s\n\n", nomedacidade);

    //Cadastro e exibição do número da população

    printf("Insira o número de população: ");
    scanf("%d", &populacao);
    printf("O número de população é: %d\n\n", populacao);  

    //Cadastro e exibição da área da cidade

    printf("Insira a area da cidade ");
    scanf("%f", &area);
    printf("A área da cidade é: %.2f Km2\n\n",area );

    //Cadastro e exibição do PIB da cidade

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);
    printf("O PIB da cidade é: %.2f\n\n", pib);

    //Cadastro e exibição do número de pontos turísticos

    printf("Insira a quantidade de pontos turisticos ");
    scanf("%d", &numpontoturistico);
    printf("A quantidade de pontos turisticos cadastrada é: %d\n\n", numpontoturistico);

    //Local dos calculos da carta 1
    //===========================================

    //Calculo da densidade populacional

    denpopulacional = populacao / area;

    //Cálculo do PIB per Capita

    pibpercapita = pib / populacao;

    //Calculo super poder

    superpoder = (float) populacao + area + pib + (float) numpontoturistico + (1/denpopulacional) + pibpercapita;

    ////cadastro dos atributos da carta 2

    printf("\n==========================================================\n");
    printf("          CADASTRANDO AS INFORMAÇÕES DA CARTA 2\n");
    printf("==========================================================\n\n");

    printf("Insira um estado ");
    scanf("%s", Estado2);
    printf("O Estado cadastrado é: %s \n\n", Estado2);

    //Cadastro e exibição do código da carta

    printf("Insira o codigo da carta: ");
    scanf("%s", codigodacarta2);
    printf("O código da carta cadastrado é: %s\n\n", codigodacarta2);

    //Cadastro e exibição do nome da cidade

    printf("Insira o nome da cidade: ");
    scanf("%s", nomedacidade2);
    printf("O nome cadastrado para a cidade é: %s\n\n", nomedacidade2);

    //Cadastro e exibição do número da população

    printf("Insira o número de população: ");
    scanf("%d", &populacao2);
    printf("O número de população é: %d\n\n", populacao2);  

    //Cadastro e exibição da área da cidade

    printf("Insira a area da cidade ");
    scanf("%f", &area2);
    printf("A área da cidade é: %.2f Km2\n\n",area2 );

    //Cadastro e exibição do PIB da cidade

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("O PIB da cidade é: %.2f\n\n", pib2);

    //Cadastro e exibição do número de pontos turísticos

    printf("Insira a quantidade de pontos turisticos ");
    scanf("%d", &numpontoturistico2);
    printf("A quantidade de pontos turisticos cadastrada é: %d\n\n", numpontoturistico2);

     //Local dos calculos da carta 1
    //===========================================

    //Calculo da densidade populacional

    denpopulacional2 = populacao2 / area2;

    //Cálculo do PIB per Capita

    pibpercapita2 = pib2 / populacao2;

    //Calculo super poder

    superpoder2 = (float) populacao2 + area2 + pib2 + (float) numpontoturistico2 + (1/denpopulacional2) + pibpercapita2;


    //Exibição dos atributos das cartas cadastradas

    //Exibição dos atributos da carta 1 

    printf("\n===========================================\n");
    printf("           INFORMAÇÕES DA CARTA 1\n");
    printf("===========================================\n\n");

    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km2\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Números de pontos turísticos: %d\n", numpontoturistico);
    printf("Densidade Populacional: %.2f \n", denpopulacional);
    printf("PIB per Capita: %.2f \n", pibpercapita);
    printf("Super Poder: %.2lf\n", superpoder);

    //Exibição dos atributos da carta 2

    printf("\n===========================================\n");
    printf("           INFORMAÇÕES DA CARTA 2\n");
    printf("===========================================\n\n");

    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km2\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", numpontoturistico2);
    printf("Densidade Populacional: %.2f \n", denpopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapita2);
    printf("Super Poder: %.2lf", superpoder2);


    //Área de comparação entre os atributos da cartas

    //Comentando essa parte do código para implementar a comparação usando IF e Else

    //resultadopop = populacao > populacao2;
    //resultadoarea = area > area2;
    //resultadopib = pib > pib2;
    //resultadonpt = numpontoturistico > numpontoturistico2;
    //resultadoden = denpopulacional < denpopulacional2;
    //resultadoppc = pibpercapita > pibpercapita2;
    //resultadosuper = superpoder > superpoder2;
    
    printf("\n\n===========================================\n");
    printf("           COMPARAÇÃO ENTRE AS CARTAS \n");
    printf("===========================================\n\n");

    //Exibição dos resultados das comparações entre os atributos das cartas

    //printf("Comparação entre População da carta 1 e carta 2 é: %d\n",resultadopop);
    //printf("Comparação entre Área da carta 1 e carta 2 é: %d\n",resultadoarea);
    //printf("Comparação entre PIB da carta 1 e carta 2 é: %d\n",resultadopib);
    //printf("Comparação entre Número de Pontos Turísticos da carta 1 e carta 2 é: %d\n",resultadonpt);
    //printf("Comparação entre Densidade Populacional da carta 1 e carta 2 é: %d\n",resultadoden);
    //printf("Comparação entre PIB per Capita da carta 1 e carta 2 é: %d\n",resultadoppc);
    //printf("Comparação entre Super Poder da carta 1 e carta 2 é: %d\n",resultadosuper);

    //Comparação entre os atributos das cartas usando IF e ELSE

    //Bloco de comparação entre os atributos de população das cartas

    printf("Comparação de cartas (Atributo: População): \n\n");

    printf("A População da Carta 1 é: %d\n", populacao);
    printf("A População da Carta 2 é: %d\n\n", populacao2);

    if (populacao > populacao2)
    {
        printf("Carta 1 %s venceu \n\n", nomedacidade);
    } else {
        printf("A Carta 2 %s venceu \n\n", nomedacidade2);
    }


     //Bloco de comparação entre os atributos de Área das cartas

     printf("Comparação de cartas (Atributo: Área): \n\n");

     printf("A Área da Carta 1 é: %.2f\n", area);
     printf("A Área da Carta 2 é: %.2f\n\n", area2);
 
     if (area > area2)
     {
         printf("Carta 1 %s venceu \n\n", nomedacidade);
     } else {
         printf("A Carta 2 %s venceu \n\n", nomedacidade2);
     }

    //Bloco de comparação entre os atributos de PIB das cartas

    printf("Comparação de cartas (Atributo: PIB): \n\n");

    printf("O PIB da Carta 1 é: %.2f\n", pib);
    printf("O PIB da Carta 2 é: %.2f\n\n", pib2);

    if (pib > pib2)
    {
        printf("Carta 1 %s venceu \n\n", nomedacidade);
    } else {
        printf("A Carta 2 %s venceu \n\n", nomedacidade2);
    }

     //Bloco de comparação entre os atributos de número de pontos turísticos das cartas

     printf("Comparação de cartas (Atributo: Número de pontos turísticos): \n\n");

     printf("O Número de pontos turístico da Carta 1 é: %d\n", numpontoturistico);
     printf("O Número de pontos turístico da Carta 2 é: %d\n\n", numpontoturistico2);
 
     if (numpontoturistico > numpontoturistico2)
     {
         printf("Carta 1 %s venceu \n\n", nomedacidade);
     } else {
         printf("A Carta 2 %s venceu \n\n", nomedacidade2);
     }

     //Bloco de comparação entre os atributos de Densidade populacional das cartas

     printf("Comparação de cartas (Atributo: Densidade Populacional): \n\n");

     printf("A Densidade Populacional da Carta 1 é: %.2f\n", denpopulacional);
     printf("A Densidade Populacional da Carta 2 é: %.2f\n\n", denpopulacional2);
 
     if (denpopulacional < denpopulacional2)
     {
         printf("Carta 1 %s venceu \n\n", nomedacidade);
     } else {
         printf("A Carta 2 %s venceu \n\n", nomedacidade2);
     }

     //Bloco de comparação entre os atributos de PIB per Capita das cartas

     printf("Comparação de cartas (Atributo: PIB per Capita): \n\n");

     printf("O PIB per Capita da Carta 1 é: %.2f\n", pibpercapita);
     printf("O PIB per Capita da Carta 2 é: %.2f\n\n", pibpercapita2);
 
     if (pibpercapita > pibpercapita2)
     {
         printf("Carta 1 %s venceu \n\n", nomedacidade);
     } else {
         printf("A Carta 2 %s venceu \n\n", nomedacidade2);
     }

     //Bloco de comparação entre os atributos de Super Poder das cartas

     printf("Comparação de cartas (Atributo: Super Poder): \n\n");

     printf("O Super Poder da Carta 1 é: %.2f\n", superpoder);
     printf("O Super Poder da Carta 2 é: %.2f\n\n", superpoder2);
 
     if (superpoder > superpoder2)
     {
         printf("Carta 1 %s venceu \n\n", nomedacidade);
     } else {
         printf("A Carta 2 %s venceu \n\n", nomedacidade2);
     }

    


    return 0;
}
