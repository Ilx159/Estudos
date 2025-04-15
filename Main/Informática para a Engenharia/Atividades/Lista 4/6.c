#include <stdio.h>

int main(){

    int var1, var2;
    scanf("%d %d", &var1, &var2);

    if(var1 > var2)
        printf("%d é maior que %d",var1, var2);
    else if(var1 < var2)
        printf("%d é menor que %d",var1, var2);
    else
        printf("são iguais");


    return 0;
}