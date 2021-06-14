#include <stdio.h>

int main()
{
    float galaoGasolinaDolares, litroGasolinaReaisBR, umDollarParaRealCotacao, litroGasolinaReaisUS;

    scanf("%f %f %f", &galaoGasolinaDolares, &litroGasolinaReaisBR, &umDollarParaRealCotacao);

    litroGasolinaReaisUS = (galaoGasolinaDolares * umDollarParaRealCotacao) / 3.8f;

    printf("Gasolina EUA: R$ %0.2f\nGasolina Brasil: R$ %0.2f\n", litroGasolinaReaisUS, litroGasolinaReaisBR);

    if (litroGasolinaReaisUS > litroGasolinaReaisBR)
    {
        printf("Mais barata no Brasil\n");
    }
    else if (litroGasolinaReaisUS < litroGasolinaReaisBR)
    {
        printf("Mais barata nos EUA\n");
    }
    else
    {
        printf("Igual\n");
    }

    return 0;
}