#include <stdio.h>

int var1 = 5;

void func()
{
    int var2 = 10;
    printf("%d / %d\n",var1, var2);

}

int main(void)
{

    func();

    printf("%d / %d",var1, var2); 
    //variaveis globais podem ser usadas em qualquer lugar, já locais não

return 0;
}