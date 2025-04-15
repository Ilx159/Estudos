#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    

    int random = rand() % 100 + 1, input;


    printf("Jogo da adivinhação, escreva um número de 1 a 100:\n");

    while(1){
    scanf("%d", &input);

    if(input > random)
        printf("\no número é menor que %d\n\n", input);
    else if(input < random)
        printf("\no número é maior que %d\n\n", input);
    else
        break;
    }

    printf("\nParabéns, você ganhou!!!\n");
    return 0;

}