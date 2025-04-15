#include <stdio.h>

int main(){

    unsigned int var = -893;

    if((var >> 31))
        printf("negativo");
    else
        printf("positivo");

    return 0;
}