#include <stdio.h>

#define MAX 32

int main()
{
    char buf[MAX];
    char f;

    printf("Digite o nome completo: ");
    fgets(buf, MAX, stdin);

    //scanf("%s", buf);

    printf("\n O nome completo: %s\n", buf);

    return 0;
}