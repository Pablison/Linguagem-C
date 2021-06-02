#include <stdio.h>
#include <stdlib.h>

//Função para realizar lógica do cálculo da nota do aluno
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media)
{
    int h;
    char a,r,f;
    *media=p1+p2+p3/3;
    h=aulas/4;
    if(faltas<=h && *media>=6.0)
    {
        return 'a';
    }
    if(faltas>=h && *media<6.0 )
    {
        return 'r';
    }
    if(faltas>h)
    {
        return 'f';
    }
}



int main ()
{

    float p1,p2,p3,media;
    int faltas,aulas;
    char p;
    printf ("Digite a primeira nota \n");
    scanf ("%f", &p1);
    printf ("Digite a segunda nota \n");
    scanf ("%f", &p2);
    printf ("Digite a terceira nota \n");
    scanf ("%f", &p3);

    printf ("Digite a quantidade de faltas \n");
    scanf ("%d", &faltas);
    printf ("Digite o total de aulas da disciplina \n");
    scanf ("%d", &aulas);


    if(situacao(p1,p2,p3,faltas,aulas,&media)=='a')
    {
        printf("Aprovado");
    }
    if(situacao(p1,p2,p3,faltas,aulas,&media)=='r')
    {
        printf("Reprovado");
    }
    if(situacao(p1,p2,p3,faltas,aulas,&media)=='f')
    {
        printf("Reprovado por faltas1");
    }
}



