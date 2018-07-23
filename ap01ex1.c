#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void array(int n)// Função para a criação do Array com N inteiros
{
    int i;
    int*array=NULL;
    array=(int*)malloc((n-1)*sizeof(int));// Comando para alocação Dinâmica do Array
    if(array==NULL)// Condição que assegura que o a Alocação retornou um espaço de memoria válido
    {
        printf("Erro Memoria Insuficiente\n");
        system("pause");
        exit(1);// comando para sair do programa em caso de erro
    }
    else// considerando a alocação correta o LOOP abaixo garante o preenchimento do array
    {
        for(i=0; i<n ; i++)// preenchimento com valores de ) a N-1.
        {
            array[i]=i;
        }
        for(i=0; i<n; i++)//LOOP para impressão do array.
        {
            printf("O valor para a posição %d e %d \n", i, array[i]);
        }
        free(array);//Comnado para liberar a posição de memoria alocada
        array= NULL;// Apontamento do ponteiro para NULL para não deixar ponteiros soltos no codigo
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

