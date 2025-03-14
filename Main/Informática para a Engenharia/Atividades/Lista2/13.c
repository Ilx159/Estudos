#include <stdio.h>


int main(){

    int var1;
    float var2;
    char str[16];

    printf("Digite um número inteiro e um decimal: ");
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %f", &var1, &var2);

    

    printf("Inteiro: %d, Decimal: %f", var1, var2 );

    return 0;
}