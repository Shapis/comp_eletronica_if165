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

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {

        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{
    char lista[3];
    int n = sizeof(lista) / sizeof(lista[0]);
    int bool_temVogais = 0;

    scanf("%c %c %c", &lista[0], &lista[1], &lista[2]);

    for (int i = 0; i < 3; i++)
    {
        if (lista[i] < 65 || lista[i] > 90)
        {
            printf("Etiquetas erradas!\n");
            return 0;
        }
        if (!bool_temVogais)
        {
            bool_temVogais = vowelOrConsonant(lista[i]);
        }
    }

    selectionSort(lista, n);

    int distanciaDasLetras;

    for (int i = 0; i < 3; i++)
    {
        int temp = 0;
    }

    if (lista[0] != lista[1] && lista[1] != lista[2] && lista[0] != lista[2] && lista[2] - lista[1] == lista[1] - lista[0] && (lista[2] - lista[1] > 0) && lista[2] - lista[1] < 4)
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
        if (!bool_temVogais)
        {
            printf("Sequência perfeita.\n");
        }
        else
        {
            printf("Sequência quase perfeita.\n");
        }
        break;
    case 2:
        if (!bool_temVogais)
        {
            printf("Bissequência perfeita.\n");
        }
        else
        {
            printf("Bissequência quase perfeita.\n");
        }
        break;
    case 3:
        if (!bool_temVogais)
        {
            printf("Trissequência perfeita.\n");
        }
        else
        {
            printf("Trissequência quase perfeita.\n");
        }
        break;

    default:
        break;
    }
}