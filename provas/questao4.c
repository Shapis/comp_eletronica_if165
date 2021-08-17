#include <stdio.h>
#include <string.h>

typedef struct ABC
{
    float x;
    float y;
    char n[10];
} abc;

void teste(abc *a, abc *b)
{
    char c[10] = "Neo";
    a->x = sizeof(a->x + a->y);
    b->y = (a->x + b->x);
    strcat(a->n, c);
    strcpy(b->n, a->n);
}

main()
{
    abc a = {12.5, 10.5, "Guga"};
    abc b = {10.0, 12.5, "Lais"};

    teste(&a, &b);

    printf("%f %f %s", a.x, b.y, a.n);
    return 0;
}