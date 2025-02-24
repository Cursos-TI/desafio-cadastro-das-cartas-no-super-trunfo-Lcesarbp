#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   //Declaração de variaveis do código

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
    double superpoder;

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
    double superpoder2;



    //cadastro e exibição do Estado

    //cadastro e exibição do estado carta 1

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

    //Calculo da densidade populacional

    denpopulacional = populacao / area;

    //Cálculo do PIB per Capita

    pibpercapita = pib / populacao;

    //Calculo super poder

    superpoder = (double) populacao + (double) area + (double) pib + (double) numpontoturistico + (double) denpopulacional + (double) pibpercapita;

    //cadastro e exibição do estado carta 2

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
    printf("A área da cidade é: %f Km2\n\n",area2 );

    //Cadastro e exibição do PIB da cidade

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("O PIB da cidade é: %f\n\n", pib2);

    //Cadastro e exibição do número de pontos turísticos

    printf("Insira a quantidade de pontos turisticos ");
    scanf("%d", &numpontoturistico2);
    printf("A quantidade de pontos turisticos cadastrada é: %d\n\n", numpontoturistico2);

    //Calculo da densidade populacional

    denpopulacional2 = populacao2 / area2;

    //Cálculo do PIB per Capita

    pibpercapita2 = pib2 / populacao2;

    //Calculo super poder

    superpoder2 = (double) populacao2 + (double) area2 + (double) pib2 + (double) numpontoturistico2 + (double) denpopulacional2 + (double) pibpercapita2;




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
