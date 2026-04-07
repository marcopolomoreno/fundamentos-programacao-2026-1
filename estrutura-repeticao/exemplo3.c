#include <stdio.h>

int main()
{
    int n = 11;
    int k = 1;
    
    while(k<=30 && n % 10 != 0)
    {
        printf("\nDigite um número: ");
        scanf("%d", &n);
        k++;
    }
}
