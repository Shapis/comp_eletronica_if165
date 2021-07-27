#include <stdio.h>
#include <string.h>

struct contato
{
    char nomeCompleto[51];
    //char nomeCompletoBackup[51];
    char telefone[15];
    int vinculo;
};

char retorneChar(char frase[], int posicao)
{
    int temp = 0;
    for (size_t i = 0; i < strlen(frase); i++)
    {
        if ((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && frase[i] <= 122) || (frase[i] >= 48 && frase[i] <= 57))
        {
            temp++;
            if (temp == posicao)
            {
                return frase[i];
            }
        }
    }

    return 0;
}

void printContato(struct contato meuContato)
{
    printf("Nome: %s\nNumero: %s\nVinculo: ", meuContato.nomeCompleto, meuContato.telefone);
    switch (meuContato.vinculo)
    {
    case 1:
        printf("Familia\n\n");
        break;
    case 2:
        printf("Faculdade\n\n");
        break;
    case 3:
        printf("Amigo\n\n");
        break;

    default:
        break;
    }
}

int main()
{

    int numeroDeContatos;

    scanf("%d", &numeroDeContatos);

    struct contato contatos[numeroDeContatos];

    for (size_t i = 0; i < numeroDeContatos; i++)
    {
        scanf(" %[^\n]", contatos[i].nomeCompleto);

        scanf(" %[^\n]", contatos[i].telefone);

        scanf("%d", &contatos[i].vinculo);
    }

    int numeroDeBuscas = 0;
    char nomesDeBuscas[numeroDeContatos][51];
    while (1)
    {
        char nomeBusca[51];
        scanf(" %[^\n]", nomeBusca);

        if (strcmp(nomeBusca, "#") == 0)
        {
            break;
        }
        strcpy(nomesDeBuscas[numeroDeBuscas], nomeBusca);
        numeroDeBuscas++;
    }

    for (size_t i = 0; i < numeroDeBuscas; i++)
    {
        int boolWasFound = 0;
        for (size_t j = 0; j < numeroDeContatos; j++)
        {
            char *temp;

            temp = strstr(contatos[j].nomeCompleto, nomesDeBuscas[i]);

            if (temp != NULL)
            {
                boolWasFound = 1;
                printContato(contatos[j]);
            }
        }
        if (!boolWasFound)
        {
            printf("%s nao foi cadastrado\n\n", nomesDeBuscas[i]);
        }
    }

    return 0;
}
