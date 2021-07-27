#include <stdio.h>
#include <string.h>

struct funcionario
{
    char nomeCompleto[51];
    char nomeCompletoBackup[51];
    char dataNascimento[11];
    char cidadeNatal[51];
    int idade;
    char senha[16];
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

int main()
{
    struct funcionario meusFuncionarios[5];
    int numeroDeFuncionarios = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf(" %[^\n]", meusFuncionarios[i].nomeCompleto);

        if (strcmp(meusFuncionarios[i].nomeCompleto, "SAIR") == 0)
        {
            break;
        }

        scanf(" %[^\n]", meusFuncionarios[i].dataNascimento);

        scanf(" %[^\n]", meusFuncionarios[i].cidadeNatal);

        scanf("%d", &meusFuncionarios[i].idade);

        strcpy(meusFuncionarios[i].nomeCompletoBackup, meusFuncionarios[i].nomeCompleto);

        numeroDeFuncionarios++;
    }

    for (size_t i = 0; i < numeroDeFuncionarios; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            meusFuncionarios[i].senha[(j * 3)] = meusFuncionarios[i].nomeCompleto[j];

            meusFuncionarios[i].senha[(j * 3) + 1] = retorneChar(meusFuncionarios[i].dataNascimento, j + 1);

            meusFuncionarios[i].senha[(j * 3) + 2] = retorneChar(meusFuncionarios[i].cidadeNatal, j + 1);
        }
        char minhaIdade[2];
        sprintf(minhaIdade, "%d", meusFuncionarios[i].idade);
        meusFuncionarios[i].senha[12] = meusFuncionarios[i].nomeCompleto[4];
        meusFuncionarios[i].senha[13] = minhaIdade[0];
        meusFuncionarios[i].senha[14] = minhaIdade[1];
    }

    for (size_t i = 0; i < numeroDeFuncionarios; i++)
    {
        printf("Nome: %s\nData de Nascimento: %s\nCidade Natal: %s\nIdade: %d anos\nSenha: %s\n\n", meusFuncionarios[i].nomeCompletoBackup, meusFuncionarios[i].dataNascimento, meusFuncionarios[i].cidadeNatal, meusFuncionarios[i].idade, meusFuncionarios[i].senha);
    }

    return 0;
}
