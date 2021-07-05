#include <stdio.h>
#include <math.h>

// a funcao check_prime foi achada em: https://www.programmingsimplified.com/c/source-code/c-program-for-prime-number Junho 19 2021;

int check_prime(int a)
{
    int c;

    for (c = 2; c <= a - 1; c++)
    {
        if (a % c == 0)
            return 0;
    }
    if (c == a)
        return 1;
}

int main()
{
    int input, maiorPrimo = 0;

    while (input != 404)
    {
        scanf("%d", &input);

        if (input > maiorPrimo && check_prime(input) && input != 1)
        {
            maiorPrimo = input;
        }
    }

    if (maiorPrimo == 0)
    {
        printf("SEM PRIMOS");
    }
    else
    {
        printf("%d", maiorPrimo);
    }
}