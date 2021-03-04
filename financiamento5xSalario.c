#include<stdio.h>

int main()
{
    /*Leia o salario de uma pessoa e o valor de um financiamento e caso
    ele seja menor ou igual a 5x o salario, o algoritmo aprova o financimento*/
    float sal,fin;
    printf("Informe o Salario atual -> ");
    scanf("%f",&sal);
    printf("Informe o valor do Financiamento desejado -> ");
    scanf("%f",&fin);
    
    if(fin <= 5*sal)
        printf("\nO Financiamento foi Aprovado");
        else
            printf("\nO Financiamento foi Negado");

    return 0;
}