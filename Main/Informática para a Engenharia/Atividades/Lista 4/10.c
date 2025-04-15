#include <stdio.h>

int main(){

    int option, var1, var2;

    printf("##############################\n");
    printf("#1. Somar 2 números          #\n");
    printf("#2. Subtrair 2 números       #\n");
    printf("#3. Multiplicar 2 números    #\n");
    printf("#4. Dividir 2 números        #\n");
    printf("##############################\n\n");

    scanf("%d", &option);
    printf("digite 2 números (Ex: 2 4)");
    scanf("%d %d", &var1, &var2);

    switch (option){
    case 1:
    printf("%d", var1 + var2);
    break;
    case 2:
    printf("%d", var1 - var2);
    break;
    case 3:
    printf("%d", var1 * var2);
    break;
    case 4:
    printf("%d", var1 / var2);
    break;
    }

    return 0;
}