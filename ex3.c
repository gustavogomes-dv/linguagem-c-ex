#include <stdio.h>

int main()
{
    int x;
    float y;
    char z;
    x=1;
    y=2.3;
    z='A';

    printf("ola mundo\n");
    printf("para imprimir a variavel eu uso o %d", x);//imprimir para valores inteiros = int
    printf("o valor de x %d\n", x);
    //formato %d para valor inteiro 
    
    printf("o valor de y %f\n", y);//formato %f para valor float

    y=8.5421;
    printf("x somado a 1 =%d\n e z = %c\n", x+1, z);//formato %c para valor char
    printf("\n%0.2f\n", y);//formato %.2f para valor float com 2 casas decimais

}