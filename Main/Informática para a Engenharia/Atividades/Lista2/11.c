#include <stdio.h>


int main(){

    int var1;
    char verificacao = '0';
    
    char str[10];

    int count = scanf("%[^\n]", str);

    for(int i = 0; i < 10; i++){

        if(str[i] == 46 || count == 0){
            printf("Entrada Inválida");
            verificacao = '1';
        }

    }

    if(verificacao != '1')
        printf("Entrada Válida");


    return 0;
}