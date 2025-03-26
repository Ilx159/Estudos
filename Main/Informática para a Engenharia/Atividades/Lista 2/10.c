#include <stdio.h>

int main(){

    char nome[128];
    int idade;
    
    printf("Digite seu nome completo: ");
    scanf("%[^\n]", nome);
    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("\nNome: %s, Idade: %d\n", nome, idade);
    
    return 0;
}