#include<stdio.h>

int main()
{
    /*Leia o valor do salário de um funcionário e retorne o valor das férias
desse funcionário. O valor das férias é composto pelo valor do
salário acrescido de 1/3.*/
     float salario;
     printf("Salario com bonus de ferias \n");
     printf("Informe o valor do salario base -> R$");
     scanf("%f",&salario);
     salario=salario*1.333333;
     printf("O Salario de ferias do funcionario será de -> R$%.2f",salario);
    return 0;
}
