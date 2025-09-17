#include <stdio.h>

int main (){

    char estado1;
    char codigo1 [4];
    char nomeCidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    float pontosTuristicos1;

    char estado2;
    char codigo2 [4];
    char nomeCidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    float pontosTuristicos2;

    printf("CADASTRO DAS CARTAS\n");
    printf("-----------------------------------\n");
    printf("====MANAUS====\n");

    printf("Digite o seu Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o Código:\n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nomeCidade1);

    printf("Digite a sua População:\n");
    scanf("%d", &populacao1);

    printf("Digite sua Área em km²:\n");
    scanf("%f", &area1);

    printf("Digite seu PIB:\n");
    scanf("%f", &pib1);

    printf("Digite seus Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);



    printf("====BRASILIA====\n");

    printf("Digite o seu Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o Código:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Digite a sua População:\n");
    scanf("%d", &populacao2);

    printf("Digite sua Área em km²:\n");
    scanf("%f", &area2);

    printf("Digite seu PIB:\n");
    scanf("%f", &pib2);

    printf("Digite seus Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);




    return 0;
}