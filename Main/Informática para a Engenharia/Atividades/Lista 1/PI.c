#include <stdio.h>

int main()
{   
    const float PI = 3.141592;
    float Raio;

    scanf("%f", &Raio);
    printf("\n%.3f\n", (Raio*Raio)*PI);

return 0;
}