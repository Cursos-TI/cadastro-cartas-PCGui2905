#include <stdio.h>

int main (){

    int temperatura = 10;
    int resultado;

    resultado = temperatura > 30 ? 1 : 0;
    // Condição → temperatura > 30 | O programa verifica se a temperatura é maior que 30;
    // Operador "?" -> Se a condição (temperatura > 30) for verdadeira, o valor será 1;
    // Operador ":"  → significa "senão" | Se a condição for falsa, o valor será 0;

    if (resultado == 1)
    {
        printf("Está calor!\n");

    } else {

         printf("Está frio!\n");    
    }
    
 
    
 





    return 0;
}