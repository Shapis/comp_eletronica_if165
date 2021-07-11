#include <stdio.h>

int main()
{
    int voosLengh = 37;
    int voos[voosLengh][2];

    for (size_t i = 0; i < 37; i++)
    {
        scanf("%d %d", &voos[i][0], &voos[i][1]);
    }

    while (1)
    {
        int id, flightChoice, flightFound = 0;
        scanf("%d", &id);
        if (id == 9999)
        {
            break;
        }
        scanf("%d", &flightChoice);

        for (size_t i = 0; i < voosLengh; i++)
        {
            if (flightChoice == voos[i][0] && voos[i][1] > 0)
            {
                voos[i][1]--;
                printf("%d\n", id);
                flightFound = 1;
                break;
            }
        }
        if (flightFound == 0)
        {
            printf("INDISPONIVEL\n");
        }
    }

    return 0;
}