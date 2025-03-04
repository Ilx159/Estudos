#include <stdio.h>

int main(void)
{

    unsigned int Int1 = 3000000000; //-1294967296
    signed int Int2 = 3000000000; //3000000000
    printf("%u\n%d", Int1, Int2);


    /*isto acontece devido que o unsigned muda o valor do último 
    bit que era pra definir se o número é positivo ou negativo para 
    ser usado como um número*/
}