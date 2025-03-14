#include <stdio.h>
#include <string.h>
#include <


float soma(float x1, float y2){
    return x1+y2;
}
float sub(float x1, float y2){
    return x1-y2;
}

int main(int argc, char* argv[])
{
    float num1, num2, sum;

    scanf("%f", &num1);
    scanf("%f", &num2);

    if (0 == strcmp(argv[1], "soma")){
        sum = soma(num1, num2);
    } else if(0 == strcmp(argv[1], "sub")) {
        sum = sub(num1, num2);
    }
    
    printf("%f", sum);
    

    return 0;
}
