#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 20


void multiplica(int a[][MAX], int b[][MAX],int n,int m)//Função para multiplicação de matrizes
{
    int i;
    int j;
    int k;
    int soma =0;
    int**M=NULL;

    M=(int**)malloc(m*sizeof(int*));//Alocação de Memoria para a matriz
    for(i=0; i<n; i++)
    {
        M[i]=(int*)malloc(m*sizeof(int));// Alocação de Memoria para a matriz

        for (j=0; j<m; j++)
        {

            for(k=0; k<=n; k++)
            {
                soma += a[i][k]*b[k][j];
            }

            M[i][j]= soma;
            soma=0;
        }

    }

    printf("\n");
    printf(" A matriz de retorno e :\n\n");
    for(i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf(" %d ",M[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)//Liberação de Memoria
    {
        free(M[i]);
        M[i]=NULL;
    }
    free(M);//Liberação de Memoria
    M=NULL;// evitando Dagling ponteiros

}

int main (int argc,char*argv[])//função principal
{
    int linhas1,colunas1,linhas2,colunas2;
    int i,j;
    int Matriz1[MAX][MAX];
    int Matriz2[MAX][MAX];
    FILE*matrizes;//criação de ponteiro para o arquivo
    matrizes=fopen("matrizes.txt", "r");//Abertura do arquivo
    if(matrizes== NULL)
    {
        printf("\n Erro ao ler arquivo!");
        exit(1);
    }
    else
    {
        printf("o arquivo foi aberto corretamente \n\n");

        fscanf(matrizes, "%d %d",&linhas1,&colunas1);//leitura de dados do arquivo
        printf("A matriz 1 tem %d linhas e %d colunas\n\n",linhas1, colunas1);
        for(i=0; i<linhas1; i++)
        {
            for(j=0; j<colunas1; j++)
            {
                fscanf(matrizes,"%d",&Matriz1[i][j]);
            }
        }
        for(i=0; i<linhas1; i++)
        {
            for(j=0; j<colunas1; j++)
            {
                printf(" %d ",Matriz1[i][j]);
            }
            printf("\n");

        }


        fscanf(matrizes, "%d %d",&linhas2,&colunas2);// leitura de dados do arquivo
        printf("\n");
        printf("A matriz 2 tem %d linhas e %d colunas\n\n",linhas2, colunas2);

        for(i=0; i<linhas2; i++)
        {
            for(j=0; j<colunas2; j++)
            {
                fscanf(matrizes,"%d",&Matriz2[i][j]);
            }
        }

        for(i=0; i<linhas2; i++)
        {
            for(j=0; j<colunas2; j++)
            {
                printf(" %d ",Matriz2[i][j]);
            }
            printf("\n");

        }
    }
    printf("\n");
    multiplica(Matriz1,Matriz2,linhas1,colunas2);
    fclose(matrizes);
    return 0;

}
