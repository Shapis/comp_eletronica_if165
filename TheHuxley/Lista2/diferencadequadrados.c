#include <stdio.h>

int intSquared(int x)
{
    return x * x;
}

int main()
{
    int input;
    int depth = 100000;

    while (1)
    {
        int breakCondition = 0;
        scanf("%d", &input);

        if (input != 0)
        {
            for (size_t i = 0; i < depth; i++)
            {
                for (size_t j = i + 1; j < depth; j++)
                {
                    if (intSquared(j) - intSquared(i) == input)
                    {
                        printf("%d - %d\n", intSquared(j), intSquared(i));
                        breakCondition = 1;
                        break;
                    }
                }
                if (breakCondition == 1)
                {
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}
