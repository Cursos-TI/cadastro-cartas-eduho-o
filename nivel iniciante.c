#include <stdio.h>

int main(){

    //armazenagem de dados
    char Estado1[20], Estado2[20];
    char CodigoCarta1[20], CodigoCarta2[20];
    char NomeCidade1[15], NomeCidade2[15];
   char Carta1[20], Carta2[20];
    
    int Populacao1, populacao2;
    int PontosTuristicos1, PontosTuristicos2;

    float Area1, PIB1;
    float Area2, PIB2;

    //primeira carta:
    printf("escolha uma letra de A até H \n");
    scanf("%s", Carta1);

    printf("escolha o estado: \n");
    scanf("%s", Estado1);

    printf("qual o nome da cidade? \n");
    scanf("%s", NomeCidade1);

    printf("qual a sua população? \n");
    scanf("%i", &Populacao1);

    printf("qual sua área? \n");
    scanf("%f", &Area1);

    printf("qual o PIB? \n");
    scanf("%f", &PIB1);

    printf("quantos pontos turisticos a cidade tem? \n");
    scanf("%i", &PontosTuristicos1);

    //segunda carta
       printf("escolha a segunda letra de A até H: \n");
    scanf("%s", Carta2);

    printf("escolha o estado: \n");
    scanf("%s", Estado2);

    printf("qual o nome da cidade? \n");
    scanf("%s", NomeCidade2);

    printf("qual a sua população? \n");
    scanf("%i", &populacao2);

    printf("qual sua área? \n");
    scanf("%f", &Area2);

    printf("qual o PIB? \n");
    scanf("%f", &PIB2);

    printf("quantos pontos turisticos a cidade tem? \n");
    scanf("%i", &PontosTuristicos2);

    //mostrando as cartas que o jogador escolheu:

    printf("sua primeira carta foi: \n");
    printf("estado: %s, cidade %s \n", Estado1, NomeCidade1);
    printf("pupulação: %i \n -pib: %f \n", Populacao1, PIB1);
    printf("pontos turisticos: %i \n", PontosTuristicos1);
    printf("suar area: %f \n", Area1);



    printf("sua segunda carta foi: \n");
    printf("estado: %s, cidade %s \n", Estado2, NomeCidade2);
    printf("pupulação: %i \n -pib: %f \n", populacao2, PIB2);
    printf("pontos turisticos: %i \n", PontosTuristicos2);
    printf("suar area: %f \n", Area2);





    return 0;
}
