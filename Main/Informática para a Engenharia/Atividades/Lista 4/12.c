#include <stdio.h>

int main(){

    int opt;
    int var1, var2;

    printf("##############################\n");
    printf("#1. Quadrado                 #\n");
    printf("#2. Retângulo                #\n");
    printf("#3. Triângulo                #\n");
    printf("#4. Círculo                  #\n");
    printf("##############################\n\n");

    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("Digite o tamanho do lado do quadrado:\n");
        scanf("%d", &var1);
        printf("A área do quadrado é de: %d", var1*var1);
        break;
    case 2:
        printf("Digite a base e a altura do retângulo:\n");
        scanf("%d %d", &var1, &var2);
        printf("A área do retângulo é de: %d", var1*var2);
        break;
    case 3:
        printf("Digite a base e a altura do triângulo:\n");
        scanf("%d", &var1);
        printf("A área do triângulo é de: %d", var1*var2/2);
        break;
    case 4:
        printf("Digite o raio do círculo:\n");
        scanf("%d", &var1);
        printf("A área do quadrado é de: %d", var1*var1*3.141592653);
        break;
    
    default:
        break;
    }

    return 0;
}