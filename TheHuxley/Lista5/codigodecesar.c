#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char palavra[])
{
    for (size_t i = 0; i < strlen(palavra); i++)
    {
        palavra[i] = tolower(palavra[i]);
    }
}

void criptografar(char palavra[], int fator)
{
    for (size_t i = 0; i < strlen(palavra); i++)
    {
        palavra[i] = (palavra[i] + fator);
    }
}

int main()
{
    int fatorK;
    char sequencia[31];

    scanf("%s", sequencia);
    scanf("%d", &fatorK);

    criptografar(sequencia, fatorK);

    toLower(sequencia);

    printf("%s\n", sequencia);

    return 0;
}