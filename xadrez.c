#include <stdio.h>

// ==================== FUNÇÕES RECURSIVAS ====================

// Torre: Move-se horizontalmente ou verticalmente
// Função recursiva para mover a Torre "casas" vezes para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");     // Imprime o movimento atual
    moverTorre(casas - 1);   // Chamada recursiva para a próxima casa
}

// Rainha: Move-se em todas as direções
// Função recursiva para mover a Rainha "casas" vezes para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo: Move-se na diagonal usando recursividade + loops aninhados
// O loop externo controla o movimento vertical (Cima)
// O loop interno controla o movimento horizontal (Direita)
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada
    for (int vertical = 0; vertical < 1; vertical++) { // Apenas 1 passo vertical por chamada
        for (int horizontal = 0; horizontal < 1; horizontal++) { // Apenas 1 passo horizontal por chamada
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas - 1); // Chamada recursiva para próxima casa
}

// ==================== FUNÇÃO PRINCIPAL ====================
int main() {
    // Definindo o número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ------------------------------
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);
    printf("\n");

    // ------------------------------
    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casas_bispo);
    printf("\n");

    // ------------------------------
    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casas_rainha);
    printf("\n");

    // ------------------------------
    // Cavalo: Movimento em "L" para cima e direita
    // 2 casas para cima e 1 para a direita, utilizando loops aninhados complexos
    printf("Movimento do Cavalo:\n");
    int passos_vertical = 2;
    int passos_horizontal = 1;

    for (int l = 0; l < passos_horizontal; l++) { // Loop externo controla o movimento horizontal
        int v = 0; // Variável para contar os passos verticais
        while (1) { // Loop while para o movimento vertical
            if (v >= passos_vertical) break; // Sai quando atingir 2 casas
            printf("Cima\n");
            v++;
            continue; // Continua para o próximo passo vertical
        }
        printf("Direita\n"); // Depois das duas casas para cima, move uma casa para a direita
    }

    return 0;
}
