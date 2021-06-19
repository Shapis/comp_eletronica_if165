#include <stdio.h>
#include <math.h>

double equacao_um(int n)
{
    double temp = 0;

    for (size_t i = 0; i < n; i++)
    {
        temp += pow(-1.0, i) / ((2.0 * i) + 1.0);
    }

    return temp;
}

double equacao_dois(int n)
{
    double temp = 0;

    for (size_t i = 0; i < n; i++)
    {
        temp += 2.0 / ((4.0 * i + 1.0) * (4.0 * i + 3.0));
    }
    return temp;
}

double equacao_tres(int n)
{
    double temp = 3.0;
    int denominadores[3] = {2, 3, 4};

    for (size_t i = 0; i < n - 1; i++)
    {
        temp += (4.0 * pow(-1, i)) / (denominadores[0] * denominadores[1] * denominadores[2]);

        denominadores[0] += 2.0;
        denominadores[1] += 2.0;
        denominadores[2] += 2.0;
    }

    return temp;
}

int main()
{
    int input;

    scanf("%d", &input);

    printf("%.6lf - %.6lf\n", equacao_um(input) * 4.0, (equacao_um(input) * 4.0) / M_PI);
    printf("%.6lf - %.6lf\n", equacao_dois(input) * 4.0, (equacao_dois(input) * 4.0) / M_PI);
    printf("%.6lf - %.6lf\n", equacao_tres(input), equacao_tres(input) / M_PI);

    return 0;
}
