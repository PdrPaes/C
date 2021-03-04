#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N=0,n=0,soma=0;
    float media;
    printf("==Media Aritmetica de positivos==\n");
        while(n>=0){
            printf("\nInforme o valor: ");
            scanf("%d",n);
                if(n>=0){
                soma=soma+n;
                N++;
                }
                else
                printf("\nValor invalido");
            
        }
    media=soma/(N-1);
    printf("\nA Media Aritmetica dos valores positivos e: %.2f",media);
    
    return 0;
}