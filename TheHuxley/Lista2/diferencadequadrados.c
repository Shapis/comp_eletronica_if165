#include <stdio.h>

int intSquared(int x)
{
    return x * x;
}

int main()
{
    int input;
    int breakCondition = 1;

    while (breakCondition != 0)
    {

        scanf("%d", &input);
        breakCondition = input;
        int k = (input - 1) / 2;

        if (breakCondition != 0)
        {
            printf("%d - %d\n", (k + 1) * (k + 1), k * k);
        }
    }

    return 0;
}
