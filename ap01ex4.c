#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aumentaOSiguais(int*p1,int*p2)// Fun��o para verificar se esses endere�os de mem�ria t�m o mesmo valor inteiro armazenado
                                   // neles. Caso negativo, a fun��o deve subtrair 1 de ambos conte�dos dos endere�os de
                                   // mem�ria. Caso positivo, a fun��o deve fazer a soma dos dois valores e armazenar
                                   // essa soma em ambos endere�os de mem�ria.
{
    int soma=0;
    if (*p1==*p2)
    {
        soma= *p1+*p2;
        *p1=soma;
        *p2=soma;
    }
    else
    {
        *p1-=1;
        *p2-=1;
    }

    printf("%d e %d", *p1,*p2);

}
int main (int argc, char*argv[])//Fun��o Principal
{
    int end_var1,end_var2;
    int*p1= &end_var1;
    int*p2= &end_var2;
    printf("digite o valor das Variaveis: ");
    scanf("%d %d", &end_var1,&end_var2);

    aumentaOSiguais(p1,p2);

    return 0;
}
