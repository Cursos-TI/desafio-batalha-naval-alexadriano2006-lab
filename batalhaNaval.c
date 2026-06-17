#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

int main() {

    // Matriz 10x10 que representa o tabuleiro do jogo.
    // Valor 0 = água
    // Valor 3 = parte de um navio
    int tabuleiro[10][10];

    // Variáveis auxiliares para percorrer linhas e colunas da matriz.
    int linhas = 0;
    int colunas = 0;

    // Inicializa todas as posições do tabuleiro com 0 (água).
    for (linhas = 0; linhas < 10; linhas++)
    {
        for (colunas = 0; colunas < 10; colunas++)
        {
            tabuleiro[linhas][colunas] = 0;
        }
    }

    // Vetor que representa um navio horizontal de tamanho 3.
    int navio_horizontal[] = {3, 3, 3};

    // Coordenada inicial do navio horizontal.
    int linhaHorizontal = 2;
    int colunaHorizontal = 1;

    // Vetor que representa um navio vertical de tamanho 3.
    int navio_vertical[] = {3, 3, 3};

    // Coordenada inicial do navio vertical.
    int linhaVertical = 5;
    int colunaVertical = 7;

    // Verifica se a posição inicial do navio horizontal está livre.
    if (tabuleiro[linhaHorizontal][colunaHorizontal] == 0)
    {
        // Percorre as 3 posições do navio.
        for (int i = 0; i < 3; i++)
        {
            // Verifica se o navio cabe dentro dos limites do tabuleiro.
            if (colunaHorizontal + 3 <= 10)
            {
                // Posiciona o navio horizontalmente.
                tabuleiro[linhaHorizontal][colunaHorizontal + i] = navio_horizontal[i];
            }
            else
            {
                printf("Posicao invalida\n");
                return 0;
            }
        }
    }
    else
    {
        printf("Ha um navio nessa posicao\n");
    }

    // Verifica se a posição inicial do navio vertical está livre.
    if (tabuleiro[linhaVertical][colunaVertical] == 0)
    {
        // Percorre as 3 posições do navio.
        for (int i = 0; i < 3; i++)
        {
            // Verifica se o navio cabe dentro dos limites do tabuleiro.
            if (linhaVertical + 3 <= 10)
            {
                // Posiciona o navio verticalmente.
                tabuleiro[linhaVertical + i][colunaVertical] = navio_vertical[i];
            }
            else
            {
                printf("Posicao invalida\n");
                return 0;
            }
        }
    }
    else
    {
        printf("Ha um navio nessa posicao\n");
    }

    // Exibe o tabuleiro completo no console.
    for (linhas = 0; linhas < 10; linhas++)
    {
        for (colunas = 0; colunas < 10; colunas++)
        {
            printf("%d ", tabuleiro[linhas][colunas]);
        }

        // Quebra de linha ao final de cada linha da matriz.
        printf("\n");
    }



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
