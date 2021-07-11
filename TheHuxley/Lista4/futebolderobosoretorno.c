#include <stdio.h>

int vencedor(char a)
{
    int temp = 0;

    if (a == 'A' || a == 'X' || a == '#')
    {
        temp = 0;
    }
    else
    {
        temp = 1;
    }

    return temp;
}

int main()
{
    char teams[8];
    int quartas[8];
    int semis[4];
    char finais[2];

    for (size_t i = 0; i < 8; i++)
    {
        scanf(" %c", &teams[i]);
    }

    for (size_t i = 0; i < 4; i++)
    {
        scanf("%d %d", &quartas[i * 2], &quartas[(i * 2) + 1]);
        printf("Quartas de final %d: %c x %c\n", i + 1, teams[quartas[i * 2]], teams[quartas[(i * 2) + 1]]);
    }

    for (size_t i = 0; i < 4; i++)
    {
        char result;
        scanf(" %c", &result);
        if (!vencedor(result))
        {
            semis[i] = quartas[i * 2];
        }
        else
        {
            semis[i] = quartas[1 + (i * 2)];
        }
    }

    for (size_t i = 0; i < 2; i++)
    {
        printf("Semifinal %d: %c x %c\n", i + 1, teams[semis[i * 2]], teams[semis[(i * 2) + 1]]);
    }

    for (size_t i = 0; i < 2; i++)
    {
        char result;
        scanf(" %c", &result);
        if (!vencedor(result))
        {
            finais[i] = semis[i * 2];
        }
        else
        {
            finais[i] = semis[1 + (i * 2)];
        }
    }

    for (size_t i = 0; i < 1; i++)
    {
        printf("Final: %c x %c\n", teams[finais[i * 2]], teams[finais[(i * 2) + 1]]);
    }

    for (size_t i = 0; i < 1; i++)
    {
        char result;
        scanf(" %c", &result);
        if (!vencedor(result))
        {
            printf("O vencedor da competição de futebol de robôs foi %c!\n", teams[finais[0]]);
        }
        else
        {
            printf("O vencedor da competição de futebol de robôs foi %c!\n", teams[finais[1]]);
        }
    }

    return 0;
}