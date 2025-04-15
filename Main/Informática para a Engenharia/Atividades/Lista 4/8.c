#include <stdio.h>

int main(){

    int var;
    scanf("%d", &var);

    (var > 500)?
        printf("R$%.2f", var * 0.8)
    :
        (((var <= 500) &&(var >=200))?
            printf("R$%.2f", var * 0.85)
        :
            printf("R$%.2f", var * 0.9));

    return 0;
}