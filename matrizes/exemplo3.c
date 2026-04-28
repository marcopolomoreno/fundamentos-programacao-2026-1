#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, k, p, menor = 10, maior = 0;
    
    printf("Digite N = ");
    scanf("%d", &N);
    
    int M[N][N];
    
    for (k=0; k<=N-1; k++)
        for (p=0; p<=N-1; p++)
            M[k][p] = rand() % 100;
    
    for (k=0; k<=N-1; k++)
        for (p=0; p<=N-1; p++)
        {
            if (M[k][p] < menor)
                menor = M[k][p];
            
            if (M[k][p] > maior)
                maior = M[k][p];
        }
    
    for (k=0; k<=N-1; k++)
    {
        for (p=0; p<=N-1; p++)
            printf("%d ", M[k][p]);
        printf("\n");
    }
    
    printf("Menor número = %d\n", menor);
    printf("Maior número = %d", maior);
}
