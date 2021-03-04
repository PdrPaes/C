#include<stdio.h>

int main()
{
    /*Leia um numero inteiro e mostre uma mensagem informando 
    se e para ou impar e se e positivo ou negativo*/
     float a,b,c,d,md;
     printf("Informe a primeira nota -> ");
     scanf("%f",&a);
     printf("Informe a segunda nota -> ");
     scanf("%f",&b);
     printf("Informe a terceira nota -> ");
     scanf("%f",&c);
     printf("Informe a quarta nota -> ");
     scanf("%f",&d);
    
     md=(a+b+c+d)/4;
    
     if(md >= 7)
         printf("\nO Aluno foi Aprovado");

     if(md<5)
         printf("\nO Aluno foi Reprovado");
        
     if(md>=5 && md<7)
         printf("\nO Aluno esta em Recuperacao");
    return 0;
}