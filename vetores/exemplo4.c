#include<stdio.h>

int main()
{
    int qtd = 10;
    int n[qtd];
    
    printf("Digite %d numeros separados por espaço: ", qtd);
    
    for(int k = 0; k<qtd; k++)
    {
        scanf("%d", &n[k]);
    }
    
    printf("Pares: ");
    for(int k = 0; k<qtd; k++)
    {
        if(n[k]%2 == 0){
            printf("%d; ", n[k]);
        }
    }
    
    printf("Impares: ");
    for(int k = 0; k<qtd; k++)
    {
        if(n[k]%2 != 0){
            printf("%d; ", n[k]);
        }
    }
}
