#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpper(char palavra[])
{
    for (size_t i = 0; i < strlen(palavra); i++)
    {
        palavra[i] = toupper(palavra[i]);
    }
}

int main()
{
    int sequenciaLength;

    scanf("%d", &sequenciaLength);

    sequenciaLength *= 2;

    char sequencia[sequenciaLength][8];

    for (size_t i = 0; i < sequenciaLength; i++)
    {
        scanf("%s", sequencia[i]);
    }

    for (size_t i = 0; i < sequenciaLength; i++)
    {
        toUpper(sequencia[i]);
    }

    int resultado = 0;

    for (size_t i = 0; i < (sequenciaLength / 2); i++)
    {
        if (strcmp(sequencia[i * 2], "PAPEL") == 0)
        {
            if (strcmp(sequencia[(i * 2) + 1], "TESOURA") == 0)
            {
                resultado++;
            }
            else if (strcmp(sequencia[(i * 2) + 1], "PEDRA") == 0)
            {
                resultado--;
            }
        }
        else if (strcmp(sequencia[i * 2], "TESOURA") == 0)
        {
            if (strcmp(sequencia[(i * 2) + 1], "PAPEL") == 0)
            {
                resultado--;
            }
            else if (strcmp(sequencia[(i * 2) + 1], "PEDRA") == 0)
            {
                resultado++;
            }
        }
        else if (strcmp(sequencia[i * 2], "PEDRA") == 0)
        {
            if (strcmp(sequencia[(i * 2) + 1], "PAPEL") == 0)
            {
                resultado++;
            }
            else if (strcmp(sequencia[(i * 2) + 1], "TESOURA") == 0)
            {
                resultado--;
            }
        }
    }

    if (resultado > 0)
    {
        printf("KYARA VAI LAVAR A LOUÇA!");
    }
    else if (resultado < 0)
    {
        printf("VINICIUS VAI LAVAR A LOUÇA!");
    }
    else if (resultado == 0)
    {
        printf("OS DOIS VÃO LAVAR A LOUÇA JUNTOS!");
    }

    return 0;
}