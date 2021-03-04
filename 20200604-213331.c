#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

typedef struct{
    char nome[30];
    int matricula;
    char curso[30];
} aluno;

int main(){
    setlocale(LC_ALL, "portuguese");
    
    aluno a[5], i;
    
    for(i=0; i<5; i++){
        printf("Informe o nome do %dº aluno: ",i+1);
        gets(a[i].nome);
        printf("Informe a matrícula do %dº aluno: ",i+1);
        scanf("%d", &a[i].matricula);
        getchar();
        printf("Informe o curso do %dº aluno: ",i+1);
        gets(a[i].curso);
        }
        
   printf("Impressão dos Alunos:");
        for(i=0;i<2;i++){
        printf("Nome do %dº Alun@: %s", i+1, a[i].nome);
        printf("Matrícula do %dº Aluno@: %d",i+1, a[i].matricula);
        printf("Curso do %dº Aluno: "i+1,a[i].curso);
        }
        
return(0);
}