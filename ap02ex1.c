#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

typedef struct pessoas// Estrutura para desenvolvimento do cadastro
{
    char nome[30];
    int idade;
    int peso;
    int altura;
} individuo; //nova variavel do tipo da estrutura

int main(int argc,char*argv[])
{
    printf("Programa para preencher o cadastro dos individuos \n\n");
    int n;
    int i;
    individuo Cadastro[MAX];
    printf("Digite o numero de cadastros a serem feitos: ");
    scanf("%d",&n);
    fflush(stdin);
    if (n<= MAX)//Conferindo se o numero de entradas é valido
    {
        for (i=0; i<n; i++)//Loop para preenchimento do cadastro
        {
            printf("Digite o nome do paciente %d: ", (i+1));
            gets(Cadastro[i].nome);
            printf("\n");
            printf("Digite a idade do paciente %d: ", (i+1));
            scanf("%d", &Cadastro[i].idade);
            printf("\n");
            printf("Digite o peso do paciente %d: ", (i+1));
            scanf("%d", &Cadastro[i].peso);
            printf("\n");
            printf("Digite a altura do paciente %d: ", (i+1));
            scanf("%d", &Cadastro[i].altura);
            fflush(stdin);
        }

        for (i=0; i<n; i++)//impressão do cadastro dos individuos
        {
            printf("Nome do paciente %d = %s \n",(i+1),Cadastro[i].nome);
            printf("Idade do paciente =  %d \n ",(i+1),Cadastro[i].idade);
            printf("Peso do paciente = %d \n",(i+1), Cadastro[i].peso);
            printf("Altura do paciente = %d\n ",(i+1),Cadastro[i].altura);
            printf("\n");

        }
    }
    else
    {
        printf("O numero digitado e invalido \n");
    }


    return 0;
}
