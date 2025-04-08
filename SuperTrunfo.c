#include <stdio.h>

int main(){
    //variaveis carta 1
    int numero_carta = 01;
    char codigo_carta[3] = "01";
    char estado[2] = "SP";
    char nome_cidade[25] = "São Bernardo do Campo";
    float populacao = 844.483;
    float area_quadrada = 407.3;
    double pib = 55300.000;
    int pontos_turisticos = 12; 

//variaveis carta 2
    int numero_carta2 = 02;
    char codigo_carta2[2] = "02";
    char estado2[2] = "PR";
    char nome_cidade2[25] = "Curitiba";
    float populacao2 = 1.948626;
    float area_quadrada2 = 435.000;
    double pib2 = 92000.000;
    int pontos_turisticos2 = 25; 

    

printf("Numero da carta: %d\nCódigo da carta: %s\nEstado: %sCidade: %s\n População: %f\n Area Quadrada: %f\n Pib: %f\n Pontos turisticos: %d", numero_carta2, codigo_carta2, estado2, nome_cidade2, populacao2, area_quadrada2, pib2, pontos_turisticos2);

    return 0;
    
}
