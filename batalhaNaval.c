#include <stdio.h>

int main() {
    // ---------------------------------------------
    // NÍVEL NOVATO - Tabuleiro 5x5 com 2 navios
    // ---------------------------------------------
    int tabuleiroNovato[5][5] = {0};

    // Navio vertical (coluna 0, linhas 0-2)
    tabuleiroNovato[0][0] = 1;
    tabuleiroNovato[1][0] = 1;
    tabuleiroNovato[2][0] = 1;

    // Navio horizontal (linha 4, colunas 1-3)
    tabuleiroNovato[4][1] = 1;
    tabuleiroNovato[4][2] = 1;
    tabuleiroNovato[4][3] = 1;

    printf("=== NÍVEL NOVATO ===\n");
    printf("Tabuleiro 5x5 com dois navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiroNovato[i][j]);
        }
        printf("\n");
    }

    // ---------------------------------------------
    // NÍVEL AVENTUREIRO - Tabuleiro 10x10 com 4 navios (incluindo diagonais)
    // ---------------------------------------------
    int tabuleiroAventureiro[10][10] = {0};

    // Navio vertical (coluna 1, linhas 1-4)
    for (int i = 1; i <= 4; i++) {
        tabuleiroAventureiro[i][1] = 3;
    }

    // Navio horizontal (linha 7, colunas 2-5)
    for (int j = 2; j <= 5; j++) {
        tabuleiroAventureiro[7][j] = 3;
    }

    // Navio diagonal (↘) de [0][0] até [3][3]
    for (int i = 0; i < 4; i++) {
        tabuleiroAventureiro[i][i] = 3;
    }

    // Navio diagonal (↙) de [0][9] até [3][6]
    for (int i = 0; i < 4; i++) {
        tabuleiroAventureiro[i][9 - i] = 3;
    }

    printf("\n=== NÍVEL AVENTUREIRO ===\n");
    printf("Tabuleiro 10x10 com 4 navios (2 em diagonal):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroAventureiro[i][j]);
        }
        printf("\n");
    }

    // ---------------------------------------------
    // NÍVEL MESTRE - Habilidades com matrizes
    // ---------------------------------------------

    printf("\n=== NÍVEL MESTRE ===\n");

    // Habilidade: CONE
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    printf("\nHabilidade: CONE\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Habilidade: OCTAEDRO
    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    printf("\nHabilidade: OCTAEDRO\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    // Habilidade: CRUZ
    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    printf("\nHabilidade: CRUZ\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
