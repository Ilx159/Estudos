#include <stdio.h>

int main(){

    int lado1, lado2, lado3;

    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if(2*lado1 == lado2+lado3)
        printf("Equilátero");
    else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
        printf("Escaleno");
    else
        printf("Isósceles");

    return 0;
}