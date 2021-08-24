#include <stdio.h>

int main()
{

    int i, j, k = 2, mat[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat[i][j] = k;
            k++;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 1; j < 3; j++)
        {

            if ((i % j) == 0)
            {
                printf("%d; ", mat[j][i - 1]);
            }
        }
    }
}
