#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   //Declaração de variaveis do código

   //Declaração de variaveis carta 1

    char Estado;
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

    char Estado2;
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

    printf("Insira um estado\n");
    scanf("%c", &Estado);
    printf("O Estado cadastrado é: %s \n");

    //Cadastro e exibição do código da carta

    printf("Insira o codigo da carta:\n");
    scanf("%s", &codigodacarta);
    printf("O código da carta cadastrado é: %s\n", codigodacarta);

    //Cadastro e exibição do nome da cidade

    printf("Insira o nome da cidade:\n");
    scanf(" %s", &nomedacidade);
    printf("O nome cadastrado para a cidade é: %s\n", nomedacidade);

    //Cadastro e exibição do número da população

    printf("Insira o numero de população\n");
    scanf(" %d", &populacao);
    printf("O numero de população é: %d\n", populacao);  

    //Cadastro e exibição da área da cidade

    printf("Insira a area da cidade\n");
    scanf("%f", &area);
    printf("A área da cidade é: %f Km2\n",area );

    //Cadastro e exibição do PIB da cidade

    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("O PIB da cidade é: %f\n", pib);

    //Cadastro e exibição do número de pontos turísticos

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d", &numpontoturistico);
    printf("A quantidade de pontos turisticos cadastrada é: %d\n", numpontoturistico);

    //Calculo da densidade populacional

    denpopulacional = populacao / area;

    //Cálculo do PIB per Capita

    pibpercapita = pib / populacao;

    //Calculo super poder

    superpoder = (double) populacao + (double) area + (double) pib + (double) numpontoturistico + (double) denpopulacional + (double) pibpercapita;

    //cadastro e exibição do estado carta 2

    printf("Insira um estado\n");
    scanf("%c", &Estado2);
    printf("O Estado cadastrado é: %s \n");

    //Cadastro e exibição do código da carta

    printf("Insira o codigo da carta:\n");
    scanf("%s", &codigodacarta2);
    printf("O código da carta cadastrado é: %s\n", codigodacarta2);

    //Cadastro e exibição do nome da cidade

    printf("Insira o nome da cidade:\n");
    scanf(" %s", &nomedacidade2);
    printf("O nome cadastrado para a cidade é: %s\n", nomedacidade2);

    //Cadastro e exibição do número da população

    printf("Insira o numero de população\n");
    scanf(" %d", &populacao2);
    printf("O numero de população é: %d\n", populacao2);  

    //Cadastro e exibição da área da cidade

    printf("Insira a area da cidade\n");
    scanf("%f", &area2);
    printf("A área da cidade é: %f Km2\n",area2 );

    //Cadastro e exibição do PIB da cidade

    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("O PIB da cidade é: %f\n", pib2);

    //Cadastro e exibição do número de pontos turísticos

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d", &numpontoturistico2);
    printf("A quantidade de pontos turisticos cadastrada é: %d\n", numpontoturistico2);

    //Calculo da densidade populacional

    denpopulacional2 = populacao2 / area2;

    //Cálculo do PIB per Capita

    pibpercapita2 = pib2 / populacao2;

    //Calculo super poder

    superpoder2 = (double) populacao2 + (double) area2 + (double) pib2 + (double) numpontoturistico2 + (double) denpopulacional2 + (double) pibpercapita2;




    //Exibição dos atributos das cartas cadastradas

    //Exibição dos atributos da carta 1 

    printf("A carta 1 que você cadastrou: \n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %f Km2\n", area);
    printf("PIB: %f Bilhões de Reais\n", pib);
    printf("Números de pontos turísticos: %d\n", numpontoturistico);
    printf("Densidade Populacional: %.2f \n", denpopulacional);
    printf("PIB per Capita: %.2f \n", pibpercapita);
    printf("Super Poder: %.2lf", superpoder);

    //Exibição dos atributos da carta 2

    printf("A carta 2 que você cadastrou: \n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km2\n", area2);
    printf("PIB: %f Bilhões de Reais\n", pib2);
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
