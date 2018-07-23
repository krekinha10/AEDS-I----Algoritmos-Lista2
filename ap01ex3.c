#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vetorizar(int*arr)//Programa para transformar array em vetor alocado dinamicamente
{
    int i,j;
    int n = sizeof(arr);// calculo do tamanho do vetor
    int soma= 0;
    int*array;
    array =(int*)malloc(n*sizeof(int));//Alocação dinamica de memoria do tamanho do vetor
    printf("O tamanho do vetor e %d \n",n);
    printf ("\n");

    for(i=0; i<=n; i++)//loop para calcular a soma dos termos atencendentes a termo x e colocar esse valor na posição x
    {
        soma=0;
        for (j=0; j<=i; j++)
        {
            soma+= arr[j];
        }
        array[i]= soma;

    }
    printf("O vetor obtido e \n\n");

    for(i=0; i<=n ; i++)// impressão do array resultante
    {
        printf(" %d ", array[i]);
    }
    free(array);//liberação de memoria
    array = NULL;//evitando dangling ponteiros

}

int main()// Função principal
{
    int i;
    int lista[9]= {25,4,10,30,20,1,3,5,6};
    printf("Programa para transformar array em vetor alocado dinamicamente \n\n");
    vetorizar(lista);

    return 0;
}
