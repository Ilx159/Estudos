#include <stdio.h>

int main(){

    int a =25, b = 13 , c = 7;
    int res1, res2, res3, res4;

    res1 = (a % b) + (b & c) * 2;
    res2 = (a | b) - (c ^ a);
    res3 = (a > b) && (b < c) || (c != a);
    res4 = !(a == b) && (c % 2 == 0);

    a += (b * 2) - (c / 2);
    b *= (a % b) + 1;
    c /= (b - a) + 2;

    int maior = c + 2;

    printf("%d /n", res1);
    printf("%d /n", res2);
    printf("%d /n", res3);
    printf("%d /n", res4);
    printf("%d /n", a);
    printf("%d /n", b);
    printf("%d /n", c);


    return 0;
}