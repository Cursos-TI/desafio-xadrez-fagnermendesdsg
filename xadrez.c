#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    printf("Desafio Xadrez - Novato\n");
    /// Movimento da Torre com FOR: 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    for (int t = 1; t <= 5; t++) {
        printf("Direita (%d)\n", t);
    }

    // Movimento do Bispo com WHILE: 5 casas na diagonal para cima e direita
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= 5) {
        printf("Diagonal superior direita (%d)\n", b);
        b++;
    }

    // Movimento da Rainha com DO-WHILE: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda (%d)\n", r);
        r++;
    } while (r <= 8);

    return 0;
}
