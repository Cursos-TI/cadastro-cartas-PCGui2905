#include <stdio.h>

int main (){

    int num1 = 40;
    int num2 = 60;
    int maior;
    // Declara três variáveis inteiras;
    // num1 e num2 recebem valores;
    // "maior" será usada para guardar o maior número (no caso do ternário).


    num1 > num2 ? (maior = num1) : (maior = num2);

    //-> AQUI VOCÊ USA O OPERADOR TERNÁRIO <-;
    // Condição: num1 > num2;
    // Se verdadeira → maior = num1;
    // Se falsa → maior = num2;
    // Resultado: maior recebe o valor do maior número entre num1 e num2;


    if (num1 > num2)
    {
     printf("O número maior é %d\n", num1);
     // "O número maior é %d\n":
     // É a string de formato que será exibida;
     // %d é um placeholder (espaço reservado) para um número inteiro;
     // "num2":
     // É o valor que vai substituir %d na string;
     // No seu caso, se num2 = 60, o %d será substituído por 60.
     // Observações:
     // Sem o %d, você não conseguiria mostrar o valor de num1 ou num2 dentro da frase.

    } else {
     printf("O número maior é %d\n", num2);
    }
    // Aqui você faz a mesma verificação usando if/else, sem usar a variável maior;
    // Se num1 for maior que num2, imprime num1;
    // Senão, imprime num2;
    // Ou seja, você está repetindo a lógica do ternário, mas de forma tradicional com if/else;
    



    return 0;



    
    
   







    return 0;
}