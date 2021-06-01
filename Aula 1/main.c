#include <stdio.h>

int main()
{
    int hours = 0;
    printf("Hours: ");
    scanf("%d", &hours);

    float rate = 0;
    printf("Rate: ");
    scanf("%f", &rate);

    float pay = hours * rate;
    printf("%f\n", pay);

    return 0;
}