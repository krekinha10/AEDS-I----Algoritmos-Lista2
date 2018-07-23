#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void array(int n)// Fun��o para a cria��o do Array com N inteiros
{
    int i;
    int*array=NULL;
    array=(int*)malloc((n-1)*sizeof(int));// Comando para aloca��o Din�mica do Array
    if(array==NULL)// Condi��o que assegura que o a Aloca��o retornou um espa�o de memoria v�lido
    {
        printf("Erro Memoria Insuficiente\n");
        system("pause");
        exit(1);// comando para sair do programa em caso de erro
    }
    else// considerando a aloca��o correta o LOOP abaixo garante o preenchimento do array
    {
        for(i=0; i<n ; i++)// preenchimento com valores de ) a N-1.
        {
            array[i]=i;
        }
        for(i=0; i<n; i++)//LOOP para impress�o do array.
        {
            printf("O valor para a posi��o %d e %d \n", i, array[i]);
        }
        free(array);//Comnado para liberar a posi��o de memoria alocada
        array= NULL;// Apontamento do ponteiro para NULL para n�o deixar ponteiros soltos no codigo
    }

}

int main()
{
    int N;
    printf("Programa para Criacao de um Array de N inteiros\n\n");
    printf("Digite um valor N: ");
    scanf("%d",&N);
    printf("o valor digitado foi %d \n",N);

    array(N);
    return 0;
}

