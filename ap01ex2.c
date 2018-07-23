#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void array(int m, int n)//Programa para soma de matrizes utilizando Alocação dinâmica
{
    int **matrizA;
    int **matrizB;
    int **matrizC;
    int i,j;
    matrizA=(int**)malloc(m*sizeof(int*));// Alocação de memória para ponteiros
    matrizB=(int**)malloc(m*sizeof(int*));// Alocação de memória para ponteiros
    matrizC=(int**)malloc(m*sizeof(int*));// Alocação de memória para ponteiros

    if ((matrizA==NULL)||(matrizB==NULL)||(matrizC==NULL))//Condição de teste se a memória foi alocada corretamente
    {
        printf ("Erro Memoria insuficiente \n");
        exit(1);// Saida do programa se houver problema na alocação
    }
    else
    {
        printf("Memoria disponivel \n");


        for(i=0; i<m; i++)//loop para prenchimento da matriz
        {
            matrizA[i]=(int*)malloc(n*sizeof(int));//alocação de memoria para as colunas da matriz

            for(j=0; j<m; j++)
            {
                printf("Digite o numero para a posicao MatrizA[%d][%d]: ", i,j);
                scanf("%d",&matrizA[i][j]);
            }
        }
        printf("\n\n");

        for(i=0; i<m; i++)//impressão da matriz na tela
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
            matrizB[i]=(int*)malloc(n*sizeof(int));//alocação de memoria para as colunas da matriz

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


        for(i=0; i<m; i++)// Loop para realização da soma daas matrizes
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

        for(i=0; i<m; i++)//liberação da memoria alocada
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

        free(matrizA);//liberação da memoria alocada
        free(matrizB);
        free(matrizC);

        matrizA=NULL;// evitrando a presença de dagling ponteiros
        matrizB=NULL;
        matrizC=NULL;

    }


}

int main()//programa para realização da função
{
    int M;
    int N;
    printf("Programa para soma de matrizes utilizando Alocação dinâmica\n\n");
    printf("Digite um valor M: ");
    scanf("%d",&M);
    printf("o valor digitado foi %d \n",M);
    printf("Digite um valor N: ");
    scanf("%d",&N);
    printf("o valor digitado foi %d \n",N);

    array(M,N);

    return 0;
}
