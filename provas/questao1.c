#include <stdio.h>
#include <string.h>

void func2(char *str)
{
    int i, j;
    char prev = '\0';
    for (i = j = 0; str[i] != '\0'; i++)
    {
        if (prev == str[i - 1])
        {
            str[j++] = str[i + 2];
            prev = str[i > j ? i++ : j];
        }
        str[j] = '\0';
        printf("%s", str);
    }
}

void func1(char *str)
{
    int i = 0;
    char str1 = 'c', str2 = 'a';
    while (i < (strlen(str)))
    {
        if (str[i + 1] == str1)
        {
            str[i] = str2;
        }
        i++;
    }

    printf("%s\n", str);
    func2(str);
}

int main()
{

    char str[15] = "avaliacao";

    func1(str);
    return 0;
}