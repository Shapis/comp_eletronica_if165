#include <stdio.h>
#include <string.h>

void abc(char *a, char *b, char *c)
{
    int e = 100;
    int d = 101;
    *b = d;
    *c = e;
    *a = *c;
}

void teste(char *str)
{

    int n;

    char *b = str;

    while (*str != '\0')
    {
        for (size_t j = 0; j < sizeof(str); j++)
        {
            if ((strlen(str)) > j + 1)
            {
                abc(&b[sizeof(str) - 1], &b[j + 2], &b[j + 1]);
            }
            if (b[j] == b[j + 1])
            {
                b[j]--;
            }
        }
        str++;
    }

    printf("%s", b);
}

main()
{

    char str[] = "adfghowxy";

    teste(str);
}