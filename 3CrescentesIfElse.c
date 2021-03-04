#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x [30];
    int tam;
    int i;
    int cont =0;

    printf("Informe o Texto a ser Invertido:\n");
    gets(x);

    tam = strlen(x);

    printf("\n\tDepois do processamento\n");
    for(i=tam -1;i >=0;i--){
        printf("%c",x[i]);


    }
    for(i=tam -1;i >=0;i--){
        if((x[i]=='a')||(x[i]=='e')||(x[i]==i)||(x[i]=='o')||(x[i]=='a')){
            cont++;
        }
    }


    printf("\n");
    printf("\n\t O Numero de Vogais foi -> %d\n",cont);

    system("pause");
    return 0;


}
