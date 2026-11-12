#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cadastro
{ // cria o tipo de dado struct aluno
    char nome[30];
    float nota;
};

int main()
{
    int quantidade_alunos = 3;
    struct cadastro aluno[quantidade_alunos]; // cria um vetor de struct aluno
    struct cadastro aluno_maior;

    float maior, nota;
    int i;

    for (int i = 0; i < quantidade_alunos; i++)
    {
        printf("digite nome: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);

        printf("digite nota: ");
        char nota_str[10];

        fgets(nota_str, sizeof(nota_str), stdin);
        
        aluno[i].nota = atof(nota_str);
    }

    maior = 0;
    for (int i = 0; i < quantidade_alunos; i++)
    {
        if (aluno[i].nota > maior)
        {
            maior = aluno[i].nota;
            aluno_maior.nota = maior;
            strcpy(aluno_maior.nome, aluno[i].nome);
        }
    }
    printf("\n***********************************\n");
    printf("\t maior nota do aluno = %s \t nota = %0.1f \n\n", aluno_maior.nome, aluno_maior.nota);

    return 0;
}