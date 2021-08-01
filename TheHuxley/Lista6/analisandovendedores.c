#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[51];
    char gerente[51];
    float vendas;
    int unidade;
} Vendedor;

void buscarMelhorPior(Vendedor vetor[], int tamanho, Vendedor melhorPior[])
{
    melhorPior[0] = vetor[0];
    melhorPior[1] = vetor[0];

    for (size_t i = 1; i < tamanho; i++)
    {
        if (melhorPior[0].vendas < vetor[i].vendas)
        {
            melhorPior[0] = vetor[i];
        }

        if (melhorPior[1].vendas > vetor[i].vendas)
        {
            melhorPior[1] = vetor[i];
        }
    }
}

Vendedor buscarVendedor(char nome[], Vendedor vetor[], int tamanho)
{
}

void printVendedor(Vendedor vendedor)
{
    printf("Nome: %s\nVendas: R$ %.2f\nUnidade: %d\nGerente: %s\n\n", vendedor.nome, vendedor.vendas, vendedor.unidade, vendedor.gerente);
}

int main()
{

    int numeroDeVendedores, numeroDeBuscas = 0;
    char nomes[10][51];

    scanf("%d", &numeroDeVendedores);

    Vendedor vendedores[numeroDeVendedores], melhorPior[2];

    for (size_t i = 0; i < numeroDeVendedores; i++)
    {
        scanf(" %[^\n]", vendedores[i].nome);

        scanf("%f", &vendedores[i].vendas);

        scanf("%d", &vendedores[i].unidade);

        scanf(" %[^\n]", vendedores[i].gerente);
    }

    //printVendedor(vendedores[0]);

    // for

    while (1)
    {
        char temp[51];
        scanf(" %[^\n]", temp);

        if (strcmp(temp, "ok") == 0)
        {
            break;
        }
        strcpy(nomes[numeroDeBuscas], temp);
        numeroDeBuscas++;
        // printf("numero de buscas: %d\n", numeroDeBuscas);
    }

    buscarMelhorPior(vendedores, numeroDeVendedores, melhorPior);

    printf("Melhor vendedor: %s\nVendas: R$ %.2f\nUnidade: %d\nGerente: %s\n\n", melhorPior[0].nome, melhorPior[0].vendas, melhorPior[0].unidade, melhorPior[0].gerente);

    printf("Pior vendedor: %s\nVendas: R$ %.2f\nUnidade: %d\nGerente: %s\n\n", melhorPior[1].nome, melhorPior[1].vendas, melhorPior[1].unidade, melhorPior[1].gerente);

    for (size_t i = 0; i < numeroDeBuscas; i++)
    {
        int wasFound = 0;
        for (size_t j = 0; j < numeroDeVendedores; j++)
        {
            if (strstr(vendedores[j].nome, nomes[i]) != NULL)
            {
                printVendedor((vendedores[j]));
                wasFound = 1;
                break;
            }
        }
        if (wasFound == 0)
        {
            printf("NAO ENCONTRADO\n\n");
        }
    }

    return 0;
}
