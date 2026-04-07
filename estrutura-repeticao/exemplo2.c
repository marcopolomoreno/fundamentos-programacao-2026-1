#include <stdio.h>
#include <math.h>

int main()
{
    float soma = 0;
    int k = 0, n;
    
    printf("Digite o número de termos: ");
    scanf("%d", &n);
    
    while (k<=n)
    {
        soma = soma + 1.0/pow(2, k);
        k++;
    }
    
    printf("\n%f\n", soma);
}
