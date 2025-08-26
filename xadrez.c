#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ------------------------------
    // Torre: Move-se horizontal ou verticalmente
    // Vamos usar o 'for' para mover a Torre 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ------------------------------
    // Bispo: Move-se na diagonal
    // Vamos usar 'while' para mover o Bispo 5 casas para cima e à direita
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // ------------------------------
    // Rainha: Move-se em todas as direções
    // Vamos usar 'do-while' para mover a Rainha 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casas_rainha);

    return 0;
}
