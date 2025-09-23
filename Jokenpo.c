#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int escolhaJogador;
    int escolhaComputador;
    srand(time(0));
    // Ela define a “semente” que o gerador de números aleatórios vai usar para produzir valores;

    printf("\n=====JOGO DE JOKENPÔ======\n");
    printf("------------------------------------\n");

    printf("Jogo de Jokenpô/n");
    printf("Escolha uma opção abaixo:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:\n");
    scanf("%d", &escolhaJogador);
    
    escolhaComputador = rand()  %3 + 1;
    //rand() → gera um número aleatório grande;
    //%3 → limita os resultados para 0, 1 ou 2;
    //+ 1 → muda o intervalo para 1, 2 ou 3;

    switch (escolhaJogador)
    {
    case 1: 
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3: ("Jogador: Tesoura\n");
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:     
        printf("Computador: Pedra\n");
        break;
    case 2: 
        printf("Computador: Papel\n");
        break;
    case 3: 
        printf("Computador: Tesoura\n");
        break;
    
    default:
        printf("Opção Inválida!\n");
        break;
    }

    if (escolhaComputador == escolhaJogador)
    {
        printf("Jogo Empatou!\n");

    }else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
             (escolhaJogador == 2) && (escolhaComputador == 1) ||
             (escolhaJogador == 3) && (escolhaComputador == 2))

    {
        printf("Você ganhou!\n");
    }else {

        printf("Você perdeu!\n");
    }
    

 
    
    
    
    
    





    return 0;
}