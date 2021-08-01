#include <stdio.h>
#define N 3

// Achado em https://www.geeksforgeeks.org/c-program-multiply-two-matrices/ em primeiro de agosto 2021
void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

int main()
{

    int matriz1[N][N];
    int matriz2[N][N];
    int resultado[N][N];

    for (size_t i = 0; i < N; i++)
    {
        scanf("%d %d %d", &matriz1[i][0], &matriz1[i][1], &matriz1[i][2]);
    }

    for (size_t i = 0; i < N; i++)
    {
        scanf("%d %d %d", &matriz2[i][0], &matriz2[i][1], &matriz2[i][2]);
    }

    multiply(matriz1, matriz2, resultado);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", resultado[i][j]);
            if (j < 2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}