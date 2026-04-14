#include<stdio.h>

int main()
{
    int cont = 0;
    char palavra[50];
    printf("Digite uma palavra e finalize com um ponto:");
    
    for(int k=0; k<50; k++)
    {
        scanf("%c", &palavra[k]);

        if(palavra[k] == '.')
            break;
        cont++;
    }
    
    int k = 0;
    for(k = 0; k<cont; k++)
    {
        if(palavra[k] != palavra[(cont-1)-k])
        {
            printf("Nao e palindromo.");
            break;
        }
        
        if(k==(cont-1))
            printf("E palindromo.");
    }
}
