#include <stdio.h>

int main(){

    int idade;
    char nome[64];

    printf("Digite seu nome completo e sua idade: ({nome} {idade})");
    scanf("%[^0-9] %d", nome, &idade);
    printf("Nome Completo: %s Idade: %d", nome, idade);

    return 0;
}