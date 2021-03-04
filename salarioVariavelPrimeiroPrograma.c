#include <stdio.h>
#include <stdlib.h>
int main() {
    int anoNasc, idade, atual, rise;
    float salario, aumento;
    char nome[20];
    
    printf ("Informe o ano de nascimento do Usuario: \n");
    scanf ("%d", &anoNasc);   
    printf ("Informe o Salario do Usuario: \n");
    scanf ("%f", &salario);
    printf ("Informe a porcentagem do aumento desejado: \n");
    scanf ("%d", &rise);   
    printf ("Informe o ano atual: \n");
    scanf ("%d", &atual);   
    printf("Informe o nome do funcionario: \n");
    scanf("%s", &nome);
    
    idade = atual - anoNasc;
    
    aumento = salario + (salario*rise/100);
    
    printf ("O funcionario %s ", nome);
    printf ("com idade atual de %d anos ",idade);
    printf ("irá passar a receber %.2f no proximo mes.", aumento);
    
    return 0;
}