#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void Torre(int casas) {

    if (casas > 0) {
        printf("Direita.\n");
        Torre(casas - 1);
    }

}

void Bispo(int casas) {

    do {
        printf("Cima, Direita.\n");
        casas++;
    } while (casas <= 5);

}

void Rainha(int casas) {

    if (casas > 0)
    {
        printf("Esquerda.\n");
        Rainha(casas - 1);
    }

}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 5, bispo = 1, rainha = 8;
    int l, cavalo;

    printf("Vamos ver a movimentação de peças de xadrez!\n\n");
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Bispo!\n");
    Bispo(bispo);
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre!\n");
    Torre(torre);
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha!\n");
    Rainha(rainha);
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Cavalo!\n");

    printf("Cavalo!\n");

    for (cavalo = 1, l = 3; cavalo <= 2 || l <= cavalo; cavalo++, l--) 
    {
        printf("Cima.\n");
        if (l == cavalo) 
        {
            printf("Direita.\n");
            break;
        }
            
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
