#include <stdio.h>

// Achado em https://www.geeksforgeeks.org/c-program-multiply-two-matrices/ em primeiro de agosto 2021
void rotate(int tamanho, int matriz[][tamanho], int sentido)
{
    int temp[tamanho][tamanho];

    if (sentido > 0)
    {

        while (sentido != 0)
        {
            for (size_t i = 0; i < tamanho; i++)
            {
                for (size_t j = 0; j < tamanho; j++)
                {
                    temp[j][tamanho - 1 - i] = matriz[i][j];
                }
            }

            for (size_t i = 0; i < tamanho; i++)
            {
                for (size_t j = 0; j < tamanho; j++)
                {
                    matriz[i][j] = temp[i][j];
                }
            }
            sentido--;
        }
    }
    else if (sentido < 0)
    {
        while (sentido != 0)
        {
            for (size_t i = 0; i < tamanho; i++)
            {
                for (size_t j = 0; j < tamanho; j++)
                {
                    temp[tamanho - 1 - j][i] = matriz[i][j];
                }
            }

            for (size_t i = 0; i < tamanho; i++)
            {
                for (size_t j = 0; j < tamanho; j++)
                {
                    matriz[i][j] = temp[i][j];
                }
            }
            sentido++;
        }
    }
}

int main()
{
    int linhas, colunas, rotacoes;

    scanf("%d %d %d", &linhas, &colunas, &rotacoes);

    int matriz[linhas][colunas];

    for (size_t i = 0; i < linhas; i++)
    {
        for (size_t j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    rotate(linhas, matriz, rotacoes);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            printf("%d", matriz[i][j]);
            if (j < linhas - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}