char -> armazena um caractere de acordo com a tabela ASCII de 1 byte
int -> armazena um valor inteiro de 1 byte (valor  max = 2.147.483.648 / valor min = -2.147.483.648)
float -> armazena um valor quebrado de 4 bytes (valor )
double -> armazena um valor quebrado de 8 bytes

```C
#include <stdio.h>


int main(void){

    char caracter = 'a';
    int num1 = 3;
    float num2 = 5.2;
    double num3 = 10000;

    printf("%c %d %.1f %.0lf\n",caracter, num1, num2, num3);
    printf("%c\n", caracter);
    printf("%d\n", num1);
    printf("%.1f\n", num2);
    printf("%.0lf", num3);
return 1;
}
```

unsigned = sem sinal: limita valores para só positivos

```C
unsigned int valor = 4.294.967.296;

terminal:

4.294.967.296
```

na adição do long antes do int e double muda algumas coisas


| TIPOS DE VARIAVEIS | BYTES |
| ------------------ | ----- |
| int                | 4     |
| float              | 4     |
| char               | 1     |
| double             | 8     |
| long int           | 4     |
| long double        | 10    |
| long long int      | 8     |
