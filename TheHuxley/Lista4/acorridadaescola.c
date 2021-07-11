#include <stdio.h>

int main()
{
    int competidores, voltas, melhorTempo = 0, ganhador = 0;

    scanf("%d %d", &competidores, &voltas);

    int sequencia[competidores][voltas];

    for (size_t i = 0; i < competidores; i++)
    {

        for (size_t j = 0; j < voltas; j++)
        {
            scanf("%d", &sequencia[i][j]);
        }
    }

    for (size_t i = 0; i < voltas; i++)
    {
        melhorTempo += sequencia[0][i];
        ganhador = 0;
    }

    for (size_t i = 1; i < competidores; i++)
    {
        int temp = 0;
        for (size_t j = 0; j < voltas; j++)
        {
            temp += sequencia[i][j];
        }

        if (melhorTempo > temp)
        {
            melhorTempo = temp;
            ganhador = i;
        }
    }

    printf("%d", ganhador + 1);

    return 0;
}