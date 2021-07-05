#include <stdio.h>
#include <math.h>

float CalculaMulta(int kph)
{
    if (kph <= 50)
    {
        return 0;
    }
    else if (kph <= 55)
    {
        return 230.0;
    }
    else if (kph <= 60)
    {
        return 340.0;
    }
    else
    {
        return (kph - 50.0f) * 19.28;
    }
}

int main()
{
    int velocidade;
    scanf("%d", &velocidade);

    printf("%.2f\n", CalculaMulta(velocidade));

    return 0;
}