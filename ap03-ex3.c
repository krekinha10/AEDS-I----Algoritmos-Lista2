#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

struct Aluno//Estrutura para cadastro de alunos
{
    char nome [30];
    int idade ;
    int matricula;
};

int main(int argc, char*argv[])// Função Principal
{
    printf("Estrutura para cadastro de alunos\n\n");
    struct Aluno Dados[5];
    int n = 5;
    int i;
    int count=0;
    int count1=0;
    int count2=0;
    FILE*Alunos;//ponteiro apontando para o arquivo
    Alunos=fopen("dadosalunos.txt","wb");//abertura/criação do arquivo binario
    if(Alunos==NULL)//condiupção de teste para saber se o arquivo foi aberto corretamente
    {
        printf("\n Erro ao abrir arquivo");
        exit(1);
    }
    else
    {
        printf("O arquivo foi criado com sucesso \n\n");

        for(i=0; i<n; i++)//Loop para preenchimento do cadastro dos alunos
        {
            printf("Digite o nome do Aluno %d: ",i+1 );
            gets(Dados[i].nome);
            count = fwrite(&Dados[i].nome,sizeof(char),strlen(Dados[i].nome),Alunos);

            if(count!=strlen(Dados[i].nome))//condição de teste para ver se o dado foi gravado corretamente
            {
                printf("gravacao incorreta\n");
                exit(1);
            }
            else
            {
                printf("\n");
                printf("gravacao correta\n\n");
                printf("\n");
                printf("Digite a idade do Aluno %d: ",i+1 );
                scanf("%d",&Dados[i].idade);
                count1=fwrite(&Dados[i].idade,sizeof(int),sizeof(Dados[i].idade),Alunos);
                if(count1!=sizeof(Dados[i].idade))//condição de teste para ver se o dado foi gravado corretamente
                {
                    printf("gravacao incorreta\n");
                    exit(1);
                }
                else
                {
                    printf("\n");
                    printf("gravacao correta\n");
                    printf("\n");
                    printf("Digite a matricula do Aluno %d: ",i+1 );
                    scanf("%d",&Dados[i].matricula);
                    count2=fwrite(&Dados[i].matricula,sizeof(int),sizeof(Dados[i].matricula),Alunos);
                    if(count2!=sizeof(Dados[i].matricula))//condição de teste para ver se o dado foi gravado corretamente
                    {
                        printf("gravacao incorreta\n");
                        exit(1);
                    }
                    else
                    {
                        printf("\n");
                        printf("gravacao correta\n\n");
                        printf("\n");

                    }
                }
            }

                    fflush(stdin);
               }
            }
            fflush(Alunos);
            fclose(Alunos);
            return 0;

        }
