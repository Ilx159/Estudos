#include <stdio.h>

int main(){

    int peso1, peso2, peso3;
    float nota1, nota2, nota3;

    scanf("%f@%d", &nota1, &peso1);
    scanf("%f@%d", &nota2, &peso2);
    scanf("%f@%d", &nota3, &peso3);
    
    printf("\n\n+--------+-------+\n");
    printf("|  Nota  | Peso  |\n");
    printf("+--------+-------+\n");
    printf("|%7.2f |%6d |\n|%7.2f |%6d |\n|%7.2f |%6d |\n", nota1, peso1, nota2, peso2, nota3, peso3);
    printf("+--------+-------+\n");

    return 0;
}

//4.2@3 5.8@2 10@5