#include<stdio.h>

int main()
{
    /*Leia o valor do sal�rio de um funcion�rio e retorne o valor das f�rias
desse funcion�rio. O valor das f�rias � composto pelo valor do
sal�rio acrescido de 1/3.*/
     float salario;
     printf("Salario com bonus de ferias \n");
     printf("Informe o valor do salario base -> R$");
     scanf("%f",&salario);
     salario=salario*1.333333;
     printf("O Salario de ferias do funcionario ser� de -> R$%.2f",salario);
    return 0;
}
