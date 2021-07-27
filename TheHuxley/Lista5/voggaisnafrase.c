#include <stdio.h>
#include <string.h>

int main()
{
    char frase[101];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    scanf("%[^\n]s", frase);

    for (size_t j = 0; j < strlen(frase); j++)
    {

        if (frase[j] == 'a' || frase[j] == 'A')
        {
            a++;
        }
        else if (frase[j] == 'e' || frase[j] == 'E')
        {
            e++;
        }
        else if (frase[j] == 'i' || frase[j] == 'I')
        {
            i++;
        }
        else if (frase[j] == 'o' || frase[j] == 'O')
        {
            o++;
        }
        else if (frase[j] == 'u' || frase[j] == 'U')
        {
            u++;
        }
    }

    printf("a %d\n", a);
    printf("e %d\n", e);
    printf("i %d\n", i);
    printf("o %d\n", o);
    printf("u %d\n", u);

    printf("%.2f%%\n", (((a + e + i + o + u)) / (float)strlen(frase) * 100));

    return 0;
}