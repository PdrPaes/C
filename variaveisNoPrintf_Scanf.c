#include<stdio.h>

int main()
{
//Printf e Scanf usando float
    float peso;
    printf("Informe seu peso: \n");
    scanf("%f", &peso);
    printf("\nSeu peso e %.2f kg", peso);
    
//Printf e Scanf usando int
    int idade;
    printf("\nInforme sua idade: \n");
    scanf("%d", &idade);
    printf("\nSua idade e %d anos", idade);
    
//Printf e Scanf usando char
    char sexo[1];
    printf("\nInforme seu sexo: \nM ou F\n");
    scanf("%s", &sexo);
    printf("\nSeu sexo e %s", sexo);
    
    return 0;
}
