#include <stdio.h>

int main(){

    float temp;
    char ver;

    printf("#################################\n");
    printf("#   1.Celsius para Fahrenheit   #\n");
    printf("#   2.Fahrenheit para Celsius   #\n");
    printf("#################################\n");

    scanf("%d", &ver);

    printf("\nEscreva a temperatura inicial:\n");

    scanf("%f", &temp);

    switch (ver)
    {
    case 1: printf("%.2f Fahrenheit", (temp*(9.0/5.0)) + 32.0);
        break;
    case 2: printf("\n%.2f ºCelsius\n", (temp-32.0)*(5.0/9.0));
        break;
    default:
        break;
    }

    return 0;
}