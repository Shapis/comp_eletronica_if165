#include <stdio.h>

int main()
{

    int m[5][5] = {5, 8, 4, 3, 0, 8, 6, 5, 7, 2, 12, 15, 10, 9, 8, 11, 12, 18, 5, 6, 2, 8, 1, 5, 10};

    printf("%d\n", m[0][24]);
    printf("%d\n", m[4][4]);

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            m[i][j] = m[i][(j >= 2) ? j : j + 1] + m[i + j][j];
        }
    }

    return 0;
}