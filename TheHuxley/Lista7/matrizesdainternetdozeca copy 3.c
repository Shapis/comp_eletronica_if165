#include <stdio.h>

int main()
{

    int n = 7;

    int x[] = {5, 4, 3, 3, 6};
    int b[] = {2, 3, 4, 5, 6};
    int c[n];

    int i, j, z = 1, k = 2;

    for (size_t i = 0; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (x[i + 1] >= b[j])
            {
                c[j] = z + 1;
                z++;
            }
        }

        for (i = 0; i < n; i++)
        {
            if (c[i] > 0)
            {
                k = c[i];
            }
        }
    }

    printf("%d", k);
    return 0;
}