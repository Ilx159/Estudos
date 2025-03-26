#include <stdio.h>

int main(){

    int var1;
    float var2;

    printf("Digite um número inteiro: ");
    scanf("%d", &var1);
    printf("Digite um número decimal: ");
    scanf("%f", &var2);

    printf("Você digitou: %d e %f", var1, var2);

    return 0;
}