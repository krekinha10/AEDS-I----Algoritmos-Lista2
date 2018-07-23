#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


enum Semana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado } ;// Enumeração dos dias da semana

int main(int argc, char*argv[])
{
    int n,i;
    printf("Digite um numero inteiro entre 0 e 6:  ");
    scanf("%d", &n);
    printf("\n");
    switch(n)//loop para detrerminação dos dias da semana
    {
    case 0:
        printf("Domingo ");
        printf("\n");
        break;
    case 1:
        printf("Segunda ");
        printf("\n");
        break;
    case 2:
        printf("Terca ");
        printf("\n");
        break;
    case 3:
        printf("Quarta ");
        printf("\n");
        break;
    case 4:
        printf("Quinta ");
        printf("\n");
        break;
    case 5:
        printf("Sexta ");
        printf("\n");
        break;
    case 6:
        printf("Sabado ");
        printf("\n");
        break;
    }

    return 0;
}
