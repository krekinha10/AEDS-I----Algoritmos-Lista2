#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 10

typedef struct pessoas// Estrutura base do cadastro
{
    char nome[30];
    int idade;
    int peso;
    int altura;
} individuo;

void nova_pessoa(int n)//Função para receber o cadastro de cada pessoa e retornar um tipo individuo
{
    int i;
    individuo Cadastro[MAX];
    for (i=0; i<n; i++)
    {
        printf("Digite o nome do paciente %d: ", (i+1));
        fgets(Cadastro[i].nome,30,stdin);
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
        printf("\n");
    }
    printf("\n");

    for (i=0; i<n; i++)
    {
        printf("Nome do paciente %d = %s \n",(i+1),Cadastro[i].nome);
        printf("Idade do paciente =  %d \n ",(i+1),Cadastro[i].idade);
        printf("Peso do paciente = %d \n",(i+1), Cadastro[i].peso);
        printf("Altura do paciente = %d\n ",(i+1),Cadastro[i].altura);
        printf("\n");

    }
}

int main(int argc,char*argv[])
{
    int n;
    printf("Programa para criar cadsytros de individuos \n\n ");
    printf("Digite o numero de cadastros a serem feitos: ");
    scanf("%d",&n);
    fflush(stdin);
    if (n<= MAX)// testa se o numero passado é valido
    {
        nova_pessoa(n);
    }
    else
    {
        printf("O numero digitado e invalido \n");
    }



    return 0;
}
