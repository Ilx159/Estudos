#include <stdio.h>

int main(){

    float massa, altura, IMC;

    printf("digite a sua massa e a altura logo em seguida:\n");
    scanf("%f", &massa);
    printf("\n");
    scanf("%f", &altura);

    IMC = massa/(altura * altura);

    printf("Seu IMC é: %.2f\n\n", IMC);

    if(IMC < 18.5)
    printf("Abaixo do peso");
    else if(18.5 <= IMC && IMC < 24.9)
    printf("Peso normal");
    else if(25 <= IMC < 29.9)
    printf("Sobrepeso");
    else if(IMC >= 30)
    printf("Obesidade");

    return 0;
}