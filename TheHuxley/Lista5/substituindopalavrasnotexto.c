#include <stdio.h>
#include <string.h>

// https://www.geeksforgeeks.org/c-program-replace-word-text-another-given-word/ funcao achada nesse link em julho 27 2021
char *replaceWord(const char *s, const char *oldW,
                  const char *newW)
{
    char *result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);

    // Counting the number of times old word
    // occur in the string
    for (i = 0; s[i] != '\0'; i++)
    {
        if (strstr(&s[i], oldW) == &s[i])
        {
            cnt++;

            // Jumping to index after the old word.
            i += oldWlen - 1;
        }
    }

    // Making new string of enough length
    result = (char *)malloc(i + cnt * (newWlen - oldWlen) + 1);

    i = 0;
    while (*s)
    {
        // compare the substring with the result
        if (strstr(s, oldW) == s)
        {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }

    result[i] = '\0';
    return result;
}

int main()
{
    char frase[501];
    char palavraAntiga[21];
    char palavraNova[21];

    scanf(" %[^\n]", frase);

    scanf(" %[^\n]", palavraAntiga);

    scanf(" %[^\n]", palavraNova);

    char *resultado = NULL;

    resultado = replaceWord(frase, palavraAntiga, palavraNova);

    printf("%s\n", resultado);

    return 0;
}