#include <stdio.h>

int G(int *x, int y, int z)
{
    if (y >= z)
        return 0;
    else
    {
        if (x[y] >= 8)

            return (x[y] + G(x, y - 1, z + 2));

        else if (x[y] >= 4)
        {
            x[y] = x[y] + 7;
            return (G(x, y + 1, z + 1));
        }
        else

            return 0;
    }
}

int main()
{

    int m[] = {4, 5, 11, 4, 21, 7, 20, 5, 16, 9, 10};
    int a = 2;
    int b = 25;

    int result = G(m, a, b);
    printf("%d", result);
    return 0;
}
