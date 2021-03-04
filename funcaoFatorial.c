#include <stdio.h>
#include <stdlib.h>

void fatorial(int n){

    int i;
    int fat =1;

    for(i=n;i<=1;i--){
        fat = fat *i;

    }

    printf("o fatorial �: %d",fat);

    return;
}

int main()
{
    int numero;

    printf("digite um numero para ser fatorado:");
    scanf("%d",&numero);

    fatorial(numero);

    return 0;


}
