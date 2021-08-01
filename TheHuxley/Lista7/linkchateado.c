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
    char nome[106];

    scanf("%s", nome);

    toUpper(nome);

    if (strstr(nome, "ZELDA") != NULL)
    {
        printf("Link Bolado");
    }
    else
    {
        printf("Link Tranquilo");
    }

    return 0;
}