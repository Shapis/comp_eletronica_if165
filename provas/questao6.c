#include <stdio.h>
#include <string.h>

int G(int M[5][5], int n, int *k)
{

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (M[i][j] > *k)
            {
                *k = M[i][j];
            }
        }
    }
    return *k;
}

main()
{
    int max = 5;

    int matrix[5][5] = {32, 12, 54, 14, 23, 14, 7, 6, 0, 11, 3, 12, 28, 12, 10, 18, 58, 10, 13, 17, 25, 19, 16, 21, 32};

    int *k = &matrix[0][0];

    printf("%d", G(matrix, (sizeof(k) / sizeof(matrix[0])), &matrix[0][24]));

    return 0;
}