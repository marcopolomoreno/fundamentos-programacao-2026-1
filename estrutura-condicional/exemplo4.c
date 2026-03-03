#include <math.h>
#include<stdio.h>

int main()
{
    int a, b, c, d, n = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > 0)
        n++;

    if (b > 0)
        n = n + 1;

    if (c > 0)
        n += 1;

    if (d > 0)
        n += 1;

    printf("\nA quantidade de inteiros positivos é: %d", n);
}
