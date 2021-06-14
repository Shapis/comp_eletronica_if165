#include <stdio.h>

int solveProblem(int a, int b)
{
    int movimentos = 0;

    // Primeiro por o maior numero dos 2 na variavel a. Caso ambos sejam iguais, ja retornar o numero de movimentos como zero.
    if (a == b)
    {
        return 0;
    }
    else if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // Enquanto (a-b) for maior que 3, continue adicionando 3 em b.
    while ((a - b) >= 3 && (a - b) != 4)
    {
        b += 3;
        movimentos++;
    }

    // Crie uma variavel nova para poder usar no switch, ja que switch nao aceita condicoes nos casos.
    int resto = a - b;

    // Se o resto for 0, nao precisamos fazer nada, pois os 2 numeros sao iguais.
    // Se o resto for 1, adicionamos 3 ao numero menor e 2 ao maior, logo, 2 movimentos extra.
    // Se o resto for 2, adicionamos 2 ao numero menor, logo, 1 movimento extra.
    // Se o resto for 4, adicionamos 2 ao numero menor, duas vezes.
    switch (resto)
    {
    case 0:
        /* code */
        break;
    case 1:
        movimentos += 2;
        break;
    case 2:
        movimentos++;
        break;
    case 4:
        movimentos += 2;
        break;

    default:
        break;
    }

    return movimentos;
}

int main()
{
    int inputA, inputB;

    scanf("%d %d", &inputA, &inputB);
    //printf("%d %d", inputA, inputB);

    printf("%d\n", solveProblem(inputA, inputB));

    return 0;
}
