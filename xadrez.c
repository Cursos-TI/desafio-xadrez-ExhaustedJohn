#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 1, bispo = 1, l = 1;
    int rainha, cavalo;

    printf("Vamos ver a movimentação de peças de xadrez!\n\n");
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Bispo!\n");

    do {
        printf("Cima, Direita.\n");
        bispo++;
    } while (bispo <= 5);
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre!\n");

    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha!\n");

    for (rainha = 1; rainha <= 8; rainha++) {
        printf("Esquerda.\n");
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Cavalo!\n");

    for (cavalo = 1; cavalo <= 2; cavalo++) 
    {
        while (l <= cavalo) 
        {
        printf("Baixo.\n");
        l++;
        }
    }
    printf("Esquerda.\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
