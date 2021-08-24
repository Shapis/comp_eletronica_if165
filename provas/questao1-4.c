#include <stdio.h>

int F(int M[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + ((r + l) / 2);
        if (M[m] == x)
        {
            return m - 2;
        }
        if (M[m] < x)
        {
            return (l = m + 1);
        }
        else
        {
            return (r = m - 1);
        }
    }

    return -1;
}

int main()
{

    int M[] = {3, 5, 7, 15, 27, 42, 80, 120, 450};

    int l = 3, r = 40, x = 70;

    int result = F(M, l, r, x);

    printf("%d", result);
}
