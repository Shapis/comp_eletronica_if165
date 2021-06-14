#include <stdio.h>

int main()
{
    int Cv, Ce, Cs, Fv, Fe, Fs;
    int CtotalPontos, FtotalPontos;

    //printf("Digite o Cv Ce Cs Fv Fe Fs, separados por um espaco cada\n");
    scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);

    //printf("%d %d %d %d %d %d\n", Cv, Ce, Cs, Fv, Fe, Fs);

    if (Cv < 0 || Ce < 0 || Fv < 0 || Fe < 0 || Cv > 100 || Ce > 100 || Fv > 100 || Fe > 100 || Cs < -1000 || Fs < -1000 || Cs > 1000 || Fs > 1000)
    {
        printf("Dados nao coerentes! \nEh necessario que os dados estejam no seguinte formato:\n0 <= Cv, Ce, Fv, Fe <= 100\n-1000 <= Cs, Fs <= 1000\nConsidere executar o programa novamente com dados coerentes.\n");
        return 0;
    }

    CtotalPontos = (Cv * 3) + Ce;
    FtotalPontos = (Fv * 3) + Fe;

    if (CtotalPontos > FtotalPontos)
    {
        printf("C");
    }
    else if (FtotalPontos > CtotalPontos)
    {
        printf("F");
    }
    else
    {
        if (Cs > Fs)
        {
            printf("C");
        }
        else if (Fs > Cs)
        {
            printf("F");
        }
        else
        {
            printf("=");
        }
    }

    return 0;
}