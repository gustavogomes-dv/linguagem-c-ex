#include<stdio.h>
int main() {

 int resp; //resposta que user vai responder
 printf("Digite um numero inteiro entre 1 e 3: \n"); //
 scanf("%d", &resp); // salvar o que ele vai responder na variavel resp

 switch (resp) //verificação de switch, vai verificar a variavel resp
    {
    case 1:
    printf("Voce selecionou a opcao %d \n", resp);
    break;

    case 2:
    printf("Voce selecionou a opcao %d \n", resp);
    break;
    case 3:
    printf("Voce selecionou a opcao %d \n", resp);
    break;

    default:
    printf("Voce selecionou uma opcao diferente de 1, 2 ou 3 --> %d \n", resp);
}

return 0;
}