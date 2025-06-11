#include <cstdio>


int main()
{
    //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char estado1 = 'X', 
         estado2 ='X';
    
    //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)     
    char codCarta1[4] = "",
         codCarta2[4] = "";

    //Nome da Cidade: O nome da cidade     
    char nomeCidade1[40] = "",
         nomeCidade2[40] = "";

    //População: O número de habitantes da cidade.
    int populacao1 = 0,
        populacao2 = 0;

    //Área (em km²): A área da cidade em quilômetros quadrados.
    float area1 = 0.0,
          area2 = 0.0;

    //O Produto Interno Bruto da cidade.
    float pib1 = 0.0,
          pib2 = 0.0;

    //A quantidade de pontos turísticos na cidade
    int qtdPontosTuristicos1 = 0,
        qtdPontosTuristicos2 = 0;



    //Ler primeira carta
    printf("Entre com os valores da primeira carta:");
    printf("\n\tEstado:");
      scanf("%1c", &estado1, 1);
    printf("\tCodigo:");
      scanf("%3s", codCarta1,4);
    printf("\tNome da cidade:");
      scanf("%39s", nomeCidade1, 40);
    printf("\tPopulacao:");
      scanf("%i", &populacao1);
    printf("\tArea:");
      scanf("%f", &area1);
    printf("\tPIB:");
      scanf("%f", &pib1);
    printf("\tNumero de pontos turisticos:");
      scanf("%i", &qtdPontosTuristicos1);


      //quebrar leitura automatica
      char lixo;
      scanf("%c", &lixo, 1);


    
    //Ler segunda carta
    printf("\nEntre com os valores da segunda carta:\n");
    printf("\tEstado:");
      scanf("%1c", &estado2, 1);
    printf("\tCodigo:");
      scanf("%3s", codCarta2, 4);
    printf("\tNome da cidade:");
      scanf("%39s", nomeCidade2, 40);
    printf("\tPopulacao:");
      scanf("%i", &populacao2);
    printf("\tArea:");
      scanf("%f", &area2);
    printf("\tPIB:");
      scanf("%f", &pib2);
    printf("\tNumero de pontos turisticos:");
      scanf("%i", &qtdPontosTuristicos2);
    
      

    //Exibir os dados lidos
    printf("\n\nCARTAS LIDAS\n");
    printf("\nCARTA 1:");
      printf("\n\tEstado: %c", estado1);
      printf("\n\tCodigo: %s", codCarta1);
      printf("\n\tNome da Cidade: %s", nomeCidade1);
      printf("\n\tPopulacao: %i", populacao1 );
      printf("\n\tArea: %f km2", area1 );
      printf("\n\tPIB: %f bilhoes de reais", pib1 );
      printf("\n\tNumero de pontos turisticos: %i", qtdPontosTuristicos1);

    printf("\n\nCARTA 2:");
      printf("\n\tEstado: %c", estado2);
      printf("\n\tCodigo: %s", codCarta2);
      printf("\n\tNome da Cidade: %s", nomeCidade2);
      printf("\n\tPopulacao: %i", populacao2 );
      printf("\n\tArea: %f km2", area2 );
      printf("\n\tPIB: %f bilhoes de reais", pib2 );
      printf("\n\tNumero de pontos turisticos: %i", qtdPontosTuristicos2);

    return 0;
}
