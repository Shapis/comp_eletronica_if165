#include <stdio.h>

int main()
{

    int sequenciaLength, numeroProcurado;
    int achadosQuantasVezes = 0;

    printf("Digite a quantidade de numeros da sequencia:\nDigite o numero procurado:\n");
    scanf("%d %d", &sequenciaLength, &numeroProcurado);

    int sequencia[sequenciaLength];

    for (size_t i = 0; i < sequenciaLength; i++)
    {

        scanf("%d", &sequencia[i]);
    }

    for (size_t i = 0; i < sequenciaLength; i++)
    {
        if (sequencia[i] == numeroProcurado)
        {
            achadosQuantasVezes++;
        }
    }

    printf("O numero %d apareceu na sequencia %d vezes.", numeroProcurado, achadosQuantasVezes);

    return 0;
}