#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void array(int m, int n)//Programa para soma de matrizes utilizando Aloca��o din�mica
{
    int **matrizA;
    int **matrizB;
    int **matrizC;
    int i,j;
    matrizA=(int**)malloc(m*sizeof(int*));// Aloca��o de mem�ria para ponteiros
    matrizB=(int**)malloc(m*sizeof(int*));// Aloca��o de mem�ria para ponteiros
    matrizC=(int**)malloc(m*sizeof(int*));// Aloca��o de mem�ria para ponteiros

    if ((matrizA==NULL)||(matrizB==NULL)||(matrizC==NULL))//Condi��o de teste se a mem�ria foi alocada corretamente
    {
        printf ("Erro Memoria insuficiente \n");
        exit(1);// Saida do programa se houver problema na aloca��o
    }
    else
    {
        printf("Memoria disponivel \n");


        for(i=0; i<m; i++)//loop para prenchimento da matriz
        {
            matrizA[i]=(int*)malloc(n*sizeof(int));//aloca��o de memoria para as colunas da matriz

            for(j=0; j<m; j++)
            {
                printf("Digite o numero para a posicao MatrizA[%d][%d]: ", i,j);
                scanf("%d",&matrizA[i][j]);
            }
        }
        printf("\n\n");

        for(i=0; i<m; i++)//impress�o da matriz na tela
        {
            for(j=0; j<m; j++)
            {
                printf(" %d ",matrizA[i][j]);
            }
            printf("\n");
        }

        printf("\n\n");


        for(i=0; i<m; i++)//loop para prenchimento da matriz
        {
            matrizB[i]=(int*)malloc(n*sizeof(int));//aloca��o de memoria para as colunas da matriz

            for(j=0; j<m; j++)
            {
                printf("Digite o numero para a posicao MatrizB[%d][%d]: ", i,j);
                scanf("%d",&matrizB[i][j]);
            }
        }
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                printf(" %d ",matrizB[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

        printf("O resultado da soma das matrizes e : \n\n");


        for(i=0; i<m; i++)// Loop para realiza��o da soma daas matrizes
        {
            matrizC[i]=(int*)malloc(n*sizeof(int));

            for(j=0; j<m; j++)
            {
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                printf(" %d ",matrizC[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<m; i++)//libera��o da memoria alocada
        {
            free(matrizA[i]);
            matrizA[i]= NULL;
        }
        for(i=0; i<m; i++)
        {
            free(matrizB[i]);
            matrizB[i]= NULL;
        }
        for(i=0; i<m; i++)
        {
            free(matrizC[i]);
            matrizC[i]= NULL;
        }

        free(matrizA);//libera��o da memoria alocada
        free(matrizB);
        free(matrizC);

        matrizA=NULL;// evitrando a presen�a de dagling ponteiros
        matrizB=NULL;
        matrizC=NULL;

    }


}

int main()//programa para realiza��o da fun��o
{
    int M;
    int N;
    printf("Programa para soma de matrizes utilizando Aloca��o din�mica\n\n");
    printf("Digite um valor M: ");
    scanf("%d",&M);
    printf("o valor digitado foi %d \n",M);
    printf("Digite um valor N: ");
    scanf("%d",&N);
    printf("o valor digitado foi %d \n",N);

    array(M,N);

    return 0;
}
