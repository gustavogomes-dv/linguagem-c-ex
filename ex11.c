#include <stdio.h>
#define   N   5

int main()
{
    int idade[N],
    i,
    cont=0; //variavel idade é um vetor//coloco na frente da variavel colchetes
    for (i  =   0; i   <   N; i++ )
    {
    printf("digite a idade: ");
    scanf("%d", &idade[i]);
    
    if (idade[i] >= 18){
	    cont++;}
    }
    printf("número de pessoas com idade acima 18 anos = %d", cont);

    return 0;
}