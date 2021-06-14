#include <stdio.h>
#include <math.h>

int main()
{
    float notas[5];
    float maiorNota, menorNota, totalNotas;
    scanf("%f %f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3], &notas[4]);
    // printf("%f %f %f %f %f \n", notas[0], notas[1], notas[2], notas[3], notas[4]);

    for (int i = 0; i < 5; i++)
    {
        if (notas[i] < 5.0f || notas[i] > 10.0f)
        {
            printf("Notas em formato nao coerente!\n");
            return 0;
        }
    }

    maiorNota = notas[0];
    menorNota = notas[0];
    totalNotas = 0.0f;
    for (int i = 0; i < 5; i++)
    {

        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
        }
        if (notas[i] < menorNota)
        {
            menorNota = notas[i];
        }
        totalNotas += notas[i];
    }
    totalNotas = (totalNotas - menorNota - maiorNota);

    printf("%0.1f", totalNotas);
}