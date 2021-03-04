#include<stdio.h>

int main()
{
    //Leia 4 numeros e encontre a media aritmetica entre os pares.
    int n1,n2,n3,n4;
    float media;
    
    printf("Informe o Primeiro Numero -> ");
    scanf("%d",&n1);
    printf("Informe o Segundo Numero -> ");
    scanf("%d",&n2);
    printf("Informe o Terceiro Numero -> ");
    scanf("%d",&n3);
    printf("Informe o Quarto Numero -> ");
    scanf("%d",&n4);
    
    if((n1%2==0)&&(n2%2==0)&&(n3%2==0)&&(n4%2==0)){
        media=(n1+n2+n3+n4)/4;
        printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
    }
//Agrupamento tres a tres
        else if((n1%2==0)&&(n2%2==0)&&(n3%2==0)){
            media=(n1+n2+n3)/3;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n1%2==0)&&(n2%2==0)&&(n4%2==0)){
            media=(n1+n2+n4)/3;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n1%2==0)&&(n3%2==0)&&(n4%2==0)){
            media=(n1+n3+n4)/3;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n2%2==0)&&(n3%2==0)&&(n4%2==0)){
            media=(n2+n3+n4)/3;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
//Agrupamento dois a dois        
        else if((n1%2==0)&&(n4%2==0)){
            media=(n1+n4)/2;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n1%2==0)&&(n3%2==0)){
            media=(n1+n3)/2;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n1%2==0)&&(n2%2==0)){
            media=(n1+n2)/2;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n2%2==0)&&(n4%2==0)){
            media=(n2+n4)/2;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n2%2==0)&&(n3%2==0)){
            media=(n2+n3)/2;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if((n3%2==0)&&(n4%2==0)){
            media=(n3+n4)/2;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
//Agrupamento Unico      
        else if(n1%2==0){
            media=n1;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if(n2%2==0){
            media=n2;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if(n3%2==0){
            media=n3;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        else if(n4%2==0){
            media=n4;
            printf("A Media aritmetica dos numeros pares corresponde a: %.2f",media);
        }
        
   return 0;
}