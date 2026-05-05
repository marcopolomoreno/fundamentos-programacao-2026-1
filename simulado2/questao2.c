#include<stdio.h>

int main()
{
    int n;
    
    printf("n = ");
    scanf("%d", &n);
    
    int v[n], novo[n], k, p, cont = 0;
    char verif;
    
    printf("v = ");
    for (k=0; k<=n-1; k++)
        scanf("%d", &v[k]);
    
    for (k=0; k<=n-1; k++)
    {
        verif = 's';
        for(p=k-1; p>=0; p--)
        {
            if (v[k] == v[p])
            {
                verif = 'n';
                //printf("\n%d, %c\n", k, verif);
                break;
            }
        }
        
        if (verif == 's')
        {
            novo[cont] = v[k];
            cont++;
        }
    }
        
    printf("novo = ");
    
    for (k=0; k<=cont-1; k++)
        printf("%d, ", novo[k]);
}
