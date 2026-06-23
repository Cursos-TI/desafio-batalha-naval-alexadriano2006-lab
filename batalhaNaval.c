#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Nível Novato - Posicionamento dos Navios
// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro.
// Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
// Sugestão: Utilize printf para exibir as coordenadas de cada parte dos navios.

int main()
{
    // Matriz que representa o tabuleiro do jogo.
    // Valor 0 = água.
    // Valor 3 = parte de um navio.
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Variáveis utilizadas para percorrer as linhas e colunas da matriz.
    int linhas = 0;
    int colunas = 0;

    // Inicializa todas as posições do tabuleiro com água.
    for (linhas = 0; linhas < TAM_TABULEIRO; linhas++)
    {
        for (colunas = 0; colunas < TAM_TABULEIRO; colunas++)
        {
            tabuleiro[linhas][colunas] = 0;
        }
    }

    // Vetor que representa um navio horizontal de tamanho 3.
    int navio_horizontal[TAM_NAVIO] = {3, 3, 3};

    // Coordenada inicial do navio horizontal.
    int linhaHorizontal = 2;
    int colunaHorizontal = 1;

    // Vetor que representa um navio vertical de tamanho 3.
    int navio_vertical[TAM_NAVIO] = {3, 3, 3};

    // Coordenada inicial do navio vertical.
    int linhaVertical = 5;
    int colunaVertical = 7;

    // Vetor que representa um navio na diagonal principal.
    int navio_diagonal_principal[TAM_NAVIO] = {3, 3, 3};

    // Coordenada inicial do navio diagonal principal.
    int linhaDiagonalPrincipal = 1;
    int colunaDiagonalPrincipal = 5;

    // Vetor que representa um navio na diagonal secundária.
    int navio_diagonal_secundaria[TAM_NAVIO] = {3, 3, 3};

    // Coordenada inicial do navio diagonal secundária.
    int linhaDiagonalSecundaria = 6;
    int colunaDiagonalSecundaria = 2;

    // Verifica se o navio horizontal cabe dentro dos limites do tabuleiro.
    if (colunaHorizontal + TAM_NAVIO <= TAM_TABULEIRO)
    {
        // Verifica se todas as posições estão livres.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            if (tabuleiro[linhaHorizontal][colunaHorizontal + i] != 0)
            {
                printf("Ha um navio nessa posicao\n");
                return 0;
            }
        }

        // Posiciona o navio horizontal.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navio_horizontal[i];
        }
    }
    else
    {
        printf("Posicao invalida para o navio horizontal\n");
        return 0;
    }

    // Verifica se o navio vertical cabe dentro dos limites do tabuleiro.
    if (linhaVertical + TAM_NAVIO <= TAM_TABULEIRO)
    {
        // Verifica se todas as posições estão livres.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            if (tabuleiro[linhaVertical + i][colunaVertical] != 0)
            {
                printf("Ha um navio nessa posicao\n");
                return 0;
            }
        }

        // Posiciona o navio vertical.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            tabuleiro[linhaVertical + i][colunaVertical] = navio_vertical[i];
        }
    }
    else
    {
        printf("Posicao invalida para o navio vertical\n");
        return 0;
    }

    // Verifica se o navio diagonal principal cabe dentro dos limites do tabuleiro.
    if (linhaDiagonalPrincipal + TAM_NAVIO <= TAM_TABULEIRO &&
        colunaDiagonalPrincipal + TAM_NAVIO <= TAM_TABULEIRO)
    {
        // Verifica se todas as posições da diagonal estão livres.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            if (tabuleiro[linhaDiagonalPrincipal + i][colunaDiagonalPrincipal + i] != 0)
            {
                printf("Ha um navio nessa posicao\n");
                return 0;
            }
        }

        // Posiciona o navio na diagonal principal.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            tabuleiro[linhaDiagonalPrincipal + i][colunaDiagonalPrincipal + i] =
                navio_diagonal_principal[i];
        }
    }
    else
    {
        printf("Posicao invalida para o navio diagonal principal\n");
        return 0;
    }

    // Verifica se o navio diagonal secundária cabe dentro dos limites do tabuleiro.
    if (linhaDiagonalSecundaria + TAM_NAVIO <= TAM_TABULEIRO &&
        colunaDiagonalSecundaria - (TAM_NAVIO - 1) >= 0)
    {
        // Verifica se todas as posições da diagonal estão livres.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            if (tabuleiro[linhaDiagonalSecundaria + i][colunaDiagonalSecundaria - i] != 0)
            {
                printf("Ha um navio nessa posicao\n");
                return 0;
            }
        }

        // Posiciona o navio na diagonal secundária.
        for (int i = 0; i < TAM_NAVIO; i++)
        {
            tabuleiro[linhaDiagonalSecundaria + i][colunaDiagonalSecundaria - i] =
                navio_diagonal_secundaria[i];
        }
    }
    else
    {
        printf("Posicao invalida para o navio diagonal secundaria\n");
        return 0;
    }

    // Exibe o tabuleiro completo no console.
    for (linhas = 0; linhas < TAM_TABULEIRO; linhas++)
    {
        for (colunas = 0; colunas < TAM_TABULEIRO; colunas++)
        {
            printf("%d ", tabuleiro[linhas][colunas]);
        }

        // Avança para a próxima linha do tabuleiro.
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas.

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