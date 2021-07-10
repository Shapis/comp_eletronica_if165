#include <stdio.h>

int main()
{
    int sequenciaLength;

    scanf("%d", &sequenciaLength);

    int sequencia[sequenciaLength], sequenciaOriginal[sequenciaLength];

    for (size_t i = 0; i < sequenciaLength; i++)
    {

        scanf("%d", &sequencia[i]);
        sequenciaOriginal[i] = sequencia[i];
    }

    for (int i = 0; i < sequenciaLength; i++)
    {
        for (int j = i + 1; j < sequenciaLength; j++)
        {
            if (sequencia[i] > sequencia[j])
            {
                int temp = sequencia[i];
                sequencia[i] = sequencia[j];
                sequencia[j] = temp;
            }
        }
    }

    int results[sequenciaLength * 2];
    int matches = 0;

    for (size_t i = 0; i < sequenciaLength; i++)
    {
        if (sequencia[i] == sequenciaOriginal[i])
        {
            matches++;
        }
    }

    printf("%d\n", matches);

    for (size_t i = 0; i < sequenciaLength; i++)
    {
        if (sequencia[i] == sequenciaOriginal[i])
        {
            printf("%d %d\n", sequencia[i], i + 1);
        }
    }

    return 0;
}