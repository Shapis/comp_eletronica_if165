#include <stdio.h>

int main()
{

    int n1 = 35;
    int n2 = 65;

    int temp = n1;

    n1 = n2 + 2;
    n2 = temp + 1;

    printf("%d %d", n1, n2);
    return 0;
}
