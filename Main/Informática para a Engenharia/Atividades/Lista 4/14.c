#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);


    if((idade > 0) & (idade <=12)){
        printf("Criança");
    } else if ((idade >= 13) & (idade <=17))
    {
       printf("Adolecente");
    } else if((idade >= 18) & (idade <=59))
    {
        printf("Adulto");
    } else if(idade >= 60)
        printf("Idoso");
    
        



    return 0;
}