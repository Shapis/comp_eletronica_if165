#include <stdio.h>

void rotate(int linhas, int colunas, int matriz[linhas][colunas], int sentido)
{
    int temp[colunas][linhas];

    if (sentido == 0)
    {
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("%d", matriz[i][j]);
                if (j < colunas - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

        return;
    }

    if (sentido > 0)
    {

        for (size_t i = 0; i < linhas; i++)
        {
            for (size_t j = 0; j < colunas; j++)
            {
                temp[j][linhas - 1 - i] = matriz[i][j];
            }
        }

        sentido--;
        if (sentido != 0)
        {
            rotate(colunas, linhas, temp, sentido);
        }
    }
    else if (sentido < 0)
    {
        for (size_t i = 0; i < linhas; i++)
        {
            for (size_t j = 0; j < colunas; j++)
            {
                temp[colunas - 1 - j][i] = matriz[i][j];
            }
        }

        sentido++;
        if (sentido != 0)
        {
            rotate(colunas, linhas, temp, sentido);
        }
    }
    if (sentido == 0)
    {
        for (int i = 0; i < colunas; i++)
        {
            for (int j = 0; j < linhas; j++)
            {
                printf("%d", temp[i][j]);
                if (j < linhas - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
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

    rotate(linhas, colunas, matriz, rotacoes);

    return 0;
}