#include <stdio.h>

int main(){

    int var1, var2, var3;
    
    int count = scanf("%d %d %d", &var1, &var2, &var3);

    if (count == 3)
        printf("Entrada Válida!");        
    else
        printf("Entrada Inválida!");

    return 0;
}