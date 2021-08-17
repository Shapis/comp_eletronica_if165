#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arq1, *arq2;
    char str[256], aux[] = "nomes2.txt";
    arq1 = fopen("nomes.txt", "r");
    if (arq1 != NULL)
    {
        arq2 = fopen(aux, "w+");
        if (arq2 != NULL)
        {
            fscanf(arq1, "%s", str);
            int count = (strlen(str)) - 3;
            printf("%d", count);
            while (!feof(arq1))
            {
                strcpy(str, "\0");
                fgets(str, 256, arq1);
                if (!feof(arq2))
                {
                    count++;
                }
                if (count != (strlen(str)))
                {
                    fprintf(arq2, "%s", str);
                }
            }
        }
    }
    fclose(arq1);
    fclose(arq2);
    return 0;
}