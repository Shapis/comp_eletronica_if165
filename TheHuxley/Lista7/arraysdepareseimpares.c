#include <stdio.h>
#include <string.h>

void printArray(int array[], int par, int arraySize)
{
    char texto[6];

    if (par == 1)
    {
        strcpy(texto, "par");
    }
    else
    {
        strcpy(texto, "impar");
    }

    for (size_t i = 0; i < arraySize; i++)
    {
        printf("%s[%d] = %d\n", texto, i, array[i]);
    }
}

int main()
{
    int impares[5], pares[5];

    int parAtual = 0, imparAtual = 0;
    for (size_t i = 0; i < 15; i++)
    {
        int temp = 0;
        scanf("%d", &temp);

        if (temp % 2 == 0)
        {
            pares[parAtual] = temp;
            parAtual++;
        }
        else
        {
            impares[imparAtual] = temp;
            imparAtual++;
        }

        if (imparAtual == 5)
        {
            printArray(impares, 0, imparAtual);
            imparAtual = 0;
        }
        if (parAtual == 5)
        {
            printArray(pares, 1, parAtual);
            parAtual = 0;
        }
    }

    printArray(impares, 0, imparAtual);
    printArray(pares, 1, parAtual);

    return 0;
}
