#include <stdio.h>

int func1(){
    static int series = 0;
    series++;
    return series;
}

int main()
{
    func1();
    func1();
    func1();
    func1();

    printf("%d", func1()); 
    /*output: 5 pois a função foi chamada 5 vezes,
    assim adicionando +1 na variavel estatica "series" toda vez que for chamada a função*/
return 0;
}