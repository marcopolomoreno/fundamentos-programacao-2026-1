#include <stdio.h>

int main()
{
    int N = 8;
    int numero[N];
    int quantidade = 0;
    
    printf("Digite os %d números: ", N);
    for (int k=0; k<=N-1; k++)
        scanf("%d", &numero[k]);
    
    for (int k=0; k<=N-1; k++)
        if (numero[k] > 10)
            quantidade++;
    
    printf("Quantidade de números maiores do que 10: %d\n\n", quantidade);
}
