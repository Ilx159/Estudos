#include <stdio.h>

int main(){

    int var1;
    scanf("%d", &var1);

    if(var1 >= 90)
        printf("A");
    else if(var1 >= 70 && var1 < 90)
        printf("B");
    else if(var1 >=50 && var1 < 70)
        printf("C");
    else if (var1 < 50)
        printf("D");


    return 0;
}