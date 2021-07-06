#include <stdio.h>

// Essa funcao retorna se o caracter eh uma vogal ou nao.
int vowelOrConsonant(char ch)
{
    int upperCasevowel;

    upperCasevowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (upperCasevowel)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    char lista[3];
    int hasVowels = 0;
    int n = sizeof(lista) / sizeof(lista[0]);

    scanf("%c %c %c", &lista[0], &lista[1], &lista[2]);

    for (int i = 0; i < 3; i++)
    {
        if (lista[i] < 65 || lista[i] > 90)
        {
            printf("Etiquetas erradas!\n");
            return 0;
        }
        if (!hasVowels)
        {
            hasVowels = vowelOrConsonant(lista[i]);
        }
    }

    int temp = 0;

    //Calculate length of array arr
    int length = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (lista[i] > lista[j])
            {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    int distanciaDasLetras;

    if (lista[2] - lista[1] == lista[1] - lista[0] && lista[2] - lista[1] > 0 && lista[2] - lista[1] < 4)
    {
        distanciaDasLetras = lista[2] - lista[1];
    }
    else
    {
        printf("Só umas letras ai...\n");
        return 0;
    }

    switch (distanciaDasLetras)
    {
    case 1:
        if (!hasVowels)
        {
            printf("Sequência perfeita.\n");
            return 0;
        }
        else
        {
            printf("Sequência quase perfeita.\n");
            return 0;
        }
        break;
    case 2:
        if (!hasVowels)
        {
            printf("Bissequência perfeita.\n");
            return 0;
        }
        else
        {
            printf("Bissequência quase perfeita.\n");
            return 0;
        }
        break;
    case 3:
        if (!hasVowels)
        {
            printf("Trissequência perfeita.\n");
            return 0;
        }
        else
        {
            printf("Trissequência quase perfeita.\n");
            return 0;
        }
        break;

    default:
        break;
    }
}