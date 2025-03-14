#include <stdio.h>

int main(){

    char espaco[12] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char nome[50];
    int idade;
    float altura, peso;

    printf("\nDigite seu nome: ");
    scanf("%[^\n]", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("\n\n--------------------------------------------\n");
    printf("| Nome%.11s| Idade | Altura |  Peso  |\n", espaco);
    printf("--------------------------------------------\n");
    printf("|%-16.16s|  %3d  |  %5.2f | %5.2f  |\n", nome, idade, altura, peso);
    printf("--------------------------------------------\n");

    return 0;
}