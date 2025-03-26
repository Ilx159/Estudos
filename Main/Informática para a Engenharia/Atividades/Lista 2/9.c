#include <stdio.h>

int main(){

    int var1, var2;
    float var3;

    printf("Digite dois números inteiros e um número decimal: ");
    scanf("%d %d %f", &var1, &var2, &var3);


    printf("Você digitou: %d, %d e %f", var1, var2, var3);

    return 0;
}