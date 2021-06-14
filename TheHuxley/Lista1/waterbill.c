#include <stdio.h>

int main()
{
    int aguaConsumida, valorTotal;

    valorTotal = 7;

    scanf("%d", &aguaConsumida);

    for (aguaConsumida; aguaConsumida > 10; aguaConsumida--)
    {

        if (aguaConsumida > 100)
        {
            valorTotal += 5;
        }
        else if (aguaConsumida > 30)
        {
            valorTotal += 2;
        }
        else if (aguaConsumida > 10)
        {
            valorTotal += 1;
        }
    }

    printf("%d", valorTotal);

    return 0;
}