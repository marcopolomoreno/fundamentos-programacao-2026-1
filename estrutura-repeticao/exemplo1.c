#include<stdio.h>
#include<math.h>

int main()
{
    float soma = 0;
    int k;
    int n;

    printf("Digite o valor de n = ");
    scanf("%d", &n);

    for(k = 0; k <= n; k++)
    {
        soma = soma + 1.0/pow(2, k);
    }

    printf("Soma = %.16f\n", soma);
}
