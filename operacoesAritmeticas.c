#include<stdio.h>

int main()
{
//Operação aritmética de soma
    float s1,s2,resp1;
    printf("Operação aritmética de soma: +\n");
    printf("Informe a Primeira variável -> ");
    scanf("%f", &s1);
    printf("Informe a Segunda variável -> ");
    scanf("%f",&s2);
    resp1=s1+s2;
    printf("O resultado da soma entre %.2f e %.2f corresponde a: %f\n",s1,s2,resp1);
    
//Operação aritmética de subtracao
    float s3,s4,resp2;
    printf("\nOperação aritmética de subtracao: -\n");
    printf("Informe a Primeira variável -> ");
    scanf("%f", &s3);
    printf("Informe a Segunda variável -> ");
    scanf("%f",&s4);
    resp2=s3-s4;
    printf("O resultado da diferenca entre %.2f e %.2f corresponde a: %.2f\n",s3,s4,resp2);
    
//Operação aritmética de multiplicacao
    float p1,p2,resp3;
    printf("\nOperação aritmética de multiplicacao: *\n");
    printf("Informe a Primeira variável -> ");
    scanf("%f", &p1);
    printf("Informe a Segunda variável -> ");
    scanf("%f",&p2);
    resp3=p1*p2;
    printf("O resultado do produto entre %.2f e %.2f corresponde a: %.2f\n",p1,p2,resp3);

//Operação aritmética de divisao
    float d1,d2,resp4;
    printf("\nOperação aritmética de divisao: /\n");
    printf("Informe a Primeira variável -> ");
    scanf("%f", &d1);
    printf("Informe a Segunda variável -> ");
    scanf("%f",&d2);
    resp4=d1/d2;
    printf("O resultado da divisao de %.3f por %.3f corresponde a: %.3f\n",d1,d2,resp4);
    
//Operação aritmética de encontro de resto
    int r1,r2,resp5;
    printf("\nOperação aritmética de resto: %\n");
    printf("Informe a Primeira variável -> ");
    scanf("%d", &r1);
    printf("Informe a Segunda variável -> ");
    scanf("%d",&r2);
    resp5=r1%r2;
    printf("O resto da divisão no conjunto dos inteiros entre %d e %d corresponde a: %d\n",r1,r2,resp5);    

    return 0;
}
