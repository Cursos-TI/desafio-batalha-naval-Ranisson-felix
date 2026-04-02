#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    //Variáveis e o tabuleiro
    
    int tabuleiro[10][10] = {0}; 
    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Coordenadas dos navios 

    int coordenadas[12][2] = {
        {1, 2}, {1, 3}, {1, 4}, // Navio Horizontal
        {6, 9}, {7, 9}, {8, 9}, // Navio Vertical
        {0, 0}, {1, 1}, {2, 2}, // Navio Diagonal
        {0, 9}, {1, 8}, {2, 7}  // Navio na Diagonal Oposta
        };

        
    //matrizes para habilidades especiais

    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}   
    };
    
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    printf("     JOGO BATALHA NAVAL\n");
    printf("\n");

    // Este loop "prepara" o tabuleiro antes de mostrar ao usuário

    for (int i = 0; i < 12; i++) {
        tabuleiro[coordenadas[i][0]][coordenadas[i][1]] = 3;
    }

    // Preenchendo o tabuleiro com as habilidades especiais

    for(int i = 0; i < 5; i++){
        if(i < 3){
            for(int j = 0; j < 5; j++){
                tabuleiro[i+7][j] = cone[i][j];
                tabuleiro[i+6][j + 4] = cruz[i][j];
                tabuleiro[i+3][j+2] = octaedro[i][j];
            }
        }
    }

    //Loops de impressão do tabuleiro

    printf("    "); 
    for (int i = 0; i < 10; i++) {
        printf(" %c ", letra[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf(" %2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
