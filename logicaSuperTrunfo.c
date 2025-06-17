#include <stdio.h>

    int main (){ 
    // Variáveis para os atributos da cidade 1. 

    int numerodepontosturisticos1 = 48;
    int populaçaocidade1 = 1890000;
    float areacidade1 = 980000;
    float PIBcidade1 = 48000000;
    char codigodacidade1[10] = "A03";
    char estadocidade1 = 'A';
    char cidade1[20] = "Curitiba";
    float densidadepopulacional1 = populaçaocidade1 / areacidade1;
    float PIBpercaptitacidade1 = PIBcidade1 / populaçaocidade1;

    // Exibição dos dados da carta da cidade 1.
    // Informçações da carta cadastrada 1.
    // Exibição dos valores inseridos para os atributos da cidade 1, um por linha.

    printf("Estado: %c\n", estadocidade1);
    printf("Código da carta: %s\n", codigodacidade1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populaçaocidade1);
    printf("Área: %2.f\n", areacidade1);
    printf("PIB: %2.f\n", PIBcidade1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
    printf("A densidade populacional da cidade 1 é: %2.f\n", densidadepopulacional1);
    printf("O PIB per capita da cidade 1 é: %2.f\n", PIBpercaptitacidade1);

    // Variáveis para os atributos da cidade 2.
    
    int numerodepontosturisticos2 = 44;
    int populaçaocidade2 = 14780000;
    float areacidade2 = 831000;
    float PIBcidade2 = 51200000;
    char codigodacidade2[10] = "D04";
    char estadocidade2 = 'D';
    char cidade2[20] = "Salvador";
    float densidadepopulacional2 = populaçaocidade2 / areacidade2;
    float PIBpercaptitacidade2 = PIBcidade2 / populaçaocidade2;

    // Exibição dos dados da carta da cidade 2.
    // Informçações da carta cadastrada 2.
    // Exibição dos valores inseridos para cada atributo da cidade 2, um por linha.

    printf("Estado: %c\n", estadocidade2);
    printf("Código da carta: %s\n", codigodacidade2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populaçaocidade2);
    printf("Área: %2.f\n", areacidade2);
    printf("PIB: %2.f\n", PIBcidade2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("A densidade populacional da cidade 1 é: %2.f\n", densidadepopulacional2);
    printf("O PIB per capita da cidade 1 é: %2.f\n", PIBpercaptitacidade2);

    if (areacidade1 > areacidade2){
        printf("Cidade da carta 1 venceu!\n");
    } else {
        printf("Cidade da carta 2 venceu!\n");
    }
    
    return 0;
    }