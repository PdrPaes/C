#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

enum dias_da_semana {domingo=1, segunda, terca, quarta, quinta, sexta, sabado};
enum status_pedido {reprovado, aprovado, em_analise};
int main(){
    setlocale(LC_ALL, "portuguese");
    
            enum status_pedido pedido;
            pedido=aprovado;
            
            if(pedido==aprovado);{
                printf("Pedido foi APROVADO!");
            }
                    
return(0);
}