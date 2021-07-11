#include <stdio.h>

int main()
{
    int sequenciaLength, consecutivos = 1, maiorConsecutivos = 0;

    scanf("%d", &sequenciaLength);

    int sequencia[sequenciaLength];

    for (size_t i = 0; i < sequenciaLength; i++)
    {

        scanf("%d", &sequencia[i]);
    }

    for (size_t i = 0; i < sequenciaLength - 1; i++)
    {
        if (sequencia[i] == sequencia[i + 1])
        {
            consecutivos++;
            if (maiorConsecutivos < consecutivos)
            {
                maiorConsecutivos = consecutivos;
            }
        }
        else
        {

            consecutivos = 1;
        }
    }

    printf("%d", maiorConsecutivos);

    return 0;
}