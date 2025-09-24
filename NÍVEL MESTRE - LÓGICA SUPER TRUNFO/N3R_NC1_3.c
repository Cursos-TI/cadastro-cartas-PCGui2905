#include <stdio.h>

int main (){

    int num1 = 40;
    int num2 = 60;
    int maior;


    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O número maior é: %d", maior);
    // num1 > num2 → condição que estamos testando;
    // "?" → se a condição for verdadeira, executa o que está entre parênteses à direita → (maior = num1);
    // ":" → se a condição for falsa, executa o que está entre parênteses à direita → (maior = num2);
    // O resultado do ternário é a atribuição feita em maior;







    return 0;
}