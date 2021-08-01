#include <stdio.h>
#include <string.h>

typedef struct
{
    int numeroMonomios;
    int monomios[1000][2];
    char letra;
} Funcao;

void derivada(int *coeficiente, int *expoente)
{
    *coeficiente *= *expoente;
    *expoente -= 1;
}

void printFuncao(Funcao funcao)
{
    if (funcao.letra != NULL)
    {
        printf("f'(%c)=", funcao.letra);
    }
    else
    {
        printf("f'(0)=");
    }
    int isEmpty = 1;

    for (size_t i = 0; i < funcao.numeroMonomios; i++)
    {
        if (funcao.monomios[i][0] != 0 && funcao.monomios[i][1] != 0)
        {
            if (funcao.monomios[i][0] > 0)
            {
                printf("+%d%c^%d", funcao.monomios[i][0], funcao.letra, funcao.monomios[i][1]);
                isEmpty = 0;
            }
            else
            {
                printf("%d%c^%d", funcao.monomios[i][0], funcao.letra, funcao.monomios[i][1]);
                isEmpty = 0;
            }
        }
        else if (funcao.monomios[i][0] != 0 && funcao.monomios[i][1] == 0)
        {
            if (funcao.monomios[i][0] > 0)
            {
                printf("+%d", funcao.monomios[i][0]);
                isEmpty = 0;
            }
            else
            {
                printf("%d", funcao.monomios[i][0]);
                isEmpty = 0;
            }
        }
    }
    if (isEmpty == 1)
    {
        printf("0");
    }
    printf("\n");
}

int main()
{

    Funcao minhasFuncoes[1000];
    int numeroFuncoes = 0;
    while (1)
    {
        int tamanhoMonomio;

        scanf("%d", &tamanhoMonomio);

        if (tamanhoMonomio == 0)
        {
            break;
        }

        minhasFuncoes[numeroFuncoes].numeroMonomios = tamanhoMonomio;
        int coeficiente, expoente;
        char letra;

        for (size_t i = 0; i < tamanhoMonomio; i++)
        {
            scanf("%d %c %d", &coeficiente, &letra, &expoente);
            minhasFuncoes[numeroFuncoes].monomios[i][0] = coeficiente;
            minhasFuncoes[numeroFuncoes].monomios[i][1] = expoente;
            if (letra != '0')
            {
                minhasFuncoes[numeroFuncoes].letra = letra;
            }
        }

        numeroFuncoes++;
    }

    for (size_t i = 0; i < numeroFuncoes; i++)
    {
        for (size_t j = 0; j < minhasFuncoes[i].numeroMonomios; j++)
        {

            derivada(&minhasFuncoes[i].monomios[j][0], &minhasFuncoes[i].monomios[j][1]);
        }

        printFuncao(minhasFuncoes[i]);
    }

    return 0;
}
