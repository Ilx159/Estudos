#include <stdio.h>

const float PI = 3.141592;
float Raio = 1;
float pi(float R)
{
    static int count = 0;
    
    if(Raio == -1) // se Raio for igual a -1 é printado o tanto de chamadas da função
        return count;
    else
    {
        count++;
        return R*R*PI;
    }
}

int main()
{   
    

    while(Raio != 0){ //Enquanto Raio não for 0, o código fica em loop
    
        scanf("%f", &Raio);
    
    
        printf("\n%.3f\n", pi(Raio));
    }
    return 0;
}