#include <stdio.h>

int main()
{

    int numeroDeCandidatos, pontuacaoMinima, pontuacaoA, pontuacaoB, aprovadosTotal;

    aprovadosTotal = 0;

    scanf("%d", &numeroDeCandidatos);
    scanf("%d", &pontuacaoMinima);

    for (int i = 0; i < numeroDeCandidatos; i++)
    {
        scanf("%d", &pontuacaoA);
        scanf("%d", &pontuacaoB);

        if (pontuacaoA + pontuacaoB >= pontuacaoMinima && pontuacaoA != 0 && pontuacaoB != 0)
        {
            aprovadosTotal++;
        }
    }

    printf("%d", aprovadosTotal);

    return 0;
}
