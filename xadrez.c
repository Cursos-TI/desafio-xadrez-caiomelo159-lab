#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ------------------------------
    // Torre: Move-se horizontal ou verticalmente (for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ------------------------------
    // Bispo: Move-se na diagonal (while)
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // ------------------------------
    // Rainha: Move-se em todas as direções (do-while)
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casas_rainha);
    printf("\n");

    // ------------------------------
    // Cavalo: Movimento em "L" (2 para baixo, 1 para esquerda)
    // Usando loops aninhados: for + while
    printf("Movimento do Cavalo:\n");
    int movimentos_baixo = 2;
    int movimentos_esquerda = 1;

    for (int m = 0; m < movimentos_esquerda; m++) {
        int k = 0;
        while (k < movimentos_baixo) {
            printf("Baixo\n");
            k++;
        }
        printf("Esquerda\n");
    }

    return 0;
}
