#include <stdio.h>

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

    int intervaloInferior, intervaloSuperior, primosZeca;
    int meusPrimos[5];

    meusPrimos[0] = 0;
    meusPrimos[1] = 0;
    meusPrimos[2] = 0;

    primosZeca = 0;

    scanf("%d %d", &intervaloInferior, &intervaloSuperior);

    for (int i = 3; i < intervaloSuperior + 1000; i++)
    {

        if (check_prime(i) == 1)
        {
            meusPrimos[0] = meusPrimos[1];
            meusPrimos[1] = meusPrimos[2];
            meusPrimos[2] = i;

            if (meusPrimos[0] != 0 && meusPrimos[1] != 0 && meusPrimos[2] != 0)
            {
                if (((meusPrimos[0] + meusPrimos[2]) / 2 == meusPrimos[1]))
                {
                    if (meusPrimos[1] >= intervaloInferior && meusPrimos[1] <= intervaloSuperior)
                    {
                        //printf("%d\n", meusPrimos[1]);
                        primosZeca++;
                    }
                }
            }
        }
    }

    printf("%d", primosZeca);

    return 0;
}
