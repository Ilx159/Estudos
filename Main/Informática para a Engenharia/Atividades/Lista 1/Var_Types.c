#include <stdio.h>

int main()
{
    
    double Double = 2328.135;
    char Char = 'A';
    int Int = 2555;
    float Float = 124.3;
    char String[6] = "ABCdef";
    printf("\n |%.6i| \n", Int);//|000255|
    printf("\n |%.3f| \n", Float);//|124.300|
    printf("\n |%.9s| \n", String);//|ABCdef|
    printf("\n |%9.3s| \n", String);//|      ABC|
    printf("\n |%.5c| \n", Char);//|A|
    
    printf("%c , %i , %f , %lf, %s", Char, Int, Float, Double, String);

    return 0;
}