#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   //Declaração de variaveis do código

    char Estado;
    char codigodacarta[10];
    char nomedacidade[60];
    int populacao;
    float area;
    float pib;
    int numpontoturistico;
    float denpopulacional;
    float pibpercapita;



    //cadastro e exibição do Estado

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

    //Exibição dos atributos da carta cadastrada

    printf("A carta que você cadastrou: \n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %f Km2\n", area);
    printf("PIB: %f Bilhões de Reais\n", pib);
    printf("Números de pontos turísticos: %d\n", numpontoturistico);
    printf("Densidade Populacional: %.2f \n", denpopulacional);
    printf("PIB per Capita: %.2f", pibpercapita);

    


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
